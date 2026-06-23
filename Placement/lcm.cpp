#include<iostream>
using namespace std;
int cal(int a , int b){
    while(b!=0){
    int rem = a%b;
    a= b;
    b = rem;
    }
    return a;
}
int main(){
    int a = 6, b = 20;
    int hcf = cal(a,b);
    int lcm = (a * b)/hcf;
    cout<<lcm;
}



// #include <iostream>
// using namespace std;

// int countDigits(int n)
// {
//     int count = 0;

//     while(n != 0)
//     {
//         n = n / 10;
//         count++;
//     }

//     return count;
// }

// int main()
// {
//     int n;
//     cin >> n;

//     cout << "Number of digits = " << countDigits(n);

//     return 0;
// }