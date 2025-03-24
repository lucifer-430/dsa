#include<iostream>
using namespace std;
//check sorted or not


//assending order
bool check_sorted(int arr[],int size,int index)
    {
        //base condition
            if(index==(size-1)){
                return true;
            }

        //relation
            if(arr[index]>arr[index+1])
                return false;
        //calling
        return check_sorted(arr,size,index+1);
    }



int main(){

int arr[]={10,200,30,40,50};
int size=5;
    int index=0;
   bool ans=check_sorted(arr,size,index);
   if(ans==true){
    cout<<"sorted";

   }
    else{cout<<"not sorted";}
}