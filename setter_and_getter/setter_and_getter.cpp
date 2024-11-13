#include <iostream>
using namespace std;

class Employ {
    private:
        int salary;
    public:
        void setSalary(int s) {
            salary = s;
        }
        int getSalary() {
            return salary;
        }
};

int main() {
    Employ obj;
    obj.setSalary(50000);
    cout << obj.getSalary() << endl;
    return 0;
}
