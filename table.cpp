#include <iostream>
using namespace std;
/*int main(){
    int n ;
    cin>>n;
    for(int i = 1; i <= 10; i++){
        cout<< n << "*" << i << "=" << n * i<<endl;
    }
}
*/

void table(int n ,int i = 1){
   if(i==11)
    return;
    cout<< n << "*" << i << "=" << n * i<<endl;
    i++;
    table(n,i);
}

int main(){
    int n = 5;
    table(n);
    
}