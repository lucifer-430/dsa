#include<iostream>
using namespace std;
//max no find out
int max1(int arr[],int size,int index,int min1)
    {   
       //base condition
       if(index>=size){
        return min1;
       }
       //relation
       if(arr[index]>min1){
        min1=arr[index];
       }

       //calling
       int ans=max1(arr,size,index+1,min1);
       return ans;

    }



int main(){

int arr[]={1000000,20,300,40,50000};
int size=5;
int index=0;
int min1=INT16_MIN;

int ans=max1(arr,size,index,min1);
cout<<"max no is "<<ans;
}