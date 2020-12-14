#include<iostream>
#include <string>
using namespace std;

class Dog{
    private:
        string name;
        int age;
    
    
    public:
        Dog();
    //prototype
        void setName(string);
        void setAge(int);
        string getName() const;
        int getAge() const;
        
};

Dog::Dog(){
    cout << "Object of class created\n";
}

void Dog::setName(string a) {
    name = a;
}

void Dog::setAge(int b){
    age = b;
}

string Dog::getName() const{
    return name;
}

int Dog::getAge() const{
    return age;
}
int main(){
    string a, ax;
    int b, bx;
    a = "Fafik";
    b = 4;
     Dog myDog;
     myDog.setName(a);
     myDog.setAge(b);
     ax= myDog.getName();
     bx = myDog.getAge();
     
     cout << "Dog name is: " << ax << "and the Age is: " <<bx;
    
    
    return 0;
}
