#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int a;
    string p;
    string o;
    string s;


    cout << "Podaj liczbę: ";
    cin >> a;
    if (a%2==0)
        p = "TAK";
    else p = "NIE";

    if (a%8==0)
    o = "TAK";
    else o = "NIE";

    if (a%16==0)
    s = "TAK";
    else s = "NIE";

    cout << "Parzysta: " << p << endl;
    cout << "Podzielna przez 8: "<< o <<endl;
    cout << "Podzielna przez 16: "<< s<<endl;
    cout << "Ósemkowo: " << oct << a <<endl;
    cout << "Szesnastkowo: "<< hex << a << endl;
    
    return 0;
}