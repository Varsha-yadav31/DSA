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
// #include <iostream>
// #include <map>
// using namespace std;

// int main() {

//     // Creating a map
//     map<int, string> mp;

//     // Adding elements
//     mp[1] = "Apple";
//     mp[2] = "Banana";
//     mp[3] = "Mango";

//     // Iterating using iterator
//     for (auto it = mp.begin(); it != mp.end(); it++) {
//         cout << "Key: " << it->first 
//              << ", Value: " << it->second << endl;
//     }

//     return 0;
// }