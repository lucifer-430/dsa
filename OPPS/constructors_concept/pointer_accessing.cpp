#include<iostream>
using namespace std;
#include<vector>

//creating class of student

class student{

    public:
     //attributes
     int id;
     int age;
     string name;
     int roll_no;

     //default constructor
     //ctor:default constructor
     student()
     {
        cout<<"ctor is called"<<endl;
     }

     //behavior
     void bunking()
        {
            cout<<this->name<<"bunking the class"<<endl;
        }
    void sleep()
        {
            cout<<this->name<<" sleeping in the class"<<endl;
        }

    //deconstructor is called
    //dtor is called

    ~student()
    {
        cout<<"dtor is called"<<endl;
    }


};


int main(){
    student A;
    A.id=1;
    A.name="sanskar";
    A.age=26;
    A.roll_no=06;


    cout<<"finally c++ is running in vscode in new"<<endl;
    A.sleep();

    //out of scope is calling
    return 0;
}