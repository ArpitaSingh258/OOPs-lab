#include <iostream>
using namespace std;
template<class T>
class Test{
    private:
        T answer;
    public:
        Test(T n): answer(n){
            cout<<"Inside constructor"<<endl;
        }
        T getNumber(){
            return answer;
        }
};

int main() {
    Test<int> numberInt(10);
    cout<<"Integer number n "<<numberInt.getNumber()<<endl;
    

    return 0;
}