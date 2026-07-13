// Find sum of squares of the first 3 natural numbers
#include <iostream>
using namespace std;
int main(){
    int sum = 0;
    for(int i = 1;i <=3; i++){
        sum = sum + (i * i);
        cout<< sum;

    }
}