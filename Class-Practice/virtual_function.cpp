#include<iostream>
using namespace std;
class A{
    public:
    virtual void display(){
        cout<<"Output from base class";
    }
    void get(){
        cout<<"get function from base class";
    }
};

class B:public A{
    public:
     void display(){
        cout<<"Output from child class";
    }
};

int main(){
    A *ptr;
    B obj;
    ptr=&obj;
    ptr->display();
    return 0;
}
