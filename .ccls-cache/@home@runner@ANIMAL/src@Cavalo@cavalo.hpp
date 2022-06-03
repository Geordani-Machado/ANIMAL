#include <iostream>
#include "../Animal/animal.hpp"
using namespace std;

class Cavalo: public Animal {
  
  public:
    void Movimentar();
    void Comunicar();
};