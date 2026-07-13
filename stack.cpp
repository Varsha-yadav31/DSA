#include<iostream>
#include<vector>
#include<stack>

using namespace std;
class Stack{
    vector<int>v;
    void push(int val){
        v.push_back(val);
    }
    void pop(){
        v.pop_back();
    }
    int top(){
        return v[v.size()-1];
    }
    bool empty(){
        return (v.size() ==0);

    }

};
int main(){
    Stack = s;
    s.push_back(10);
    s.push_back(20);
    s.push_back(30);
    s.push_back(40);
    cout<<s;



}


// class Solution {
// public:
//     int maxSubarraySum(vector<int>& arr, int k) {

//         int sum = 0;
//         for(int i = 0; i < k; i++)
//         {
//             sum += arr[i];
//         }

//         int maxSum = sum;

//         for(int i = k; i < arr.size(); i++)
//         {
//             sum = sum - arr[i-k] + arr[i];

//             maxSum = max(maxSum, sum);
//         }

//         return maxSum;
      
//     }
// };
class Node {
  public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
}
class solution{
public:
    void Traverse(Node* head){
        if(head == NULL){
            return ;
        }
        cout<<head->data<<" ";
        Traverse(head->next);
    }

}
int main(){
    
}