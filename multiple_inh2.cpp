//Jasnoor Kaur
//24070123049
//Btach: A2

#include <iostream>
#include<string>
using namespace std;

//Parent class 1
class school{
    public:
    string councile = "Student_council Position: ";
    void positions(){
        cout<<"House Captain"<<endl;
    }
};
//Parent class 2
class Houses {
    public:
    string Colours = "Red, Blue, Green, Yellow";
    void Positions(){
        cout<<"House strength: "<<endl;
    }
};
//Child class - 1
class Councile: public school, public Houses{
    public:
    string Strength = "50 per House";
};

int main(){
    Councile c1;
    
    cout<<c1.councile<<" ";
    c1.positions();
    c1.Positions();
    cout<<"("<<c1.Strength<<")"<<endl<<"Colours: "<<c1.Colours<<endl;
}

//OUTPUT

/*
Student_council Position:  House Captain
House strength: 
(50 per House)
Colours: Red, Blue, Green, Yellow
*/
