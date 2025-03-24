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
    if(arr[index]%2!=0){
        cout<<arr[index]<<" ";
    }
       //calling
    print_odd(arr,size,index+1);
     }



int main(){

int arr[]={1,2,3,4,5};
int size=5;
int index=0;

print_odd(arr,size,index);

}