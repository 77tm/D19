#include <iostream>
#include "program.h"
using namespace std;

Laiks::Laiks (int stunda, int minute , int sekunde) { // Konstruktors
      Stunda = stunda;
      Minute = minute;
      Sekunde = sekunde;
}

Laiks::~Laiks (){                                     // Destruktors
    cout << "Objekts ir likvidets" << endl;
}

void Laiks::change(int h, int m, int s){              //f-ja, kas maina objekta vertibas
    Stunda = h;
    Minute = m;
    Sekunde = s;
}

void Laiks::print(){                                  //f-ja izdruka jaunas vertibas
    cout << "Jaunas vertibas: " << Stunda << ":" << Minute << ":" << Sekunde << endl;
}

void Laiks::distance(int h, int m, int s){            //aprekina attalumu starp laikiem
    int distanceStundas;
    int distanceMinutes;
    int distanceSekundes;

    if (Stunda > h){                    //paskatas kura vertiba lielaka un no tas atnem mazako, lai rezultats butu pozitivs
        distanceStundas = Stunda - h;       //h, m, s iegust no main.cpp 
    }else{                                  //Stunda, Minute, Sekunde tiek ieguti no objekta vertibam, kuram pievieno f-ju
        distanceStundas = h - Stunda;
    }
    if (Minute > m){
        distanceMinutes = Minute - m;
    }else{
        distanceMinutes = m - Minute;
    }
    if (Sekunde > s){
        distanceSekundes = Sekunde - s;
    }else{
        distanceSekundes = s - Sekunde;
    }

    cout << "Distance sekundees: " << (((distanceStundas * 60)*60) + (distanceMinutes * 60) + distanceSekundes)<< " s" << endl;
    cout << "Distance minutees: " << ((distanceStundas*60) + distanceMinutes + ((distanceSekundes * 1.0)/60)) << " m" <<  endl;
    cout << "Distance starp laikiem: " << distanceStundas << ":" << distanceMinutes << ":" << distanceSekundes << endl;
}
