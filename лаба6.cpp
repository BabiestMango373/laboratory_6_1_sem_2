//
//  main.cpp
//  лаба 6_1  сем 2
//
//  Created by Andrey Scherbakov on 12.02.2024.
//

#include <iostream>
#include <cmath>
using namespace std;
int main() {
    setlocale(LC_ALL,"RU");
    double x;
    int n;
    cout << "Введите значение x: ";
    cin >> x;
    cout << "Введите количество членов ряда n: ";
    cin >> n;

    double sum = 0;
    for(int i = 0; i <= n; ++i) {
        double term = pow(x, 2*i+1) / tgamma(2*i+2);
        sum += term;
    }

    cout << "Сумма ряда равна " << sum << endl;
    return 0;
}
