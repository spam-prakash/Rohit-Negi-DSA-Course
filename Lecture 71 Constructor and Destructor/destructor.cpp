
// It is also a special type of function which get called automatically while an object is about to be destroyed.
// It is the last function which gets called inside an function.
// It does not have any return type.
// There can not be more than one destructor in a class.
// It is used to release the memory used by an object/class.

// While constructor is called from first to last but destructor is called in reverse order. Means that the object which has been created last will be destroyed first.
// This happens because of dependency. For example it can happen that the obj2 may be using obj1 while its execution and if we delete obj1 before obj2 it might crash. SO to prevent that it is destroyed in reverse order.

#include<iostream>
#include<string>
using namespace std;

class Customer{
    string name;
    int *balance;

    public:
        Customer(string s, int bal){
            this->name=s;
            balance= new int;
            *balance= bal;
            cout<<"Constructor of "<<name<<endl;
        }

        void show(){
            cout<<name<<" "<<balance<<endl;
        }

        // Destructor
        ~Customer(){
            delete balance;
            cout<<"Destructot of "<<name<<endl;
        }
};

int main(){
    Customer c1("Rohit",5000), c2("Mohit",8000), c3("XYZ",9500);
}

// OUTPUT

// Constructor of Rohit
// Constructor of Mohit
// Constructor of XYZ
// Destructot of XYZ
// Destructot of Mohit
// Destructot of Rohit
