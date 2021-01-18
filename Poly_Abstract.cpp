//.................main.....................

#include<iostream>
#include<string>
#include "Animal.h"
#include "Dog.h"
#include "Cat.h"

using namespace std;

int main(){
    Animal *myPet = new Dog(); //new Animal("Animal");
    //myPet = new Dog();
    myPet->eat();
    myPet->sleep();
    cout<<"-----------------\n\n";
    myPet = new Cat();
    myPet->eat();
    myPet->sleep();
    
    return 0;
}

//------------------Animal.h........................

#pragma once
#include<string>
#include<iostream>

using namespace std;

class Animal{
    private:
        string type;
    public:
        Animal(string a);
        virtual void eat();
        virtual void sleep();
};

//.........................Animal.cpp.......................

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

//..................Dog.h..........................

#pragma once
#include<string>
#include <iostream>
#include "Animal.h"

using namespace std;

class Dog: public Animal{
    public:
        Dog();
        void eat();
        void sleep();
        
};

//.................Dog.cpp.......................
#include"Dog.h"

Dog::Dog():Animal("Dog"){
    
}

void Dog::eat(){
    cout << "Dog eats a bone\n";
}

void Dog::sleep(){
    cout << "Dog sleeps in a kennel\n";
}

//...................Cat.h..................

#pragma once
#include<string>
#include <iostream>
#include "Animal.h"

using namespace std;

class Cat: public Animal{
    public:
        Cat();
        void eat();
        void sleep();
        
};

//...................Cat.cpp......................

#include"Cat.h"

Cat::Cat():Animal("Cat"){
    
}

void Cat::eat(){
    cout << "Cat eats mice\n";
}

void Cat::sleep(){
    cout << "A cat sleep in at home\n";
}

