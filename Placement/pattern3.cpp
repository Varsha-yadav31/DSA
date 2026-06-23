#include <iostream>
#include <vector>
using namespace std;
void Number(int n){
    int num = 1;
    for(int i =1; i<n; i++){
        for(int j =1; j<=i; j++){
            cout<<num<<" " ;
            num++;
    }
    cout<<endl;
    } 
}
int main(){
    int n;
    cin>>n;
    Number(n);
    return 0;

}
