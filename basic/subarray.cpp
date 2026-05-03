#include <iostream>
#include <vector>

using namespace std;

void subarray(vector<int>& arr , int n){
    for(int st = 0; st < n; st++){
        for(int end = st; end < n; end++){
            for(int i = st; i <= end; i++){
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
}

int main(){
    vector<int> arr = {1,2,3,4,5,6};
    int n = arr.size();

    cout << "All the possible subarrays:\n";
    subarray(arr, n);

    return 0;
}