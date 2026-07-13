#include<iostream>
#include <vector>
using namespace std;
int main(){
    vector<int > nums = {1,3,2,5,7};
    int target = 9;
    for(int i =0; i<nums.size(); i++){
        for(int j=1; j<nums.size(); j++){
            if(nums[i] + nums[j] == target){
                cout<<i<<" "<<endl;
            }
        }
    }
}