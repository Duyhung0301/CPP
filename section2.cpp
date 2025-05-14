#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int id;
    float gpa;

public:
    Student(string studentName, int studentId, float studentGpa) {
        name = studentName;
        id = studentId;
        gpa = studentGpa;
    }

    void display_info() {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "GPA: " << gpa << endl;
    }

    bool has_scholarship() {
        if (gpa >= 3.5) {
            return true;
        } else {
            return false;
        }
    }
};

int main() {
    Student student1("Hưng nè", 999999, 3.8);

    student1.display_info();

    if (student1.has_scholarship()) {
        cout << "OKe có học bổng nha" << endl;
    } else {
        cout << "Tẹt tẹt ko có học bổng ùi" << endl;
    }

    return 0;
}
