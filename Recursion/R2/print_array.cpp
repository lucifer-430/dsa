#include<iostream>
using namespace std;
//print an arry
void printarr(int arr[],int size,int index)
    {   
        //base condition
        if(index==size){ return;}

        //processing part
        cout<<arr[index]<<endl;

                //recursion call
        printarr(arr,size,index+1);

       
   
  
}



int main(){

int arr[]={10,20,30,40,50};
int size=5;
int index=0;
printarr(arr,size,index);

}