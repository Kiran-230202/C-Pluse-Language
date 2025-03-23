#include<iostream>
using namespace std;
class addition{
    int arr[3];
    int i;
    public:
    void get(){
        cout<<"Enter 3 values";
        for(i=0;i<3;i++){
            cin>>arr[i];
        }
    }
    void display(){

    cout<<"values are:"<<endl;
     for(i=0;i<3;i++){
        cout<<arr[i]<<"\t";
    }
    }

    addition operator +(addition obj){
        int result[3];
        int i;
        for(i=0;i<3;i++){
            result[i]=arr[i]+obj.arr[i];
        }
        for(i=0;i<3;i++){
            cout<<" "<<result[i];
        }
    }
};
int main(){
    addition obj1,obj2;
    cout<<"---------obj1-----------";
    obj1.get();
    obj1.display();
    cout<<"----------obj2-----------";
    obj2.get();
    obj2.display();
    obj1+obj2;
    return 0;
}