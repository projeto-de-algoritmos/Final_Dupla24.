#include "Animal.h"

Animal::Animal() {

    name = "Treta";
    type_consumer = "";
    biomass = 0;


}

Animal::Animal(std::string name, std::string type_consumer, int biomass, int id) {
    this->name = name;
    this->type_consumer = type_consumer;
    this->biomass = biomass;
    this->id = id;
}

Animal::~Animal() {};

std::string Animal:: getName(){
    return name;
}

void Animal::setName(const std::string &name) {
    Animal::name = name;
}

std::string Animal::getTypeConsumer() {
    return type_consumer;
}

void Animal::setTypeConsumer(const std::string &typeConsumer) {
    type_consumer = typeConsumer;
}

int Animal::getBiomass(){
    return biomass;
}

void Animal::setBiomass(int biomass) {
    Animal::biomass = biomass;
}

