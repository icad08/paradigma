#include <iostream>
#include <vektor>
using namespace std;

class dokter;
class pasein{ //asosiasi
public:
    string nama;
    vektor<dokter*> daftar_dokter;
    pasien(string pNama) : nama (pNama){
        cout << "pasein\"" << nama << "\" tidak ada\n";
    }
    ~pasien(){
        cout << "pasien\"" << nama << "\" tidak ada\n";
    }
    void tambahDokter (dokter*);
    void cetakDokter();
};

int main(){

}