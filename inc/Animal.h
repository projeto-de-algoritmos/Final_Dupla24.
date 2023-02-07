#pragma once

#include <string>

class Animal {

private:
    std::string name;
    std::string type_consumer;
    int biomass;

public:
    Animal();
    Animal(std::string name, std::string type_consumer, int biomass);
    ~Animal();
    std::string getName();

    void setName(const std::string &name);

    std::string getTypeConsumer();

    void setTypeConsumer(const std::string &typeConsumer);

    int getBiomass();

    void setBiomass(int biomass);
};

