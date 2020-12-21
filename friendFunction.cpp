>>>>>.................main.cpp...................................<<<

#include<iostream>
#include<iomanip>
#include "Rectangle.h"
using namespace std;

void dimension(Rectangle &obj){
    
    obj.height * 2;
    obj.width *2;
    
}

int main(){
    cout << fixed <<showpoint <<setprecision(2);
   Rectangle Rec(2.5,2);
   double x,y;
   dimension(Rec);
   x = Rec.getArea();
   y = Rec.getPerimeter();
   cout << "Area of the rectangle is: "<< x <<endl;
   cout << "Perimeter of the rectangle is: "<< y <<endl;
    
    return 0;
}

>>>>.........................Rectangle.h.............................<<

class Rectangle{
    private:
        double height;
        double width;
        
        
    public:
        Rectangle(double a, double b);
        
        double getArea() const;
        double getPerimeter() const;
        
        friend void dimension(Rectangle &obj);
};

<<<<<<....................Rectangle.cpp................................>>>>>>>>>

#include "Rectangle.h"

Rectangle::Rectangle(double a, double b){
            height =a;
            width =b;
        }

double Rectangle::getArea() const{
    return width * height;
}
double Rectangle::getPerimeter() const{
    int x;
    x = 2 *(width + height);
    return x;
}

