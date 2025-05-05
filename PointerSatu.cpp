#include <iostream>
using namespace std;

Class mahasiswa
{
public:
    int nim;
    void showNIM()
    {
        cout << " NO Induk = " << nim << endl;
    }
};

int main()
{
    mahasiswa mhs(i);
    mhs, showNIM();

    mahasiswa &refMhs = mhs; // reference tot mhs
    refMhs.nim = 2;          // change nim using reference
    mhs.showNim();           // show update nim

    mahasiswa *pMhs = &mhs; // pointer to mhs
    pMhs->nim = 3;          // change nim using pointer
    pMhs->showNim();        // show upadated nim
    return 0;
}
