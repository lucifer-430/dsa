#include<iostream>
using namespace std;
//counting from n to 1
void count1(int n){
    //base condition
    if(n==1){
        cout<<1;
        
    }
//RECURSIVE CALL
else{
    //processing part
  cout<<n<<endl;
  //recursive call
  count1(n-1);
}
}



int main(){

int num=100;
count1(num);
//cout<<ans;

}