#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int, string> mp;
    mp[1] = "Apple";
    mp[2] = "banana";
    mp[3] = "orange";
    for (auto it = mp.begin(); it != mp.end(); it++) {
        cout<<"Key: "<<it->first <<"Value: "<<it->second<<endl;
    }
    return 0;
}
