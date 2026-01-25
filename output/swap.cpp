#include <iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout << "a = "<< a <<"b = "<< b<<endl;

}
/* without declering 3rd veriable 
int main(){
    int m,n;
    cin>>m>>n;

    swap(m,n);
    
    cout<<"a = "<< a << "b = " << b <<endl;

}
*/
