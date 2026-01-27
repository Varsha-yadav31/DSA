#include<iostream>
#include <iostream>
using namespace std;

int main() {
    int a, b, n;
    
    cin >> a >> b >> n;   // input values
    
    int d = b - a;       // common difference
    int nthTerm = a + (n - 1) * d;
    
    cout << nthTerm;
    
    return 0;
}
