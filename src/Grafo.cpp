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

void Grafo::dfs(int v) {
    stack<int> pilha;
    bool visitados[V]; //vetor de visitados

    bool ehvegetal;

    int aferido = v;

    //marca todos como não visitados
    for(int i = 0; i< V ; i++)
        visitados[i] = false;

    cout << animais.at(aferido)->getName() << " -- ";

    while (true) {

        if (!visitados[v]) {
            if(v != aferido) {
                if(animais.at(v)->getBiomass() != 19)
                cout << animais.at(v)->getName() << " -- ";
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
                cout << "Vegetais" << endl;
                ehvegetal = true;
                    cout << animais.at(aferido)->getName() << " -- ";
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
