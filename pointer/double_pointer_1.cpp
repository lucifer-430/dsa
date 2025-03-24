#include<iostream>
using namespace std;
int main(){

int a=5;
int *p=&a;
int **q=&p;

cout<<a<<endl;             //5
cout<<&a<<endl;          //104
//cout<<*a<<endl;   //error
cout<<p<<endl;    //104
cout<<&p<<endl;         //334
cout<<*p<<endl;   //5
cout<<q<<endl;               //334
cout<<&q<<endl;    //473298
cout<<*q<<endl;   //104
cout<<**q<<endl;     //5
//cout<<***q<<endl; //error

}