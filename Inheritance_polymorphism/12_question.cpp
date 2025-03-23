#include<iostream>
using namespace std;
class values{
    int a,b;
    public:
    void get(){
        cout<<"Enter values for a and b:";
        cin>>a>>b;
    }
   friend void swap(values);
};

void swap(values a1){
    a1.a=a1.a+a1.b; 
    a1.b=a1.a-a1.b; 
    a1.a=a1.a-a1.b;
    cout<<"After swap:"<<a1.a<<a1.b;
}
int main(){
    values obj;
    obj.get();
    swap(obj);

    return 0;
}