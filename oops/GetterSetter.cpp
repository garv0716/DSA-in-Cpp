#include <iostream>
#include <string>
using namespace std;

class Student {
    string name;
    float cgpa;

public:
    // Setter
    void setName(const string& nameVal) {
        name = nameVal;
    }

    void setCgpa(float cgpaVal) {
        cgpa = cgpaVal;
    }

    // Getter
    string getName() const {
        return name;
    }

    float getCgpa() const {
        return cgpa;
    }
};

int main() {
    Student s1;
    s1.setName("Garv");
    s1.setCgpa(9.8f);

    cout << "Name : " << s1.getName() << endl;
    cout << "Cgpa : " << s1.getCgpa() << endl;

    return 0;
}
