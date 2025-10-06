//Jasnoor Kaur
//24070123049
//Batch: A2

#include<iostream>
#include<string>
using namespace std;

class College {
    public:
    string college="Symbiosis - ";
    void stream(){
        cout<<"Engineering"<<endl;
    }
};

class Branch: public College {
    public:
    string branch = "Electronics & Tele-Communication Engineering";
};

int main(){
    Branch C1;
    C1.stream();
    cout<<C1.college+" "+C1.branch;
}

//OUTPUT:

//Engineering
//Symbiosis -  Electronics & Tele-Communication Engineering
