#include<iostream>
using namespace std;

class student{
     public:
    string name;
    int div,roll,marks;

    student(string name,int div,int roll,int marks){
    
        this->name=name;
        this->div=div;
        this->roll=roll;
        this->marks=marks;
    }
};

class address{
    student *ref;
    string add;
    public:
    address(string add, student *ref){
        this->add=add;
        this->ref=ref;
    
    
        if(ref->marks>=80){
            cout<<"Grade A";

        }
        else if(ref->marks>=70){
            cout<<"Grade B";
        }
        else{
            cout<<"Grade C";
        }
        cout<<"city is"<<add;
    }

   


};

int main(){

    student obj("Karan",8,15,85);
    address res("Ahmedabad",&obj);

   


    return 0;
}