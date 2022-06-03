#include <iostream>
#include "Preguica/preguica.hpp"
#include "Cavalo/cavalo.hpp"
#include "Cachorro/cachorro.hpp"
#include "Gato/gato.hpp"
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

  Gato g;
    g.Comunicar();
    g.Movimentar();
  return 0;

 // system_pause
  }

  