#include<iostream>
using namespace std;
//selection sort
int min_index(int arr[],int size,int loop){
     //int i=loop;
     int temp=loop;
    for(int j=loop;j<size;j++)
        {
            if(arr[j]<arr[temp]){
                //arr[i]=arr[j];
                temp=j;

            }

        }
        return temp;
}

//assending order
void selection1(int arr[],int size){
        
    for(int loop=0;loop<size-1;loop++)
        {   int index=min_index(arr,size,loop);
                swap(arr[loop],arr[index]);
        }
    
    }



int main(){

int arr[]={50,20,0,310,4};
int size=5;
selection1(arr,size);


  for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }

}