#include<iostream>
#include<vector>
using namespace std;
//storing
//by referencing ki tarah store karha hai

void print_odd(int arr[],int size,int index,vector<int> &ans)
    {   
     //base condition
     if(index>=size){
        return;
     }

    //processing
    if(arr[index]%2==0){
        ans.push_back(arr[index]);
    }
       //calling
    print_odd(arr,size,index+1,ans);
     }



int main(){

int arr[]={20,21,30,31,500,51};
int size=6;
int index=0;
vector<int> ans;

print_odd(arr,size,index,ans);
for(auto num:ans){
    cout<<num<<" ";
}


}