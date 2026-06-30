#include<iostream>
using namespace std;
bool sortedMatrix(int mat , int x){
    int n = mat.size();
    int m = mat[0].size();
    for(int i = 0 ; i<n; i++){
        for(int j = 0; j<m; j++){
            if(mat[i][j]== x){
                return 1;
            }
        }
        return 0;
    }

};
int main(){
    vector<int>mat = {2 3 4 5 6 7 8 9 };
    int x = 6;
    cout<<mat;
}