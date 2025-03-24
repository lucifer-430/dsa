#include<iostream>
using namespace std;

//in perfect encapsulation 
//all the data member/variable is private
class student{
    //defing the class attribute
    private:
    int age;
    string name;
    int roll_no;
    string gf;

    //ctor is always to be public(parmeterized)
    public:

     //calling the public method for private attribute
     
     //setting the gf name with the help of set public method
     void setgf(string gf){
        this->gf=gf;
        }

     //getting the gf name with the help of get public method & age
     string getgf() const
        {
            return this->gf;
        }

    int getage() const
    {
        return this->age;
    }

    student(int age,string name,int roll_no,string gf){
    cout<<"encap is called perfectly"<<endl;

    this->age=age;
    this->name=name;
    this->roll_no=roll_no;
    this->gf=gf;
    }

     //calling the behavior
    void sleep()
        {
            cout<<this->name<<"is sleeping"<<endl;
        }
    
    //calling some behavior in private
    private:
    void sleeping()
        {   
          cout<<this->gf<<"is the one"<<endl;
        }

    //dtor is also in public
    public:
    ~student()
    {
        cout<<this->name<<"dtor is called perfectly"<<endl;
    }

};


int main()
    {   
        //creating an object
         student A(12,"anmol",06,"rac");

        //Getting the old gf name
        cout<<"old name is "<<A.getgf()<<endl;
        //setting the gf name
        A.setgf("DRR");
        //Getting the new gf name
        cout<<"new name is "<<A.getgf()<<endl;

        //getting the age from the class by using the get function
         cout<<"the age will be"<<A.getage()<<endl;
        
        //calling the class varible
        A.sleep();

        //returning out of scope 
        //calling dtor
        return 0;
    }