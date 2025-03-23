#include<iostream>
#include<string.h>
using namespace std;
class Addstring{
    private:
    char s1[25],s2[25];
    public:
    Addstring(char str1[],char str2[]){
        strcpy(this->s1,str1);
        strcpy(this->s2,str2);
    }

    Addstring operator +(){
        cout<<"\nConcatination: "<< strcat(s1,s2);

    }

};

int main(){
    Addstring obj("Kiran","Kune");
    +obj;
    
    return 0;
}