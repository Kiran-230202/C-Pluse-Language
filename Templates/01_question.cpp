#include<iostream>
using namespace std;
template <typename t>
void swap(t a,t b){
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"After swap "<<a<<" "<<b;
}
int main(){
    swap<int>(5,6);
    return 0;
}