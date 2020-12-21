//....................main.cpp........................

#include<iostream>
#include "Rectangle.h"
using namespace std;

int main(){
    int x;
    Rectangle::setInitialID(2);
    
    Rectangle rec1;
    Rectangle rec2;
    Rectangle rec3;
    
     x = Rectangle::getCount();
     cout << "Rectangle count " << x << " rect id" << rec1.getID()<<endl;
     cout << "Rectangle count " << x << " rect id" << rec2.getID()<<endl;
     cout << "Rectangle count " << x << " rect id" << rec3.getID()<<endl;
    
    return 0;
}

//...................Rectangle.h...........................

class Rectangle{
    private:
        double height;
        double width;
        int id;
        static int rectangleCount;
        static int startingID;
        
    public:
        Rectangle();
        
        static void setInitialID(int);
        
        static int getCount();
        
        int getID();
};

//.............................Rechangle.cpp...............................

#include "Rectangle.h"


Rectangle::Rectangle(){
            rectangleCount++;
            id = startingID + rectangleCount;
        }

void Rectangle::setInitialID(int a){
    startingID = a;
}

int Rectangle::getCount(){
    return rectangleCount;
}

int Rectangle::getID(){
            return id;
        }

int Rectangle::rectangleCount = 0;
int Rectangle::startingID = 0;
