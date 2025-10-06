//Jasnoor Kaur
//24070123049
//Batch: A2

#include<iostream>
#include<string>
using namespace std;

//Parent Class 1
class Mobile {
    public:
    string Location ="Category";
    void type(){
        cout<<"Asian"<<endl;
    }
};

//Child Class 1 (derived from parent 1)
class Origin: public Mobile {
    public:
    string origin ="Mobile";
};
 
//Child Class 2 (derived from child 1)
class Brand: public Origin {
    public:
    string name="Samsung";
};

int main(){
    //Multilevel Inheritance
    Brand O3;
    O3.type();
    cout<<O3.Location<<": "<<O3.origin<<endl;
    cout<<"Brand: "<<O3.name;
}

//OUTOUT:

/*
Asian
Category: Mobile
Brand: Samsung
*/
