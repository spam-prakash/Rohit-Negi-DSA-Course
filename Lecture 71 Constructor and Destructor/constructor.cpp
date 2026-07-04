
// It is a special function which get called automaticaly while creation of any object.
// Its name must be same as the class name.
// It does nove any return type(not even void).
// It is used to initialize the values.
// A class may have multiple constructor. Approriate constructer will be called based on argment passed and parameters required.
// Constructor overloading is a method by which we create multiple parametrizied constructor with diffrent parameter list. 

#include<iostream>
#include<string>
using namespace std;

class Customer{
    string name;
    int account_number, debt;
    public:
    // Customer(){
    //     cout<<"Constructor is called.";
    // }

    // Default Constructor
    Customer(){
        name="CDE";
        account_number=3344656;
        debt=545;
    }

    // Parameterizied Constructor
    // Customer(string name, int account_number, int debt){
    //     name=name;
    //     account_number=account_number;
    //     debt=debt;
    // }
    // Issue with this is that when we have the same name it creates a conflict. To handle that we use the 'this' pointer.

    Customer(string name, int account_number, int debt){
        this -> name=name;
        this -> account_number=account_number;
        this -> debt= debt;
    }

    // Cunstroctor Overloading
    Customer(string s, int account_number){
        this->name=s;
        this->account_number=account_number;
    }

    // Inline Constructor
    // inline Customer(string s, int a, int b):name(s), account_number(a), debt(b){}

    // Copy Constructor
    Customer (const Customer &C){
        this->name=C.name;
        this->account_number=C.account_number;
        this->debt=C.debt;
    }

    void show(){
        cout<<name<<" "<<account_number<<" "<<debt<<endl;
    }
};

int main(){
    Customer c1; //It will be initilized by the default constructor.
    c1.show();
    Customer c2("Rohit",780955,1500);
    c2.show();
    Customer c3("Mohit",978);
    c3.show();
    Customer c4(c2);  // Default Copy Constructor
    c4.show();
}