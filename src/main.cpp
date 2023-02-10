#include <iostream>
#include <vector>
#include "Animal.h"
#include "Grafo.h"

int main() {

    int escolha;

    Grafo grafo(20);

    vector <Animal *> animais;

    grafo.animais.push_back(new Animal("Onça-pintada", "Carnivoro", 0));
    grafo.animais.push_back(new Animal("Macaco", "Herbivoro", 1));
    grafo.animais.push_back(new Animal( "Dourado", "Herbivoro", 2));
    grafo.animais.push_back(new Animal( "Capivara","Herbivoro",3));
    grafo.animais.push_back(new Animal("Veado-campeiro","Herbivoro",4));
    grafo.animais.push_back(new Animal("Piranha","Carnivoro", 5));
    grafo.animais.push_back(new Animal("Anta","Herbivoro",6));
    grafo.animais.push_back(new Animal("Jacaré","Carnivoro",7));
    grafo.animais.push_back(new Animal("Tucano","Herbivoro",8));
    grafo.animais.push_back(new Animal("Tuiuiú","Herbivoro",9));
    grafo.animais.push_back(new Animal("Sucuri","Carnivoro",10));
    grafo.animais.push_back(new Animal("Colhereiro","Herbivoro",11));
    grafo.animais.push_back(new Animal("Ema","Carnivoro",12));
    grafo.animais.push_back(new Animal("Gavião","Carnivoro",13));
    grafo.animais.push_back(new Animal("Sapo","Carnivoro",14));
    grafo.animais.push_back(new Animal("Rato","Herbivoro",15));
    grafo.animais.push_back(new Animal("Coruja-do-campo","Carnivoro",16));
    grafo.animais.push_back(new Animal("Garfanhoto","Herbivoro",17));
    grafo.animais.push_back(new Animal("Pica-pau periquito","Herbivoro",18));
    grafo.animais.push_back(new Animal("Plantae","Autotrofos",19));

    grafo.addedge(0,1);
    grafo.addedge(0,2);
    grafo.addedge(0,7);
    grafo.addedge(0,3);
    grafo.addedge(0,6);
    grafo.addedge(0,4);
    grafo.addedge(1,19);
    grafo.addedge(4,19);
    grafo.addedge(2,19);
    grafo.addedge(3,19);
    grafo.addedge(5,2);
    grafo.addedge(5,3);
    grafo.addedge(6,19);
    grafo.addedge(9,2);
    grafo.addedge(9,19);
    grafo.addedge(9,14);
    grafo.addedge(8,19);
    grafo.addedge(11,19);
    grafo.addedge(7,3);
    grafo.addedge(7,6);
    grafo.addedge(7,2);
    grafo.addedge(7,10);
    grafo.addedge(7,9);
    grafo.addedge(7,14);
    grafo.addedge(7,12);
    grafo.addedge(10,11);
    grafo.addedge(10,9);
    grafo.addedge(10,14);
    grafo.addedge(10,7);
    grafo.addedge(12,14);
    grafo.addedge(12,15);
    grafo.addedge(15,19);
    grafo.addedge(16,15);
    grafo.addedge(16,17);
    grafo.addedge(16,18);
    grafo.addedge(17,19);
    grafo.addedge(18,19);
    grafo.addedge(18,17);
    grafo.addedge(13,18);
    grafo.addedge(13,10);
    grafo.addedge(14,17);

    while(true) {

        cout << "." << endl;
        system("clear");


        cout << "Escolha um animal: ";
        cin >> escolha;

        if(escolha == 20) break;



        cout << "Grau do grafo em relação ao animal: " << grafo.getDegreeOut(escolha) << endl;

        cout << "Possivéis cadeias alimentares do animal: " << endl << endl;

        grafo.dfs(escolha);

        system("read");

        system("clear");


    }
    return 0;
}

