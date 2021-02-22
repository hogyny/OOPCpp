----------------------------main.cpp

#include<iostream>
#include "Triplet.h"
using namespace std;




int main(){
    Triplet comp1(3,1,2);
    Triplet comp2(-1,-1,0.5);
    Triplet comp3(0,0,0);
    
    //for Assigntment operator =
    comp3 = comp1;
    cout <<"First Object Instance: " << comp3 <<endl;
    
    comp3 = comp2;
    cout <<"Second Object Instance: " << comp3 <<endl;
    
    //Addition
    comp3 = comp1 + comp2;
    cout <<"Sum: " << comp3 <<endl;
    
    //subration
    comp3 = comp1 - comp2;
    cout <<"Difference: " << comp3 <<endl;
    
    
    
    
    
    return 0;
}


-------------------------Triplet.h-----------------------
#include<iostream>
using namespace std;
class Triplet{
    private:
        double a;
        double b;
        double c;
    
    public:
        Triplet(double, double ,double);
        Triplet& operator= (const Triplet &obj);
        Triplet operator+ (const Triplet &obj);
        Triplet operator- (const Triplet &obj);
        friend ostream &operator<< (ostream &s, const Triplet &obj);
        
};

---------------------------Triplet.cpp-----------------------------
#include "Triplet.h"

Triplet::Triplet(double d, double e, double f){
    a = d;
    b = e;
    c = f;
}

//assign <<

Triplet& Triplet::operator= (const Triplet &obj){
    a = obj.a;
    b = obj.b;
    c = obj.c;
    return *this;
}

//addtition
Triplet Triplet::operator+ (const Triplet &obj){
    Triplet Add(0,0,0);
    Add.a = a + obj.a;
    Add.b = b + obj.b;
    Add.c = c + obj.c;
    
    return Add;
}

//subract
Triplet Triplet::operator- (const Triplet &obj){
    Triplet Sub(0,0,0);
    Sub.a = a - obj.a;
    Sub.b = b - obj.b;
    Sub.c = c - obj.c;
    
    return Sub;
}

//stream operator function <<
ostream &operator<< (ostream &sio, const Triplet &obj){
   

        sio << obj.a <<", "  <<obj.b << ", " << obj.c;
        return sio;
    
    
    
}
