#include <iostream>
using namespace std;
int main()
{
      //Menghitung luas belah ketupat
      float d1, d2, L6;
      cout << "Masukan nilai diameter 1 dan diameter 2 belah ketupat : \n";
      cin >> d1 >> d2;
      L6 = 0.5*d1*d2;
      cout << "Hasil hitung luas belah ketupat adalah : "<<L6;
      cin.get();
      return 0;
      
}