#include<iostream>
#include<vector>
using namespace std;
void half(int n){
    for(int i =1; i<n; i++){
        for(int j =n; j>i; j--){
            cout<<" *";
    }
    cout<<endl;
    } 
}
int main(){
    int n;
    cin>>n;
    half(n);
    return 0;

}
