#include<iostream>
using namespace std;

int multiply(int n)
{
    if(n == 1)
    {
        return 1;
    }

    int ans = multiply(n - 1);
    int mul = ans * n;

    return mul;
}

int main()
{
    int n;
    cin >> n;

    cout << multiply(5);

    return 0;
}