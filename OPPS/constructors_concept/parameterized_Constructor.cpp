#include<iostream>
using namespace std;

class student{
    //defing the type of class
    public:

    //defing the attribute
    int id;
    string name;
    int age;

    //defining the paratermerized const
    student(int id,string name,int age){
        this->name=name;
        cout<<this->name<<"parameterized const is called"<<endl;
        this->id=id;
        this->name=name;
        this->age=age;
    }

    //defing the behaviour/method
    void sleep()
        {
            cout<<this->name<<"i will be there"<<endl;
        }

    ~student(){
        cout<<this->name<<"dtor is called"<<endl;
    }

};

int main(){

    //creating an object for paratemerized cons
    student A(1,"sanskar",26);
       student B(2,"skar",27);
          student C(3,"sakar",28);
             student D(4,"akar",29);

    A.sleep();
    cout<<endl;
    cout<<A.name<<" "<<A.age;
    cout<<endl;


    //running out of scope is calling
    return 0;
};