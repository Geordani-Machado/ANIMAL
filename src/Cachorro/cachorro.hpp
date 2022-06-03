
#include <iostream>
#include "../Animal/animal.hpp"
using namespace std;

class Cachorro: public Animal {
   public:
    void Movimentar();
    void Comunicar();
};