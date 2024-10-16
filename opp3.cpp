#include<iostream>
using namespace std;
static int count = 0;
class circle{
    private:
        float radius;
        const float PI = 3.14;
    public:
        circle() {
            radius = 0;
        }
        circle(float r) {
            radius = r;
            cout<<++count<<endl;
        }
        float getArea() {
            return PI*radius*radius;
        }
        float getCircumference() {
            return 2*PI*radius;
        }
};
int main() {
    circle obj1(5);
    circle obj2;
    circle obj3(3);
    cout<<obj1.getArea()<<endl;
    cout<<obj1.getCircumference()<<endl;
    cout<<obj2.getArea()<<endl;
    cout<<obj2.getCircumference()<<endl;
    return 0;
}