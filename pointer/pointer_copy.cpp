#include<iostream>
using namespace std;
int main(){
   int a=5;
   int* ptr=&a;
   //copying the pointer
   int* q=ptr;
   int* r=q;
   cout<<a<<" "; //5
        cout<<&a<<" "; //104
            //cout<<*a; //error
    cout<<endl;

    cout<<ptr; //104
        cout<<&ptr; //114
            cout<<*ptr; //5
    cout<<endl;

    cout<<q; //104
        cout<<&q; //128
           cout<<*q; //5
    cout<<endl;

    cout<<r; //104
        cout<<&r; //1234
            cout<<*r; //5
    cout<<endl;
}