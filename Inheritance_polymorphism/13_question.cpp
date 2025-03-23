#include<iostream>
using namespace std;
class values{
    int a,b;
    public:
    void get(){
        cout<<"Enter the value for a and b:";
        cin>>a>>b;
    }
   friend void max(values);
};
void max(values v){
    if(v.a>v.b){
        cout<<"a is greater";
    }
    else{
        cout<<"b is greater";
    }

}
int main(){
    values obj;
    obj.get();
    max(obj);
    return 0;
}