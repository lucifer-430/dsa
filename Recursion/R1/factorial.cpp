#include<iostream>
using namespace std;
//factorial
int fac(int n){
    //base condition
    if(n==0){
    return 1;
    }
    //recusrive call
   int ans1= n*fac(n-1);
   return ans1;

}

int main(){

  int num=7;
 int ans= fac(num);
 cout<<"factorial of "<<num<<"is"<<ans;

}