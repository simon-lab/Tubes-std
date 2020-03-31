#include <iostream>
#include "DataBerobat2.cpp"

using namespace std;

int main()
{
    cout << "Hello world!" << endl;

    list penyakit;
    list pasien;
    address p;
    string a;
    int b;
    b = 0;
    createList(penyakit);
    createList(pasien);
    while(b <= 5){
    cout << "Nama Penyakit Baru: " << endl;
    cin >> a;
    createNew13(a, p);
    insertlast1(penyakit, p);
    b++;
    }
    printdata1(penyakit);

    cout<<"L3"<<endl;
    cin >> a;
    createNew13(a, p);
    insertfirst3(pasien, p);
    cin >> a;
    createNew13(a, p);
    insertfirst3(pasien, p);
    printdata3(pasien);
}
