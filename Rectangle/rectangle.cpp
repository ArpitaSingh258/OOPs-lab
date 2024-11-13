#include <iostream>
using namespace std;
class Rectangle
{
private:
    int length;
    int weidth;

public:
    Rectangle()
    {
        length = 0;
        weidth = 0;
    }
    Rectangle(int l)
    {
        length = l;
        weidth = 0;
    }
    Rectangle(int l, int w)
    {
        length = l;
        weidth = w;
    }
    Rectangle(Rectangle &obj)
    {
        length = obj.length;
        weidth = obj.weidth;
    }
    int getSqArea()
    {
        return length * length;
    }
    int getRectArea()
    {
        return length * weidth;
    }
};
int main()
{

    Rectangle r2(8);
    Rectangle r3(4, 6);
    Rectangle r1(r2);
    cout << "square area:" << r1.getSqArea() << endl;
    cout << "square area:" << r2.getSqArea() << endl;
    cout << "rectangle area:" << r3.getRectArea() << endl;

    return 0;
}