

#ifndef ANIMALWEB_GRAFO_H
#define ANIMALWEB_GRAFO_H

#include <iostream>
#include <list>
#include <algorithm> //função find
#include <stack> // pilha para usar na DFS
#include <vector>
#include "Animal.h"

using namespace std;

class Grafo {

    int V; //Numero de vertices
    list <int> *adj; // ponteiro para um array contendo as listas de adjacências


public:

    vector<Animal *> animais;

    Grafo(int);
    void addedge(int v1, int v2); // adiciona uma aresta no grafo

    int getDegreeOut(int v);

    bool haveNeighboor( int v1, int v2); // verifica o vizinho

    void dfs(int v); // faz uma dfs a partir de um vértice

    int getV() const;

    void setV(int v);

    list<int> *getAdj() const;

    void setAdj(list<int> *adj);

};



#endif //ANIMALWEB_GRAFO_H
