#include <iostream>
using namespace std;
int main()
{
      //Menghitung luas layang-layang
      float d3, d4, L7;
      cout << " Masukkan nilai diameter 1 dan diameter 2 layang-layang\n";
      cin >> d3 >> d4;
      L7 = 0.5*d3*d4;
      cout << "Hasil hitung luas layang-layang adalah :" << L7;
      cin.get();
      return 0;
      
}