// #include<iostream>
// using namespace std;
// void solve1(int arr[],int size){
//     cout<<sizeof(arr);

// }
// int main(){
// int arr[]={10,20,30,40,50};
// int size=5;

// solve1(arr,size);
// return 0;

// }
//passing by reference
#include<iostream>
using namespace std;
void solve1(int* arr,int size){
    cout<<sizeof(arr);

}
int main(){
int arr[]={10,20,30,40,50};
int size=5;

solve1(arr,size);
return 0;

}