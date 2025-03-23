#include<iostream>
using namespace std;
class calculator{
    int n1,n2;
    public:
     calculator(){
        cout<<"Enter 1 for area of Rectangle, 2 for area of triangle, 3 for area of circle   ";
    }

    void area(){
        cout<<"Enter the length and widht";
        cin>>n1>>n2;
        cout<<"The area of  Reactangle is:"<<n1*n2;
    }
    void area(float n1 ,float n2){
        this->n1=n1;
        this->n2=n2;
        cin>>n1>>n2;
        cout<<"The area of  Triangle is:"<<0.5*n1*n2;
    }
    void area(int n1){
         this->n1=n1;
        cout<<"The area of  Circle is:"<<3.14*n1*n1;
    }

};

int main(){
    calculator obj;
    int choice;
    cin>>choice;
    int n1,n2;
    switch(choice){
        case 1:
        obj.area();
        break;
        case 2:
        cout<<"Enter the length and Breadth";
        cin>>n1>>n2;
        obj.area(n1,n2);
        break;
        case 3:
        cout<<"Enter the radius of circle";
        cin>>n1;
        obj.area(n1);
        break;
        default :
           cout<<"Enter valid input";
    }

    return 0;
}