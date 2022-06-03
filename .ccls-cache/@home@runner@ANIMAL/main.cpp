#include <iostream>
#include "preguica.hpp"
#include "cavalo.hpp"
#include "cachorro.hpp"

//#include "animal.hpp"
using namespace std;
int main() {
  /*
    Posso definir um ponteiro pra classe abstrata e alocar nela um objeto da classe herdeira Animal *a;

 Animal *a;
  a = new Preguica;
  a -> Comunicar();
    */

		//não consigo alocar um objeto de classe abstrata
    
    Preguica p;
    p.Comunicar();
    p.Movimentar();

	Cavalo c;
    c.Comunicar();
    c.Movimentar();

  Cachorro d;
    d.Comunicar();
    d.Movimentar();


  return 0;

 // system_pause
  }

  