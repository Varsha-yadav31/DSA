#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void insertion(vector<int>& arr) {
        int n = arr.size();
        for (int i = 1; i < n; i++) {
            int curr = arr[i];
            int pre = i - 1;
            while (pre >= 0 && arr[pre] > curr) {
                arr[pre + 1] = arr[pre];
                pre--;
            }
            arr[pre + 1] = curr;
        }
    }
};

int main() {
    vector<int> arr = {8, 6, 7, 4, 9};
    Solution obj;
    obj.insertion(arr);
    for (int x : arr)
        cout << x << " ";

    return 0;
}