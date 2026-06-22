
#include<iostream>
using namespace std;

class Student{
    public:
        string name;
        int roll, age;
        string grade;
};

int main(){
    Student s1;
    s1.name="Prakash";
    s1.roll=1167;
    s1.age=19;
    s1.grade="A";

    cout<<s1.name<<"\n"<<s1.roll<<"\n"<<s1.age<<"\n"<<s1.grade;
    
}