#include <iostream>
#include <vector>
using namespace std;

bool sortedMatrix(vector<vector<int>>& mat, int x) {

    int n = mat.size();
    int m = mat[0].size();

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (mat[i][j] == x) {
                return true;
            }
        }
    }

    return false;
}

int main() {

    vector<vector<int>> mat = {
        {2, 3, 4},
        {5, 6, 7},
        {8, 9, 10}
    };

    int x = 6;

    cout << sortedMatrix(mat, x);

    return 0;
}