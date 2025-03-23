#include<iostream>
using namespace std;
class employee{
    int id;
    string name;
    public:
    employee(int eid,string ename){
        id=eid;
        name=ename;
        cout<<"Id is :"<<id<<endl<<"Name is:"<<name<<endl;
    }
};

int main(){
    int id;
    string name;
    cout<<"Enter the id:";
    cin>>id;
    cout<<"Enter the name:";
    cin>>name;
    employee obj(id,name);
    return 0;
}