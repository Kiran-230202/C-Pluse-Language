#include<iostream>
using namespace std;
class value{
    protected:
    float l,w;

public:
    void get(){
        cout<<"Enter the length and width:\n";
        cin>>l>>w;
    }
};

class area_reactangle:public value{
    public:
    void area(){
        cout<<"The area of reactangle is:"<<l*w;
    }

};

int main(){

    area_reactangle obj;
    obj.get();
    obj.area();

    return 0;
}