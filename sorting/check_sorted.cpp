#include<iostream>
using namespace std;
//sorted arry or not
void sorted1(int arr[],int size)
    {  
        for(int i=0;i<size;i++){
            for(int j=i+1;j<size;j++)
                {
                    if(arr[i]>arr[j])
                        {
                            int temp=0;

                            temp=arr[i];
                            arr[i]=arr[j];
                            arr[j]=temp;

                        }
                }
        }

        

        
    }



int main(){

int arr[]={5,20,100,310,410};
int size=5;
sorted1(arr,size);

  for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }

}