
#include<iostream>
#include<string>
using namespace std;

class Student{
    private: //Default Access
        string name;
        int age;
        int roll;
        string grade;
    public:
        void setName(string s){
            name=s;
        }
        void showName(){
            cout<<name;
        }
        void setAge(int n){
            age=n;
        }
        void showAge(){
            cout<<age;
        }

};

int main(){
    Student s1;
    // s1.name="XYZ"; //Not possible beacuse name is a private field
    s1.setName("XYZ");
    s1.setAge(14);
    s1.showName();
    s1.showAge();
}


// Class is just a blueprint of an object it does not take any sapce in the memory.
// In this case Student is a class and s1 is an object.
// Object is an actual entity defined on the class. This take space in the memory. 