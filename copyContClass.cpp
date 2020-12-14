#include<iostream>
#include <string>
using namespace std;

enum Data{CONCRETE, WOODEN, FENCE};

class Wall{
    private:
        Data dat;
        double height;
        double width;
    public:
    
        //prototype
        Wall();
        Wall(Data, double, double);
        Wall(const Wall &obj);
        
};

Wall::Wall(){
    cout << "Object of class  default created\n";
    dat = WOODEN;
    height =0;
    width =0;
    
    cout <<"Default wall is " << dat << " with heaight = " <<height <<" and width = "<<width <<endl;
}

Wall::Wall(Data d, double a, double b){
    cout << "Object of class created for inputed values\n";
    dat = d;
    height = a;
    width =b;
    
    cout <<"Entry wall is " << dat << " with heaight = " <<height <<" and width = "<<width <<endl;
}

Wall::Wall(const Wall &obj){
    
    cout << "Object of Copy contructor\n";
    dat = obj.dat;
    height = obj.height;
    width =obj.width;
    
    cout <<"copy contructor wall is " << dat << " with heaight = " <<height <<" and width = "<<width <<endl;
}


int  main(){
    
    double a = 0;
    double b = 0;
    Data d = WOODEN;
    
   
  
    
   Wall room;//default contructor
   Wall room1(CONCRETE,10.8,10.8);
   Wall room2(FENCE,15.5,15.5);
   cout << endl;
    Wall obj = room;
    Wall obj1 = room1;
    Wall obj2 = room2;
//    
    
    
    
    return 0;
}
