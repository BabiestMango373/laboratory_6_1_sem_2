//
//  main.cpp
//  ханое
//
//  Created by Andrey Scherbakov on 08.02.2024.
//

#include <iostream>
#include <cmath>
using namespace std;

int fact(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * fact(n-1);
    }
}
double f_n(double x, int n) {
    return pow(x, 2*n + 1) / fact(2*n + 1);
}
double s(double x, int n) {
    if (n == 0) {
        return x;
    }
    else {
        return s(x, n-1) + f_n(x, n);
    }
}
int main(){
    setlocale(LC_ALL,"RU");
    double x ;
    int n ;
    cout << "Введите x: ";
    cin >> x;
    cout << "Введите n: ";
    cin >> n;
    double sum = s(x,n);
    cout << sum;
}
