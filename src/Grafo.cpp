#include "Grafo.h"

Grafo::Grafo(int V) {
    this->V = V; // atribui o número de vértices
    adj = new list<int>[V]; // cria as listas
}

void Grafo::addedge(int v1, int v2) {

    // adiciona vértice v2 à lista de vértices adjacentes de v1
    adj[v1].push_back(v2);
}

int Grafo::getDegreeOut(int v) {
    return adj[v].size();
}

bool Grafo::haveNeighboor(int v1, int v2) {
    if (find(adj[v1].begin(), adj[v1].end(), v2) != adj[v1].end())
        return true;
    return false;
}

int median(vector<int> v){
    if(sz(v) < 3) return v[0];
    vector<int> medians;
    for(int j = 0; j < sz(v); j += 5){
        if(j+5 > sz(v)){
            sort(v.begin()+j, v.end());
            medians.pb(v[j + (sz(v) - j)/2]);
        }else{
            sort(v.begin()+j, v.begin()+j+5);
            medians.pb(v[j+2]);
        }
    }
    return median(medians);
}

int getKth(vector<int> v, int k){
    if(sz(v) == 1) return v[0];         //implicitly k = 0
    if(sz(v) == 2){
        if(v[0] > v[1]) swap(v[0], v[1]);
        return v[k-1];
    }
    int med = median(v);
    vector<int> lft, rgt;
    for(int j = 0; j < sz(v); j++)
        if(v[j] < med) lft.pb(v[j]);
        else rgt.pb(v[j]);
    if(k > sz(lft)+1) return getKth(rgt, k-sz(lft));
    if(k == sz(lft)+1) return med;
    return getKth(lft, k);
}

void Grafo::dfs(int v) {
    stack<int> pilha;
    bool visitados[V]; //vetor de visitados

    bool ehvegetal;

    int aferido = v;

    //marca todos como não visitados
    for(int i = 0; i< V ; i++)
        visitados[i] = false;

    cout << animais.at(aferido)->getName() <<  "(" << animais.at(aferido)->id << ")" << " -- ";

    std::vector<int> tristeza;

    tristeza.push_back(animais.at(aferido)->id);

    while (true) {




        if (!visitados[v]) {
            if(v != aferido) {
                if(animais.at(v)->getBiomass() != 19)
                cout << animais.at(v)->getName() <<  "(" << animais.at(v)->id << ")" << " -- ";
                tristeza.push_back(animais.at(v)->id);
            }

            ehvegetal = false;
            visitados[v] = true;
            pilha.push(v);
        }

        bool achou = false;
        list<int>::iterator it;

        for(it = adj[v].begin(); it != adj[v].end(); it++) {
            if (!visitados[*it]) {
                achou = true;
                break;
            }
        }

        if (achou) v = *it;
        else {
            pilha.pop();
            if(pilha.empty())
                break;
            v = pilha.top();
            if (ehvegetal == false) {
                cout << "Vegetais" <<  "(" << 30000 << ")" << endl;
                ehvegetal = true;
                tristeza.push_back(30000);
                int k;
	            cin >> k;
	            cout << "Mediana: " << getKth(tristeza, k) << endl;;
                tristeza.clear();
                tristeza.push_back(animais.at(aferido)->id);
                cout << animais.at(aferido)->getName() <<  "(" << animais.at(aferido)->id << ")" << " -- ";
            }
        }

    }

}

int Grafo::getV() const {
    return V;
}

void Grafo::setV(int v) {
    V = v;
}

list<int> *Grafo::getAdj() const {
    return adj;
}

void Grafo::setAdj(list<int> *adj) {
    Grafo::adj = adj;
}
