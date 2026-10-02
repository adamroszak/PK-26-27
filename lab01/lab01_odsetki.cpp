#include <iostream>

using namespace std;

int main() {
    float P = 0.0;
    int T = 0;
    float R = 0.0;

    cout << "Podaj wartość kredytu:";
    cin >> P;
    cout << "Podaj okres kredytowania:";
    cin >> T;
    cout << "Podaj stopę procentową:";
    cin >> R;

    cout << fixed << setprecision(2);




    float I = (P*T*R)/100;

    int M = static_cast<int>(I);

    cout <<"Wynik rzeczywisty:" <<I<< endl;
    cout <<"Wynik całkowity:" <<M<< endl;





    return 0;
}
