/*  Toms Madžuls, tm22005
 D19. "Izveidot klasi ""Laiks"" - Time, kurā tiek glabāti trīs skaitļi - stunda, minūte, sekunde.
 Klasei izveidot šādas metodes: 
 (1) konstruktors, ar kuru tiek padotas sākotnējās vērtības, 
 (2) destruktors, kurš paziņo par objekta likvidēšanu, 
 (3) metode ""Mainīt"" - change ar trīs parametriem, kas uzstāda jaunās vērtības, 
 (4) metode ""Drukāt"" - print, kas izdrukā laiku, 
 (5) metode ""Distance"" - distance ar trīs parametriem - citu laika momentu, kas aprēķina un izdrukā 
 attālumu starp abiem laika momentiem gan sekundēs, gan minūtēs, gan apvienoti (stundās, minūtēs un sekundēs)."
 Programma izveidota: 04.11.2022 
*/

#include <iostream>       //  g++ /Users/a77/Desktop/D19/*.cpp -o /Users/a77/Desktop/D19/mans
#include "program.h"
using namespace std;

int main() {
  char izvele;
  do{
    Laiks objekts1 = Laiks(12, 30, 54);   //objektam tiek pieskirtas vertibas

    int h, m, s;
    cout << "Ievadiet jaunas laika vertibas: ";   //tiks mainitas objekts1 vertibas
    cin >> h >> m >> s;

    while ((h < 0) || (h > 24) || (m < 0) || (m > 60) || (s < 0) || (s > 60)){  // ja lietotajs ievadis neiespejamu laika vertibu,
      cout << "Ievadiet korektu laiku: ";                                      // tad ta tiks jautata velreiz
      cin >> h >> m >> s;
    }

    objekts1.change(h, m, s);             //lietotajs ievada jaunas laika vertibas, f-ja tas nomaina
    objekts1.print();                 //jaunas vertibas tiek izdrukatas
    objekts1.distance(20, 39, 59);    //aprekina distanci starp iekavas dotajam vertibam un lietotaja ievaditajam "jaunajam vertibam"

    cout << endl << "Vai turpinat? y/n" << endl;
    cin >> izvele;                    //kamer lietotajs atbildes "y", tikmer programma tiks atkartoti izpildita
  }while (izvele == 'y');
  return 0;
}