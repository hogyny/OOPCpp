#include<iostream>
#include <string>
using namespace std;

class Person{
    private:
        string name;
        string surname;
        int age;
    
    
    public:
        //prototype
        string getName();
        string getSurname();
        int getAge();
        Person();
        Person(string, string, double);
        Person(const Person &obj);
        ~Person();
        friend void addfriend(Person *Per);// friend contructor
    
};

void addfriend(Person *Per){
    
    string x = Per->getName();
    string y = Per->getSurname();
    int z = Per->getAge();
    cout << "Congratulatins Friend is Added Name:  " << x << ", Surname: "<< y << ", Age: "<<z <<"\n\n";
    
    
}

Person::Person(){
    
}
Person::Person(string a, string b, double c){
    name = a;
    surname =b;
    age = c;
}

Person::Person(const Person &obj){
    name = obj.name;
    surname = obj.surname;
    age = obj.age;
}

Person::~Person(){
    //cout <<"Object is distroyed"<<endl;
    
}
string Person::getName(){
    return name;
}
string Person::getSurname(){
    return surname;
}
int Person::getAge(){
    return age;
}
int main(){
    int size ;
    cout << "Enter size of Object: ";
    cin >> size;
    cout<<"\n";
    string a,b;
    int c;
    Person *Per = new Person[size];
    if(size > 10 || size < 1){
        cout <<"Program Array too Large, This cannot take more than 10 entries and must be greater than zero"<<endl;
        exit(0); 
    }
    
    
     for (int i = 0; i < size; i++) { 
        cout<<"Name: ";
        cin>>a;
        cout<<"SurName: ";
        cin>>b;
        cout<<"Age: ";
        cin>>c;
        Per[i] = Person(a,b,c);
        Person obj = Per[i];
        addfriend(Per);
    } 
    
    
    
    
     
     
    return 0;
}
