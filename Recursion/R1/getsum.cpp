#include<iostream>
using namespace std;
//getsum
int getsum(int n){
    //base condition
   if(n==0){return 0;}

//processing part and calling function
int ans1=n+getsum(n-1);
return ans1;
   
}



int main(){
    int num=5;
    int ans=getsum(num);
    cout<<ans;

}