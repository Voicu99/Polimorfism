// Polimorfism.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
//Polimorfism -> mai multe fete, forme

//void functie(int a)
//{
//
//}
//void functie(bool b)
//{
//
//}
// Polimorfims static , Polimorfims de compilare

class Base
{
public:
    Base()
    {
        var = 0;
    }
    Base(float b)
    {
        var = 50;
    }

    Base(int var)
    {
        this->var = var;
    }
    int var;
};

class Animal {
public:
    virtual void sunet()
    {
        std::cout << "Animalul face un sunet ." << std::endl;
    }
    virtual ~Animal()
    {
        std::cout << "Animalul este eliberat" << std::endl;
    }
};
class Caine : public  Animal
{
public:
    void sunet() override
    {
        std::cout << "Cainele Latra : Ham Ham!" << std::endl;
    }
    void roade()
    {
        std::cout << "Cainele Roade\n";
    }
};

class Pisica : public Animal
{
public:
    void sunet() {
        std::cout << "Pisica miauna : Miau Miau!" << std::endl;
    }
    ~Pisica()
    {
        std::cout << "Pisica a fost eliberata\n";
    }
};

void scoateSunete(Animal* animal)
{
    animal->sunet();
}

int main()
 {
    Base b;
    Base b2(10);
    bool b_var = 1;
    Base b3((int)1.3f);

    Animal* a = new Animal();
    Animal* c = new Caine();
    Animal* d = new Pisica();
    //a->sunet();
    //c->sunet();
    //d->sunet();
    scoateSunete(a);
    scoateSunete(c);
    scoateSunete(d);

    delete d;
}