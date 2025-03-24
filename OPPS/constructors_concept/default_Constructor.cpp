#include<iostream>
using namespace std;

//creating a class of student
class student{
    //defing which kind of class it is
    public:

    //defing a attribute
    int id;
    string name;
    int roll_no;


    //default constructor is calling
    student(){
        //this->name=name;
        cout<<this->name<<"default constructor is calling for a particular object"<<endl;
    }

    //defing a method/behaviour
    void sleep(){
        cout<<this->name<<" found to sleep"<<endl;
    }

    //default deconstructor is calling
    ~student(){
        cout<<this->name<<" dtor is called for this object"<<endl;
    }

};

int main(){
    cout<<"creating an object1"<<endl;
    //creating an object1
    student a;
    a.id=1;
    a.name="sanskar";
    a.roll_no=06;
    a.sleep();

    cout<<"creating an object2"<<endl;
    //creating an object2
    student b;
    b.id=2;
    b.name="anmol";
    b.roll_no=60;
    b.sleep();


    //returning out of scope 
    //first anmol will delete
    //second sanskar will delete
    return 0;
}