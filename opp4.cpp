#include<iostream>
using namespace std;
class Shape{
    protected:
        int shape_length;
        int shape_width;
    public:
        void getWidth(int w){
            shape_width = w;
        }
        void getLength(int l){
            shape_length = l;
        }
        virtual int getPerimeter() = 0;

};
class Square: public Shape{
    public:
        int getPerimeter(){
            return (4 * shape_length);
        }
        friend int circle_perimeter(Square sobj);
};
class Rectangle: public Shape{
    public:
        int getPerimeter(){
            return (2*(shape_length+shape_width));
        }
};
int circle_perimeter(Square sobj){
    return (2*3.14*sobj.shape_length);
}
int main(){
    Rectangle r;
    Square s;
    r.getWidth(10);
    r.getLength(20);
    s.getLength(10);
    cout<<"Perimeter of rectangle: "<<r.getPerimeter()<<endl;
    cout<<"Perimeter of square: "<<s.getPerimeter()<<endl;
    cout<<"Perimeter of circle: "<<circle_perimeter(s)<<endl;
    return 0;  
}