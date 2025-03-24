#include<iostream>
using namespace std;

//creating a class
class poly{
    //defing the class
    public:

    //defing the attribute
   // int sum;
    int a;
    int b;

    //defing the constructor
    poly(int a1,int a2){
        cout<<"poly cons is called"<<endl;
        this->a=a1;
        this->b=a2;
    }

    //defing the method/attribute
    //function
    int sum(int a3,int a4){
        return a3+a4;
    }

    float sum(){
      //  return a+b;
    //}

    //double sum(){
      //  return a+b;
    //}
        }
};

int main(){

    poly a(1,2);
    int c=a.sum();
    cout<<"sum "<<c;

    //returning out of scope 
    return 0;
}