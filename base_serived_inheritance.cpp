//Jasnoor Kaur
//24070123049
//Batch: A2

#include <iostream>
using namespace std;

//Base class
class Vehical{
    public:
    string brand = "Ford";
    void color(){
        cout<<"Red!\n";
    }
};
//Drived class
class Car: public Vehical{
    public:
    string model = "Mustang";
};
int main(){
    
    Car mycar;
    mycar.color();
    cout<<mycar.brand +" "+mycar.model;
    
    return 0;
}

//OUTPUT
//Red!
//Ford Mustang
