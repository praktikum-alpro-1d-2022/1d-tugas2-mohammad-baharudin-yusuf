#include <iostream>
using namespace std;
int main()
{
      //Menghitung Luas Lingkaran
      float Phi, r8, L8;
      Phi = 3.14;
      cout << "Masukkan nilai Jari-jari: ";
      cin >> r8;
      L8 = Phi*(r8*r8);
      cout << "Luas dari lingkaran adalah: " << L8 << endl;
      cin.get();
      return 0;
      
}