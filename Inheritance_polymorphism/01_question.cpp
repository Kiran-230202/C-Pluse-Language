#include<iostream>
using namespace std;

class cricketer{
    protected:
    string name;
};

class batsman:public cricketer{
    protected:
    int total_runs;
    int inn;
    float avg_run;
    int b_perfomance;
    public:
    void get(){
        cout<<"Enter the player name:";
        cin>>name;
        cout<<"\n";
        cout<<"Enter the total runs:";
        cin>>total_runs;
        cout<<"\n";
        cout<<"Enter the number of innigs:";
        cin>>inn;
        cout<<"\n";
        cout<<"Enter the best perforamnce:";
        cin>>b_perfomance;
    }

    public:

    void set(){
        cout<<name<<endl;
        cout<<total_runs<<endl;
        cout<<inn<<endl;
        cout<<"Average is:"<<total_runs/inn<<endl;
        cout<<b_perfomance;
    }
};

int main(){

    batsman obj;
    obj.get();
    obj.set();


    return 0;
}