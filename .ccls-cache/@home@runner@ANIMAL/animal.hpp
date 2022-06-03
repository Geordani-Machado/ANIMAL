#include <iostream>
using namespace std;
#ifndef ANIMAL_H
#define ANIMAL_H
class Animal{

public:

virtual void Comunicar() = 0;
virtual void Movimentar() = 0;
};
#endif