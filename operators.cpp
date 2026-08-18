#include<iostream>
using namespace std;
int main(){
    int a = 4 , b = 5;
    cout<<"types of operators   : \n";
    //arithmetic operators
    cout<<"the value of a + b is : "<<a+b<<endl;
    cout<<"the value of a - b is : "<<a-b<<endl;
    cout<<"the value of a * b is : "<<a*b<<endl;
    cout<<"the value of a / b is : "<<a/b<<endl;
    cout<<"the value of a % b is : "<<a%b<<endl;
    cout<<"the value of a++ is : "<<a++<<endl;
    cout<<"the value of a-- is : "<<a--<<endl;
    cout<<"the value of ++a is : "<<++a<<endl;
    cout<<"the value of --a is : "<<--a<<endl;
    cout<<endl;
    cout<<endl;

    //assignment operators - assign values to variables
    // int a = 3 , b=9;
    // char d = 'd';
    
    //comparison operators - compare two values
    cout<<"comparison operators : \n";
    cout<<"the value of a == b is : "<<(a==b)<<endl;
    cout<<"the value of a != b is : "<<(a!=b)<<endl;
    cout<<"the value of a > b is : "<<(a>b)<<endl;
    cout<<"the value of a < b is : "<<(a<b)<<endl;
    cout<<"the value of a >= b is : "<<(a>=b)<<endl;
    cout<<"the value of a <= b is : "<<(a<=b)<<endl;
    cout<<endl;

    //logical operators - used to combine conditional statements
    cout<<"logical operators : \n";
    cout<<"the value of logical AND operator (a==b && a<b) is : "<<(a==b && a<b)<<endl;
    cout<<"the value of logical OR operator (a==b || a<b) is : "<<(a==b || a<b)<<endl;
    cout<<"the value of logical NOT operator (!(a==b)) is : "<<(!(a==b))<<endl;
    cout<<"the value of logical NOT operator (!(a<b)) is : "<<(!(a<b))<<endl;
    cout<<endl;
    cout<<endl;

    return 0;

}