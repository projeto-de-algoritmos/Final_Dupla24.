#include <iostream>
#include <vector>
#include "Animal.h"
#include "Grafo.h"
#include "Mediana.h"

int main() {

    int escolha;

    Grafo grafo(20);


    grafo.animais.push_back(new Animal("Onça-pintada", "Carnivoro", 0, 1200));
    grafo.animais.push_back(new Animal("Macaco", "Herbivoro", 1, 3600));
    grafo.animais.push_back(new Animal( "Dourado", "Herbivoro", 2, 3000));
    grafo.animais.push_back(new Animal( "Capivara","Herbivoro",3, 4500));
    grafo.animais.push_back(new Animal("Veado-campeiro","Herbivoro",4, 4200));
    grafo.animais.push_back(new Animal("Piranha","Carnivoro", 5, 6000));
    grafo.animais.push_back(new Animal("Anta","Herbivoro",6,2000));
    grafo.animais.push_back(new Animal("Jacaré","Carnivoro",7,800));
    grafo.animais.push_back(new Animal("Tucano","Herbivoro",8,6000));
    grafo.animais.push_back(new Animal("Tuiuiú","Herbivoro",9,4000));
    grafo.animais.push_back(new Animal("Sucuri","Carnivoro",10,1500));
    grafo.animais.push_back(new Animal("Colhereiro","Herbivoro",11, 3000));
    grafo.animais.push_back(new Animal("Ema","Carnivoro",12,2000));
    grafo.animais.push_back(new Animal("Gavião","Carnivoro",13,600));
    grafo.animais.push_back(new Animal("Sapo","Carnivoro",14,4300));
    grafo.animais.push_back(new Animal("Rato","Herbivoro",15, 8000));
    grafo.animais.push_back(new Animal("Coruja-do-campo","Carnivoro",16,3999));
    grafo.animais.push_back(new Animal("Garfanhoto","Herbivoro",17,12000));
    grafo.animais.push_back(new Animal("Pica-pau periquito","Herbivoro",18, 3456));
    grafo.animais.push_back(new Animal("Plantae","Autotrofos",19,30000));

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

