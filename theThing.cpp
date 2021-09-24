
#include <stdio.h>
#include <iostream>
#include <cmath>
using namespace std;

int main() {

    float a, b, c, x1, x2, diskriminan;
    cout << "Masukkan koefisien a, b, dan c!";
    cin >> a >> b >> c;
    diskriminan = b*b - 4*a*c;
    
    if (diskriminan > 0) {
        x1 = (-b + sqrt(diskriminan)) / (2*a);
        x2 = (-b - sqrt(diskriminan)) / (2*a);
        cout << "Hasil penyelesaiannya adalah:\nx1: " << x1 << ", x2: " << x2;
    }
    
    else if (diskriminan == 0) {
        x1 = -b/(2*a);
        cout << "Akarnya sama, yaitu" << x1;
    }
    else
    {
        cout << "Hasil adalah bilangan imajiner!";
    }
    return 0;
}
