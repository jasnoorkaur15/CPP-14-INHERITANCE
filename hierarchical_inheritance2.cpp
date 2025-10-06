//Jasnoor Kaur
//24070123049
//Batch: A2

#include <iostream>
#include<string>
using namespace std;

//Parent Class-1
class Stationery {
    public:
    string types[3]= {"Pens", "Highlighter", "Scale"};
    void brand(){
        cout<<"Camlin, Domes, Hauser"<<endl;
    }
};

//Child Class-1
class Pens: public Stationery {
    public:
    string colour="Dark Blue";
};

//Child Class-2
class Highlighter: public Stationery {
    public:
    string colour="Multi-colour";
};

//Child Class-3
class Scale: public Stationery {
    public:
    string colour="White";
};

int main(){
    Pens p1;
    cout<<endl;
    p1.brand();
    cout<<p1.types[0]<<": "<<p1.colour<<endl;
    
    Highlighter h1;
    cout<<endl;
    h1.brand();
    cout<<h1.types[1]<<": "<<h1.colour<<endl;
    
    Scale s1;
    cout<<endl;
    s1.brand();
    cout<<s1.types[2]<<": "<<s1.colour<<endl;
}

/*
OUTPUT:

Camlin, Domes, Hauser
Pens: Dark Blue

Camlin, Domes, Hauser
Highlighter: Multi-colour

Camlin, Domes, Hauser
Scale: White

*/
