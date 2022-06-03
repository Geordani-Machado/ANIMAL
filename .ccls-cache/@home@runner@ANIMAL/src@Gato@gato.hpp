#include <iostream>
#include "../Animal/animal.hpp"
using namespace std;

class Gato: public Animal {
   public:
    void Movimentar();
    void Comunicar();
};