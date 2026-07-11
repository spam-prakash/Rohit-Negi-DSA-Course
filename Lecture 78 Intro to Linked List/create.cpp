
#include<iostream>
using namespace std;

class NODE {
    private: 
        int data;
        NODE *next;
    public:
        NODE(int data,NODE *pt){
            this->data=data;
            this->next=pt;
        }
};

int main(){
    // STATIC
    NODE N1(1,NULL);

    // DYNAMIC
    NODE *HEAD;
    HEAD = new NODE(4,NULL);
}