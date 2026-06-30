#include <iostream>
#include <vector>
using namespace std;

// vector<int> vec;
// vector<int> vec = {1, 3, 2};
// vector<int> vec(3, 0); // Size = 3, all elements initialized to 0

int main() {

    // Initialize the vector
    vector<int> vec;

    // size() : tells the current size of vector
    cout << "Size: " << vec.size() << endl;

    // push_back() : inserts element at the end
    vec.push_back(28);
    vec.push_back(3);
    vec.push_back(2);
    vec.push_back(5);

    // pop_back() : removes the last element
    vec.pop_back();

    // front() : returns first element
    cout << "Front Element: " << vec.front() << endl;

    // back() : returns last element
    cout << "Back Element: " << vec.back() << endl;

    // at() : returns element at given index
    cout << "Element at index 2: " << vec.at(2) << endl;

    return 0;
}