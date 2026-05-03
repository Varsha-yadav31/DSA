#include <iostream>
#include <string>
using namespace std;

struct teacher {
    string name;
    int age;
    int salary;
    bool english;
    string gender;

    void teacherdetail() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Salary: " << salary << endl;
        cout << "Knows English: " << (english ? "Yes" : "No") << endl;
        cout << "Gender: " << gender << endl;
        cout << " " << endl;
    }
};

int main() {

    teacher school[10] = {
        {"Varsha", 30, 20000, true, "Female"},
        {"Rahul", 35, 25000, false, "Male"},
        {"Anita", 28, 22000, true, "Female"},
        {"Suresh", 40, 30000, true, "Male"},
        {"Meena", 32, 24000, false, "Female"},
        {"Arjun", 29, 21000, true, "Male"},
        {"Kiran", 45, 35000, true, "Male"},
        {"Pooja", 27, 20000, false, "Female"},
        {"Ravi", 38, 28000, true, "Male"},
        {"Neha", 31, 23000, true, "Female"}
    };

    for (int i = 0; i < 10; i++) {
        school[i].teacherdetail();
    }

    return 0;
}

