#include <iostream>

using namespace std;

int main(){
    int a;

    cout << "Podaj liczbę: ";
    cin >> a;

    cout << "Parzysta: " << (a%2==0 ? "TAK" : "NIE") << endl;
    cout << "Podzielna przez 8: " << (a%8==0 ? "TAK" : "NIE")<< endl;
    cout << "Podzielna przez 16: " << (a%16==0 ? "TAK" : "NIE") << endl;

    cout << "Ósemkowo: " << oct << a <<endl;
    cout << "Szesnastkowo: " << hex << a <<endl;
    
    return 0;
}