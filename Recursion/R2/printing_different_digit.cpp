#include<iostream>
using namespace std;

//printing the digit
void print_digit(int num)
    {   
        //base condition
        if(num==0){return ;}

        //calling
        print_digit(num/10);

        //processing
        int ans=num%10;
        cout<<ans<<" ";

        //calling
        //print_digit(num/10);

    }



int main(){

int num=389;
print_digit(num);

}