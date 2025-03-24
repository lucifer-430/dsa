#include<iostream>
using namespace std;
int main(){
 int arr[]={10,20,30,40};
 int* ptr=arr;

 cout<<arr<<endl; //104
  cout<<&arr<<endl; //104
   cout<<arr[0]<<endl; //10
    cout<<&arr[0]<<endl; //104
     cout<<ptr<<endl; //104
      cout<<&ptr<<endl; //1234
       cout<<*ptr<<endl; //10
        cout<<*arr +1<<endl; //11
         cout<<*(arr+1)<<endl; //20
          cout<<*(arr+3)<<endl; //40


}