#include<iostream>
using namespace std;
//bubble sort
//drawback time complexity O(n^2) but S.C O(1)
//assending order
void bubble1(int arr[],int size){
        

    
        for(int i=0;i<size-1;i++){
            for(int j=0;j<size-i-1;j++)

            {
                if(arr[j]>arr[j+1]){
                    swap(arr[j],arr[j+1]);
                }
            }
        }
    }



int main(){

int arr[]={50,20,100,310,410};
int size=5;
bubble1(arr,size);

  for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }

}