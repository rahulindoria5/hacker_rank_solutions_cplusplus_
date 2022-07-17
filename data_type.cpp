#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;

int main() {
    // Complete the code.
    
    int a;
    double d;
    char ch;
    long int fl;
    double dl;
    float fv;
    
    cin >> a;
    cout << a <<" " ;
    cin >> fl;
    cout  << fl << " ";
    cin >> ch;
    cout << ch << " ";
    cin >> fv;
    cout << fixed << setprecision(3)  << fv << " ";

    cin >> dl;
    cout << fixed << setprecision(5) << dl;

    return 0;    
}
