#include <iostream>
using namespace std;

class mahasiswa
{
    public;
    int nim;
    void showNim()
    {
        cout << "No Induk = " << nim << endl;
    }
};

int main()
{
    mahasiswa *mhs = new mahasiswa; // Point to class object
    mhs->nim = 1234567890;          // Accessing class member using pointer
    mhs - showNim();                // Calling class method using pointer

    delete mhs; // Freeing allocated memory
    return 0;
}