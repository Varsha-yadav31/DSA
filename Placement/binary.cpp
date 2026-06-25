#include <iostream>
#include <vector>
using namespace std;

int Bs(vector<int> arr, int target) {
    int st = 0;
    int end = arr.size() - 1;

    while (st <= end) {
        int mid = st + (end - st) / 2;

        if (arr[mid] == target) {
            return mid;
        }
        else if (arr[mid] < target) {
            st = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }

    return -1;
}
// recurssion
// int left = bs(v,target,st,mid-1)
// int right= bs(arr,target,mid+1, e)
// if(arr[mid]== target)
//     return mid;
// if(left! = -1)return left;
// if(right!= -1 return right);

int main() {
    vector<int> arr = {10, 20, 30, 40, 50};
    int target = 30;
    int ans = Bs(arr, target);
    if (ans != -1)
        cout << "Element found at index " << ans;
    else
        cout << "Element not found";
    return 0;
}

