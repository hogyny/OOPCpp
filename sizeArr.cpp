#include<iostream>
#include <string>
using namespace std;



class Box{
    private:
        int id;
        double size;
    public:
    
        //prototype
        Box();
        Box(int, double);
        
        
};



Box::Box(){
    //cout << "Object of class  default created\n";
    id = 0;
    size = 10;
    
}

Box::Box(int a, double b){
    cout << "Object of class created for inputed values\n";
    id = a;
    size =b;
    
    cout <<"Box: "<<id << " size is: " << size <<endl;
    
    
}




int  main(){
    int c;
    Box *arr = new Box[10];//creating array obj
    for (int i = 0; i < 10; i++) { 
        c = 10-i;
        arr[i] = Box(i, c); 
    } 
    
    
    
    
    return 0;
}
