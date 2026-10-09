#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int a = 0;
    float temp = 0.0f;
    float b = 0.0f;


    cout << "Wybierz sposób konwersji:" << endl << "[1] Celsjusza na Fahrenheita" << endl << "[2] Fahrenheita na Celsjusza" <<endl;
    cout << "Wybór: ";
    cin >> a;
    
    cout<< "Podaj temperaturę: ";
    cin >> temp;
    cout << fixed << setprecision(2);
    if (a==1 && temp < -273){
        cout << "Zbyt zimno na liczenie!";
    }
    else if (a==1 && temp >= -273) {
        b = 1.8*temp + 32;
        cout << temp << " st. Celsjusza to " << b << " st. Fahrenheita";
    }
    if (a==2 && temp < -459.67){
        cout << "Zbyt zimno na liczenie!";
    }
    
    else if (a==2&&temp>=-459.67){
        b = (temp - 32.0)*5/9;
        cout << temp << " st. Fahrenheita to " << b << " st. Celsjusza";

    }
    
    return 0;
}











