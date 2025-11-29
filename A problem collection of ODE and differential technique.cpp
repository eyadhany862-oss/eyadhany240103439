#include <iostream>
#include <cmath>
using namespace std;


double f(double x) {
    return x*x - 2;
}

double fprime(double x) {
    return 2*x;
}

double newton(double guess, int iterations) {
    double x = guess;
    for (int i = 0; i < iterations; i++) {
        x = x - f(x)/fprime(x); 
    }
    return x;
}

int main() {
    double root = newton(1.0, 10); 
    cout << "Approximate root: " << root << endl;
    return 0;
}