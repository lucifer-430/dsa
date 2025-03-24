#include<iostream>
using namespace std;
//liner search
bool printarr(int arr[],int size,int index,int target)
    {   
        //base condition
        if(index==size){ return false;}

        //1 condition humne solve kiya
        if(arr[index]==target){
            return true;
            
        }
        
        bool ans=printarr(arr,size,index+1,target);
        return ans;
        

    }



int main(){

int arr[]={10,20,30,40,50};
int size=5;
int index=0;
int target=10;
bool ans=printarr(arr,size,index,target);
if(ans==true){cout<<"found";}
else{cout<<"not found";}

}