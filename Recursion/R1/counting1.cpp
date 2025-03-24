#include<iostream>
using namespace std;
//counting from 1 to n
void count1(int n){
    //base condition
    if(n==0){
    return;}
    //example of tail recursion
    
    //recursion call
    count1(n-1);

    //processing
    cout<<n<<endl;
   
}



int main(){

int num=10;
count1(num);
//cout<<ans;

}