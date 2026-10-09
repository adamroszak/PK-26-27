#include <iostream>
#include <iomanip>

using namespace std;

int main (){
    cout << "Wybierz precyzję:" <<endl;
    cout << "[1] pojedyncza precyzja" << endl;
    cout << "[2] podwójna precyzja" << endl;
    cout << "Wybór: ";

    int wybor;
    

    cin >> wybor;

    

    if(wybor==1){
        float a;
        float b;
        float suma;
        float roznica;
        float iloczyn;
        float iloraz;

        cout << "Podaj a: ";
        cin >> a;
        cout << "Podaj b: ";
        cin >> b;
        
        suma = a + b;
        
        cout << fixed << setprecision(12);
        
        cout << "Suma: " << suma << endl;
        cout << "Różnica: "<<a-b<< endl;
        cout << "Iloczyn: "<<a*b<< endl;
        cout << "Iloraz: "<<a/b<<endl;
    }
    else if(wybor==2){
        double a, b, suma, roznica, iloczyn, iloraz;
        cout << "Podaj a: ";
        cin >> a;
        cout << "Podaj b: ";
        cin >> b;
        
        cout << fixed << setprecision(12);
        cout << "Suma: " <<a+b<< endl;
        cout << "Różnica: "<<a-b<< endl;
        cout << "Iloczyn: "<<a*b<< endl;
        cout << "Iloraz: "<<a/b<<endl;
    }
    else {cout << "Niepoprawny wybór";}
    return 0;
}