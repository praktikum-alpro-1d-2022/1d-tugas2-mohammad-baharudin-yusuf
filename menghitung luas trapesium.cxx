#include <iostream>
using namespace std;
int main(){
    
      //Menghitung luas trapesium
      float a4, b4, t4, L4;
      cout << "Masukan nilai sisi a,b dan tinggi trapesium : \n";
      cin >> a4 >> b4 >> t4;
      L4 = 0.5*(a4+b4)*t4;
      cout << "Hasil hitung luas trapesium adalah : "<<L4;
      cin.get();
      return 0;
}