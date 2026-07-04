
#include<iostream>
#include<string>
using namespace std;

class Student{
    int a,b;
    char c;
};

int main(){
    Student s1;
    cout<<sizeof(s1);
}

// In this the sizeof s1 will be 12. but why?? 
// It was supposed to have 9 because it has 2 int and a char. but our compilers trade few memory for the speed like in this case it will add 3 exta bits to access it faster.
// This concpet of adding extra bits to trade memory with space is called padding.

// It alloacted the memory in the multiple of its size
// eg: char b,c; int a;
// 0 1 2 3 4 5 6 7 8
// b c     a a a a
// store at 0th index after that check is 1 multiple of 1==> yes, then store it on the 1st
// Now check is 2 multiple of 4 because now we have to store int and size of int is 4 bits
// So check is 2 multiple of 4 ==> no, move to next index
// Check is 3 multipke of 4 ==> no, move to next index
// Check is 4 multiple of 4 ==> yes, store it there
// finel size will be 8