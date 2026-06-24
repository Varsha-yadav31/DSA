#include <iostream>
using namespace std;

int fib(int n) {
    if (n == 1)
        return 0;

    if (n == 2)
        return 1;

    int r = fib(n - 1);
    int r1 = fib(n - 2);

    int s = r + r1;
    return s;
}

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cout << fib(i) << " ";
    }

    return 0;
}