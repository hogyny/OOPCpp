//--------------------main------------------------------------------

#include<iostream>
#include<string>
#include "Animal.h"
#include "Dog.h"

using namespace std;

int main(){
    Dog jack;
    
    jack.eat();
    jack.sleep();
    jack.bark();
    
    return 0;
}

//-------------------------Animal.h------------------------------------
#pragma once
#include<string>
#include<iostream>

using namespace std;

class Animal{
    private:
        string type;
    public:
        Animal(string a);
        void eat();
        void sleep();
};

//---------------------------------------Animal.cpp------------------------

#include "Animal.h"

Animal::Animal(string a){
    type = a;
}

void Animal::eat(){
    cout << "I can eat\n";
}

void Animal::sleep(){
    cout << "I can sleep\n";
}


//--------------------------------Dog.h----------------------------------

#pragma once
#include<string>
#include <iostream>
#include "Animal.h"

using namespace std;

class Dog: public Animal{
    public:
        Dog();
        void bark();
        
};

//------------------------Dog.cpp----------------------------------------

#include"Dog.h"

Dog::Dog():Animal("Dog"){
    
}

void Dog::bark(){
    cout << "A dog barks\n";
}



