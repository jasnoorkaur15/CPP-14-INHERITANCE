//Jasnoor Kaur
//24070123049
//Batch: A2


#include<iostream>
#include<string>
using namespace std;

//Parent Class-1
class Clothes {
    public:
    string type[3]= {"Jeans", "Tops", "Sweater"};
    void brand(){
        cout<<"H&M, Max, Umbro"<<endl;
    }
};

//Child Class-1
class Jeans: public Clothes {
    public:
    string colour="Dark Blue";
};

//Child Class-2
class Tops: public Clothes {
    public:
    string colour="Multi-colour";
};

//Child Class-3
class Sweater: public Clothes {
    public:
    string colour="Light Blue with floral white prints.";
};

//Hierarchical Inheritance
int main(){
    Jeans c1;
    cout<<endl;
    c1.brand();
    cout<<c1.type[0]<<": "<<c1.colour<<endl;

    Tops c2;
    cout<<endl;
    c2.brand();
    cout<<c2.type[1]<<": "<<c2.colour<<endl;

    Sweater c3;
    cout<<endl;
    c3.brand();
    cout<<c3.type[2]<<": "<<c3.colour<<endl;
}

//OUTPUT:
/*
H&M, Max, Umbro
Jeans: Dark Blue

H&M, Max, Umbro
Tops: Multi-colour

H&M, Max, Umbro
Sweater: Light Blue with floral white prints.
*/
