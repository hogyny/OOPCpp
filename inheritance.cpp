//---------------------main.cpp------------------------------------
#include<iostream>
#include<string>
#include "Shape.h"
#include "Rectangle.h"
#include "Triangle.h"
using namespace std;

int main(){
    
    Rectangle Rec(5,5);
    Rec.setType();
    Rec.displayType();
    Rec.getArea();
    
    cout << endl;
    
    Triangle Tri(10,5);
    Tri.setType();
    Tri.displayType();
    Tri.getArea();
    
    return 0;
}

//----------------------Shape.h----------------------------------------

#pragma once
#include<iostream>
#include<string>
using namespace std;

class Shape{
    protected:
        double height;
        double width;
        string type;
        
    public:
        Shape();
        void setType();
        void displayType();
        void getArea();
};

//----------------------Shape.cpp--------------------------------------------

#include "Shape.h"

Shape::Shape(){
    height =0;
    width =0;
}

void Shape::setType(){
    type = "undefined";
}

void Shape::displayType(){
    cout <<"Type of shape is: "<< type <<endl;
}

void Shape::getArea(){
    cout <<"undefined Area \n";
}

//--------------------Rectangle.h---------------------------------
#pragma once
#include<iostream>
#include<string>
#include "Shape.h"
using namespace std;

class Rectangle: public Shape{
    public:
        Rectangle(double a, double b);
        void setType();
        void displayType();
        void getArea();
};

//------------------Rectangle.cpp------------------------------------------

#include "Rectangle.h"

Rectangle::Rectangle(double a, double b){
    height =a;
    width =b;
}

void Rectangle::setType(){
    type = "Rectangle";
}

void Rectangle::displayType(){
    cout <<"Type of shape is: "<< type <<endl;
}

void Rectangle::getArea(){
    double Area = height * width;
    cout <<"Area = " << Area << endl;
}

//------------------------------Triangle.h-------------------------------

#pragma once
#include<iostream>
#include<string>
#include "Shape.h"
using namespace std;

class Triangle: public Shape{
    public:
        Triangle(double a, double b);
        void setType();
        void displayType();
        void getArea();
};

//-------------------------------Triangle.cpp------------------------------------------

#include "Triangle.h"

Triangle::Triangle(double a, double b){
    height =a;
    width =b;
}

void Triangle::setType(){
    type = "Triangle";
}

void Triangle::displayType(){
    cout <<"Type of shape is: "<< type <<endl;
}

void Triangle::getArea(){
    double Area = (height * width)/2;
    cout <<"Area = " << Area << endl;
}
