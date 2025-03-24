#include<iostream>
using namespace std;
//odd_no
void print_odd(int arr[],int size,int index)
    {   
     //base condition
     if(index>=size){
        return;
     }

    //processing
    if(arr[index]%2==0){
        cout<<arr[index]<<" ";
    }
       //calling
    print_odd(arr,size,index+1);
     }



int main(){

int arr[]={20,21,30,31,50,51};
int size=6;
int index=0;

print_odd(arr,size,index);

}