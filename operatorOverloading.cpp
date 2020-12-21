>>>>>........................main.cpp.........................<<<<<<<<<<<<<<<

#include<iostream>
#include "ComplexNumber.h"
using namespace std;




int main(){
    ComplexNumber comp1(9,-4);
    ComplexNumber comp2(4,4);
    ComplexNumber comp3(0,0);
    
    //for Assigntment operator =
    comp3 = comp1;
    cout <<"First Object Instance: " << comp3 <<endl;
    
    comp3 = comp2;
    cout <<"Second Object Instance: " << comp3 <<endl;
    
    //Addition
    comp3 = comp1 + comp2;
    cout <<"Addition of the two instances is: " << comp3 <<endl;
    
    //subration
    comp3 = comp1 - comp2;
    cout <<"Subraction of the two instances is: " << comp3 <<endl;
    
    
    
    
    
    return 0;
}

>>>>>>>>>>>>>>>>>......................ComplexNumber.h..............<<<<<<<<<<<<<<<<<<<<<<<<

#include<iostream>
using namespace std;
class ComplexNumber{
    private:
        double real;
        double imag;
    
    public:
        ComplexNumber(double, double);
        ComplexNumber& operator= (const ComplexNumber &obj);
        ComplexNumber operator+ (const ComplexNumber &obj);
        ComplexNumber operator- (const ComplexNumber &obj);
        friend ostream &operator<< (ostream &s, const ComplexNumber &obj);
        
};

>>>>>>>>>>>>>>>>>......................ComplexNumber.cpp..............<<<<<<<<<<<<<<<<<<<<<<<<

#include "ComplexNumber.h"

ComplexNumber::ComplexNumber(double a, double b){
    real = a;
    imag = b;
}

//assign <<

ComplexNumber& ComplexNumber::operator= (const ComplexNumber &obj){
    real = obj.real;
    imag = obj.imag;
    return *this;
}

//addtition
ComplexNumber ComplexNumber::operator+ (const ComplexNumber &obj){
    ComplexNumber Add(0,0);
    Add.real = real + obj.real;
    Add.imag = imag + obj.imag;
    
    return Add;
}

//subract
ComplexNumber ComplexNumber::operator- (const ComplexNumber &obj){
    ComplexNumber Sub(0,0);
    Sub.real = real - obj.real;
    Sub.imag = imag - obj.imag;
    
    return Sub;
}

//stream operator function <<
ostream &operator<< (ostream &sio, const ComplexNumber &obj){
    if(obj.imag < 0){
        sio << obj.real << " - j" <<(-1 *obj.imag);
        return sio;
    }
    else{
        sio << obj.real << " + j" <<obj.imag;
        return sio;
    }
    
    
}

