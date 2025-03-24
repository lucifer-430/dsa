#include<iostream>
using namespace std;
//mode of inheritance is only possible in c++
//CREATINg a base CLASS

//base class->public ,,then derived class->public,private,protected
class vechile{
    //if we don't mentioned the defination of class  than it will be private bydeafult
    public:
    //defing the attributes
    int no_of_tyres;
    int no_of_doors;
    string engine;

    //calling the constructor function
    vechile(int no_of_doors,int no_of_tyres,string engine){
        cout<<"base class is called that is vechile"<<endl;
        this->no_of_doors=no_of_doors;
        this->no_of_tyres=no_of_tyres;
        this->engine=engine;}

    //calling the behaviour/method
    void engine_start(){cout<<"vechile engine is started succesfully"<<endl;}
      void engine_stop(){cout<<"vechile engine is stop succesfully"<<endl;}

    //calling the dtor
    ~vechile(){
        cout<<"dtor of vechile is called successfully"<<endl;
    }
};

//creating a derived class
class car:public vechile
{   
    public:
    //creating attribute extra
    int car_type;
    int top_speed;
    //creating a parametrised ctor of car 
    //inherit from parent class
    car(int no_of_doors,int no_of_tyres,string engine,int car_type,int top_speed):vechile(no_of_doors,no_of_tyres,engine){

        cout<<"ctor is called successfully for car"<<endl;
        this->car_type=car_type;
        this->top_speed=top_speed;
    }

    //calling the method
    void car_mileage(){
        cout<<this->top_speed<<"is the max speed it have"<<endl;
    }

    //calling the dtor of car
    ~car()
        {
            cout<<"dtor is of car is called successfully"<<endl;
        }
};

//creating a derived class
class bike:public vechile{
    public:
    int bike_model;
    int bike_speed;
    bike(int bike_model,int bike_speed,int no_of_tyres):vechile(no_of_doors,no_of_tyres,engine){
        cout<<"called";
    }

};

class ship:protected vechile
{

};

int main(){
    //vechile(2,3,"honda");
    car a(2,2,"hero",1,8);
    a.engine_start();
    a.car_mileage();
    a.engine_stop();


    //returning out of scope
    return 0;
}