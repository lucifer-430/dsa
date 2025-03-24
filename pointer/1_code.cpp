#include<iostream>
using namespace std;
int main(){
    int a=5;
    cout<<a;

    int b=a;
    //int c=&a;
    int* c=&a;
    cout<<endl;
    cout<<sizeof(c);
    cout<<endl;
    cout<<*c;
  
}