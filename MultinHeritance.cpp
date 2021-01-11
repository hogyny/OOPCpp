//----------------------------main------------------------------overriding Method of base class

#include<iostream>
#include<string>
#include "Animal.h"
#include "Mammal.h"
#include "Carnivore.h"
#include "Dog.h"
using namespace std;

int main(){
    Dog jack;
    jack.description();
    
    return 0;
}

//-------------------------Animal.h-------------------------------------------------

#pragma once
#include<iostream>
#include<string>
using namespace std;

class Animal{
    protected:
        string type;
    public:
        void eat();
        void getType();
};

//----------------------Animal.cpp-------------------------------------------------

#include "Animal.h"

void Animal::eat(){
    cout <<"An animal eats\n";
}

void Animal::getType(){
    cout << "An undefined animal\n";
}

//------------------------Mammal.h------------------------------------------

#pragma once
#include<iostream>
#include<string>
#include "Animal.h"
using namespace std;

class Mammal: protected Animal{
    public:
        Mammal();
        void eat();
        void getType();
};

//-------------------Mammal.cpp---------------------------------------------

#include "Mammal.h"

Mammal::Mammal(){
    
    type = "Mammal";
}

void Mammal::eat(){
    cout <<"It drinks milk of its mother\n";
}

void Mammal::getType(){
    cout << "A mammal\n";
}

//------------------------------Carnivore.h----------------------

#pragma once
#include<iostream>
#include<string>

using namespace std;

class Carnivore{
    public:
        void eat();
        void getType();
};

//------------------Carnivore.cpp-----------------------------------

#include "Carnivore.h"

void Carnivore::eat(){
    cout <<"It eats meat\n";
}

void Carnivore::getType(){
    cout << "A carnivore\n";
}

//-----------------------Dog.h------------------------
#pragma once
#include<iostream>
#include<string>
#include "Animal.h"
#include "Mammal.h"
#include "Carnivore.h"
using namespace std;

class Dog: protected Mammal, protected Carnivore{
    public:
        string type = "Dog";
        void getType();
        void eat();
        void description();
};

//----------------------Dog.cpp------------------------

#include "Dog.h"



void Dog::getType(){
    cout << "A dog\n";
    Mammal::getType();
    Carnivore::getType();
    
}

void Dog::eat(){
    Animal::eat();
    Mammal::eat();
    Carnivore::eat();
}

void Dog::description(){
    getType();
    eat();
}

