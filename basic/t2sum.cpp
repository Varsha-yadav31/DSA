#include<iostream>
using namespace std;
void sum(int arr[], int n, int target){
    int st =0 , end = n-1;
    while(st<end){
        int currSum = arr[st] + arr[end];
        if(currSum == target){
            cout<<arr[st]<<" "<< arr[end]<<endl;
            return;
        }else if (currSum < target){
            st++;
        }else{
            end--;
        }

    }

}
int main(){
    int arr[] = {1,3,5,6,7,9};
    int n = sizeof(arr) / sizeof(arr[0]);
    sum(arr,n,11);
};