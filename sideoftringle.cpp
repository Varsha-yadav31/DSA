/*find the given side are tringle or not*/

#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if((a+b>c)&&(b+c>a)&&(c+b>a)){
        cout<<"valid"<<endl;
    }else{
        cout<<"Invalid";
    }
}