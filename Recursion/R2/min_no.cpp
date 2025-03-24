#include<iostream>
using namespace std;
//max no find out
int min1(int arr[],int size,int index,int max1)
    {   
       //base condition
       if(index>=size){
        return max1;
       }
       //relation
       if(arr[index]<max1){
        max1=arr[index];
       }

       //calling
       int ans=min1(arr,size,index+1,max1);
       return ans;

    }



int main(){

int arr[]={1,20,300,40,50000};
int size=5;
int index=0;
int max1=INT_MAX;

int ans=min1(arr,size,index,max1);
cout<<"max no is "<<ans;
}