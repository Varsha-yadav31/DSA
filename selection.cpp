#include<iostream>
using namespace std;
class Solutin{
public:
    void selection(vector<int>arr){
        int n =arr.size();
        for(int i=1; i<n; i++){
            int min = i;
            for(int j=i+1; j<n; j++){
                if(arr[min]<arr[j]){
                    min=j;
                }
            }
            swap(arr[i],arr[min]);
        }
    }
}
int main(){
    vector<int>arr= {4,6,5,9,8,2};
    for(int i =0; i<n; i++){
        cin>>arr[i]>>" ";
    }
}