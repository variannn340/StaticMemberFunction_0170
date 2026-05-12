#include <iostream>
using namespace std;

class Mahasiswa {

public:
    static int nim; //deklarasi variabel static waktu yaitu variabel nim
    //deklarasi variabel member
    int id;
    string nama;

    //deklarasi orosedur setID() dan printAll()
    void setID();
    void printAll();

    //deklarasi constructor Mahasiswa dengan parameter pnama
    Mahasiswa(string pnama) :nama(pnama) {
        setID();
    }
};

    //memberi value ke variabel nim dari class Mahasiswa
    int Mahasiswa::nim = 10;

    //mengimplementasi prosedur - prosedur di luar class
    void Mahasiswa::setID(){
        id = ++nim;
};