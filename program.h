#pragma once
using namespace std;

class Laiks {     // klase
  private:           // Access specifier
    int Stunda;
    int Minute;
    int Sekunde;
  public:
    void setStunda(int stunda) { //setteri un getteri, lai mainitu vai iegutu vertibas arpus klases definetam f-jam
        Stunda = stunda;
    }

    int getStunda(){ 
        return Stunda;
    }

    void setMinute(int minute) {
        Minute = minute;
    }

    int getMinute(){
        return Minute;
    }

    void setSekunde(int sekunde) {
        Sekunde = sekunde;
    }

    int getSekunde(){
        return Sekunde;
    }

    Laiks (int h = 0, int m = 0, int s = 0);    // Konstruktors ar default vertibam
    ~Laiks();                                   //Destruktors

    void change(int h, int m, int s);           //Definetas f-jas
    void print();
    void distance(int h, int m, int s);
};



