//Jasnoor Kaur
//24070123049
//Batch: A2

#include<iostream>
#include<string>
using namespace std;

//Parent class 1
class Automobile {
    public:
    string category="Car:";
    void company(){
        cout<<"Ford"<<endl;
    }
};

//Parent class 2
class features {
    public:
    string colour = "Blue";
    void milage(){
        cout<<"7kmpl"<<endl;
    }
};

//Child class - 1
class Car: public Automobile, public features{
    public:
    string seater = "6 seater";
};

int main(){
    Car c1;
    
    cout<<c1.category<<" ";
    c1.company();
    c1.milage();
    cout<<"("<<c1.seater<<")"<<endl<<"Colour: "<<c1.colour<<endl;
}

//OUTPUT:

/*
Car: Ford
7kmpl
(6 seater)
Colour: Blue
*/
