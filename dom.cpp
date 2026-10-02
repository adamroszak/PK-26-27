#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {


    string imie;
    float a = 0.0;
    float b = 0.0;
    float c = 0.0;
    

    cout << "Podaj swoje imię:" << endl;

    cin >> imie;

   cout << "Hejka "<< imie << "!" << endl;
   cout << imie << "," << " teraz policzmy objętość prostopadłościanu!" << endl;
   cout << "Podaj pierwszy wymiar: " << endl;
   cin >> a;
   cout << "Podaj drugi wymiar: " << endl;
   cin >> b;
   cout << "Podaj trzeci wymiar: " << endl;
   cin >> c;

   float V = a*b*c;
   cout << "Objętość prostopadłościanu jest równa: " << V << endl;

   int M = static_cast<int>(V);
   cout << "Objętość zaokrąglona do liczb całkowitych wynosi: " << M << endl;

   float x = V;

   cout << fixed << setprecision(2);
   
   cout << "Objętość zaokrąglona do dwóch miejsc po przecinku wynosi: " << V << endl;
   return 0;
}