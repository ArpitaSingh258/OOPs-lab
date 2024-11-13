#include<iostream>
#include<math.h>
using namespace std;
class Shape{
    public:
    virtual int perimeter() = 0;
    void width(int w){
        shape_width = w;
    } 
    void height(int h) {
        shape_height = h;
    }
    
    int shape_width;
    int shape_height;
};
class Rectangle: public Shape {
    public:
    int perimeter(){
        return(2*(shape_height+shape_width));
     }
};
class Square: public Shape{
    public:
    int perimeter(){
        return (4*shape_width);
    }
    friend double circle_perimeter(Square& sq);
    };
    double circle_perimeter(Square& sq) {
    double radius = sq.shape_width;
    return(2*3.14*radius);
};
int main() {
    Rectangle r;
    Square s;
    r.width(10);
    r.height(20);
    s.width(12);
    cout<<"Rectangle Perimeter:"<<r.perimeter()<<endl;
    cout<<"Square Perimeter:"<<s.perimeter()<<endl;
    cout<<"Circle Perimeter:"<<circle_perimeter(s);
    
    return 0;
    
}

