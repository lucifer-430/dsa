#include<iostream>
using namespace std;
//fibonacci series
int fib(int n){

//base condition
if(n==0||n==1){return n;}

//recursion calling
int ans=fib(n-1)+fib(n-2);

  return ans;

}

int main(){

  int seq=5;
int ans=fib(seq);
cout<<ans;
 

}