// Insertion can be at
// 1. Start
// 2. End
// 3. Anywhere

#include<iostream>
using namespace std;


class Node{
    public:
    int data;
    Node *next;

    
        Node(int data){
            this->data=data;
            this->next=NULL;
        }
};

int main(){
    Node *HEAD;
    // HEAD = new Node(100);
    HEAD=NULL;

    int arr[4]={1,2,3,4};

    for(int i=0;i<4;i++){
        // Linked list does not exist
        if(HEAD==NULL){
            HEAD = new Node(arr[i]);
        }
        // Linked list exists
        else {
            Node *temp;
            temp= new Node(arr[i]);
            temp->next=HEAD;
            HEAD=temp;
        }
        // cout<<HEAD->data<<" "<<HEAD->next<<endl;
    }

    // PRINT 
    Node *temp = HEAD;
    while(temp){
        cout<<temp->data<<" ";
        temp= temp->next;
    }

}