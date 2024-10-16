#include<iostream>
using namespace std;
class calc{
    private:
        int num1;
        int num2;
    public:
        void setNum(int s1, int s2){
            num1=s1;
            num2=s2;
        }
        int getSum() {
            return(num1+num2);
        }
        int getDifference() {
            return(num1-num2);
        } 
};
int main() {
    calc obj;
    obj.setNum(700, 300);
    cout<<obj.getSum()<<endl;
    cout<<obj.getDifference()<<endl;
    return 0;
}