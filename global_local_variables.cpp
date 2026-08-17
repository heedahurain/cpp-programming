#include<iostream>
using namespace std;

int glo = 6;
void sum(){
    int a ;
    cout<<glo;
}
int main(){
    int glo = 9;
    glo = 78; //glo is local variable and it will print 78
    // int a = 4;
    // int b = 5;
    int a = 4 , b = 5;
    float pi = 3.14;
    char c  = 'u';
    sum();
    cout<<"\nthe value of variable is : "<<glo<<endl;
    
    // cout<<"this is tutorial of global and local variables. \nhere the value of local variable a is : "<<a<<"\nand value of local variable b is : "
    // <<b<<endl;
    // cout<<"the value of pi is : "<<pi<<endl;
    // cout<<"the value of character c is : "<<c<<endl;
    return 0;
}