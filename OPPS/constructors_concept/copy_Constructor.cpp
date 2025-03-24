#include<iostream>
using namespace std;

//creating a class
class student{
    //defing the type of class
    public:

    //defing the attribute
    int id;
    string name;
    int roll_no;

    //defing the parameterized constructor

    student(int id,string name,int roll_no)
        {
            cout<<"parctor is called"<<endl;
            this->id=id;
            this->name=name;
            this->roll_no=roll_no;
        }
    //defing the copy constructor
    //byreference
    student(const student &srcobj)//scr->a
        {
            cout<<"copy constructor is called"<<endl;
            this->id=srcobj.id;
            this->name=srcobj.name;
            this->roll_no=srcobj.roll_no;
        }
    //defing the methond/behaviour
    void bark()
        {
            cout<<this->name<<"anmol is here"<<endl;
        }

    //defing the dtor
    ~student(){
        cout<<this->name<<"dtor is called"<<endl;
    }


};

int main(){
    //defing the object
    student A(1,"anmol",20);

    //calling the copy const
    student c=A;
    cout<<c.name<<" "<<A.name;
    //calling the out of scope
    //deconstructor
    return 0;
}