#include<iostream>
using namespace std;
//binary search
bool printarr(int arr[],int size,int target,int start,int end)
    {   
       //base condition
       if(start>end){
        return false;
       }

       int mid=(start+end)/2;

       //logical relation
       if(arr[mid]==target){
        return true;
       }

        //right side shift
        if(target>arr[mid])
        {   
            start=mid+1;
            bool ans=printarr(arr,size,target,start,end);
            return ans;
        }
         if(target<arr[mid])
            {   
            end=mid-1;
            bool ans=printarr(arr,size,target,start,end);
            return ans;
        }

    }



int main(){

int arr[]={10,20,30,40,50};
int size=5;

int target=10;
int start=0;
int end=size-1;
int mid=(start+end)/2;
bool ans=printarr(arr,size,target,start,end);
if(ans==true){cout<<"found";}
else{cout<<"not found";}

}