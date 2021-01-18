//........................main........................
#include<iostream>
#include<string>
#include "Fruit.h"
#include "Apple.h"
#include "Banana.h"
#include "Plum.h"

using namespace std;

int main(){
    double x=0;
    double y=0;
    double z=0;
    double all =0;
    
    
    Fruit *myF[10];
    myF[0] = new Apple(10);
    myF[1] = new Apple(10.5);
    myF[2] = new Apple(11);
    myF[3] = new Apple(11.5);
    myF[4] = new Apple(12);
    myF[5] = new Apple(12.5);
    myF[6] = new Apple(13);
    myF[7] = new Apple(13.5);
    myF[8] = new Apple(14);
    myF[9] = new Apple(14.5);
    
    
    for(int i = 0; i < 10; i++){
        x = x + myF[i]->cost();
        
    }
    cout<<"Total COST of all Apples ="  << x << endl;
    //Banana
    
    myF[0] = new Banana(20);
    myF[1] = new Banana(20.5);
    myF[2] = new Banana(21);
    myF[3] = new Banana(21.5);
    myF[4] = new Banana(22);
    myF[5] = new Banana(22.5);
    myF[6] = new Banana(23);
    myF[7] = new Banana(23.5);
    myF[8] = new Banana(24);
    myF[9] = new Banana(24.5);
    
    for(int i = 0; i < 10; i++){
        y = y + myF[i]->cost();
    }
    
    cout<<"Total COST of all Bananas ="  << y << endl;
    
    //plum
    
    myF[0] = new Plum(30);
    myF[1] = new Plum(30.5);
    myF[2] = new Plum(31);
    myF[3] = new Plum(31.5);
    myF[4] = new Plum(32);
    myF[5] = new Plum(32.5);
    myF[6] = new Plum(33);
    myF[7] = new Plum(33.5);
    myF[8] = new Plum(44);
    myF[9] = new Plum(44.5);
    
    
    for(int i = 0; i < 10; i++){
        z = z + myF[i]->cost();
       
    }
    cout<<"Total COST of all Plums ="  << z << endl;
    
    //--------------------------------------all
    all = x + y + z;

 cout<<"Total COST of all Fruits ="  << all << endl; 
    return 0;
}

//..................Fruit.h................
#pragma once
#include<string>
#include<iostream>

using namespace std;

class Fruit{
    protected:
        string type;
        double weight;
    public:
        Fruit();
        virtual double cost() = 0;
};

//....................Fruit.cpp.........................
#include "Fruit.h"

Fruit::Fruit(){
    
}

//...............Apple.h.........................

#pragma once
#include<string>
#include<iostream>
#include "Fruit.h"

using namespace std;

class Apple : public Fruit{
    public:
        Apple(double w);
        double cost();
};
//...............Apple.cpp..........................
#include "Apple.h"

Apple::Apple(double w){
    weight = w;
    type = "Apple";
    
}
double Apple::cost(){
    double price = 3.80;
    return weight * price;
}
//......................Banana.h...........................
#pragma once
#include<string>
#include<iostream>
#include "Fruit.h"

using namespace std;

class Banana: public Fruit{
    
    public:
        Banana(double w);
        double cost();
    
};
//...........................Banana.cpp................................
#include "Banana.h"

Banana::Banana(double w){
    weight = w;
    type = "Banana";
    
}
double Banana::cost(){
    double price = 4.23;
    return weight * price;
}
//.......................Plum.h..................................
#pragma once
#include<string>
#include<iostream>
#include "Fruit.h"

using namespace std;

class Plum: public Fruit{
    public:
        Plum(double w);
        double cost();
    
};
//.....................Plum.cpp.....................................

#include "Plum.h"

Plum::Plum(double w){
    weight = w;
    type = "Plum";
    
}
double Plum::cost(){
    double price = 5.54;
    return weight * price;
}
