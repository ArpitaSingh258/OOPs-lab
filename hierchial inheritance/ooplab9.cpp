#include <iostream>
using namespace std;

class person {
    char name[30];
public:
    void read() {
        cout << "Enter Name: ";
        cin >> name;
    }
    void display() {
        cout << "Name: " << name << endl;
    }
};

class sport : public person {
    int m = 50;
public:
    void display() {
        person::display();
        cout << "Sport points: " << m << endl;
    }
};

class student : public person {
    int m = 100;
public:
    void display() {
        person::display();
        cout << "Student marks: " << m << endl;
    }
};

int main() {
    sport sp;
    student st;
    sp.read();
    sp.display();
    st.read();
    st.display();
    return 0;
}
