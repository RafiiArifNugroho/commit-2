#include <iostream>
#include <string>

using namespace std;

class siswa;
class orang;
{
private:
    string nama;

public:
    void setNama(string pNama);
    friend class siswa; // Declare class siswa as a friend  of class orang
}

class siswa
{
private:
    int id;

public:
    void setId(int pId);
    void displayA11(orang &a); // Method to show name from orang class
};

void siswa::displayA11(orang &a)
{
    cout << id << endl
         << a.nama;
}
void orang::setNama(string pNama)
{
    nama = pNama;
}
void siswa::setId(int pId)
{
    id = pId;
}
int main()
{
    orang joko;
    joko.setnama(" Joko susilo");
    siswa joko_siswa;
    joko_siswa.setId(1);
    joko_siswa.displayA11(joko);
    return 0;
}