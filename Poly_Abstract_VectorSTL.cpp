/..........................main.cpp........................................
#include<iostream>
#include<string>
#include <vector>
#include "Fruit.h"
#include "Apple.h"
#include "Banana.h"
#include "Plum.h"

using namespace std;

int main(){
    char c;
    int a;
    
    double x=0;
    double y=0;
    double z=0;
    double all =0;
    
    
    vector <Fruit*> myF;
    cout << "Do you want to add more fruit(Enter Y for Yes or Enter N for No)\n";
    cin >> c;
    
    int i =0;
    
    try{
        
    while(c == 'y' || c == 'Y'){
        cout << "What type of Fruit, | Enter 1 = APPLE |, | 2 = BANANA |,  | 3 = Plum | \n";
        cin >> a;
        if(a == 1){
            double weight;
            cout << "Enter the WEIGHT of the Apple: ";
            cin >> weight;
            myF.push_back(new Apple(weight));
            
            x = x + myF[i]->cost();
            i++;
            
            cout << "Do you want to add more fruit(Enter Y for Yes or Enter N for No)\n";
            cin >> c;
        }
        
        else if(a == 2){
            double weight;
            cout << "Enter the WEIGHT of the Banana: ";
            cin >> weight;
            myF.push_back(new Banana(weight));
            
            y = y + myF[i]->cost();
            i++;
            
            cout << "Do you want to add more fruit(Enter Y for Yes or Enter N for No)\n";
            cin >> c;
        }
        
        else if(a == 3){
            double weight;
            cout << "Enter the WEIGHT of the Plum: ";
            cin >> weight;
            myF.push_back(new Plum(weight));
            
            z = z + myF[i]->cost();
            i++;
            
            cout << "Do you want to add more fruit(Enter Y for Yes or Enter N for No)\n";
            cin >> c;
        }
        
        else{
            cout << "Out of Range, Enter value of 1, 2 , 3 only....Return Program!, Chech the result of corrected entry below:\n";
            
            cout << "Do you want to add more fruit(Enter Y for Yes or Enter N for No)\n";
            cin >> c;
            
        }
        
        
    }
    
    }
    //prevent crash!!!
    catch (...){
        
    }
    
    cout << "Total COST of all Apples = " << x <<endl;
    
    
    cout << "Total COST of all Bananas = " << y <<endl;
    
    cout << "Total COST of all Plums = " << z <<endl;
    
    all = x + y + z;
    cout << "Total COST of all Fruits = " << all <<endl;
    
  
    
    
    
    
    //myF.push_back(new Apple(20.3));
    
    

    return 0;
}

//.............................Fruit.h..........................

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

//........................Fruit.cpp.............................
#include "Fruit.h"

Fruit::Fruit(){
    
}

//..........................Apple.h...................................
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

//...........................Apple.cpp...................................
#include "Apple.h"

Apple::Apple(double w){
    weight = w;
    type = "Apple";
    
}
double Apple::cost(){
    double price = 3.80;
    return weight * price;
}

//........................Banana.h........................

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

//.............................Banana.cpp..................................
#include "Banana.h"

Banana::Banana(double w){
    weight = w;
    type = "Banana";
    
}
double Banana::cost(){
    double price = 4.23;
    return weight * price;
}

//.............................Plum.h..............................

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

//.....................................Plum.cpp...............
#include "Plum.h"

Plum::Plum(double w){
    weight = w;
    type = "Plum";
    
}
double Plum::cost(){
    double price = 5.54;
    return weight * price;
}
