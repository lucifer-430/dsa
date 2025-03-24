#include<iostream>
using namespace std;
int main(){

char ch[20]="Babbar";
char *cptr=ch;
cout<<ch<<endl; //babbar
cout<<&ch<<endl; //104
cout<<ch[0]<<endl; //B
cout<<&cptr<<endl; //21
cout<<*cptr<<endl;//B
cout<<*(cptr+3)<<endl;//b

//special dhyan dena isspe
cout<<cptr<<endl; //babbar
}