#include<iostream>
using namespace std;  
class Numbers{
    private:
    int num1;
    int num2;
    public:
    void setNum(int a, int b) {
        num1 = a;
        num2 = b;
    }
    int getsum() {
        return(num1+num2);
    }
    int getdifference() {
        return(num1-num2);
    }
};
int main() {
    Numbers obj;
    obj.setNum(900,700);
    cout<<obj.getsum()<<endl;
    cout<<obj.getdifference()<<endl;
    return 0;
}
