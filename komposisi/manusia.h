#ifndef MANUSIA_H
#define MANUSIA_H
using namaspace std;

class manusia {
public: 
    string name;
    jantung varJantung;

    manusia (manusia pName) : name(pName){

    }
    ~manusia() {
        cout << name <<"mati\n";
    }

};
#endif