#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        int m = matrix.size();
        int n = matrix[0].size();

        int st = 0;
        int end = m * n - 1;

        while (st <= end) {

            int mid = st + (end - st) / 2;

            int row = mid / n;
            int col = mid % n;

            if (matrix[row][col] == target)
                return true;

            else if (matrix[row][col] < target)
                st = mid + 1;

            else
                end = mid - 1;
        }

        return false;
    }
};

int main() {

    vector<vector<int>> matrix = {
        {1,3,5,7},
        {10,11,16,20},
        {23,30,34,60}
    };

    Solution obj;

    cout << obj.searchMatrix(matrix, 3);

    return 0;
}