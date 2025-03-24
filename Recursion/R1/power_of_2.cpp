#include<iostream>
using namespace std;
//power of 2
int power2(int n){
    
    //base condition
    if(n==0){return 1;}

    //recursive call //processing
    int ans1=2*power2(n-1);
    return ans1;
   
   
}



int main(){

int p=20;
int ans=power2(p);
cout<<"power of 2 is "<<ans;

}