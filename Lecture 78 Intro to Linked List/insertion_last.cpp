
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
    int arr[5]={2,4,6,8,1};

    Node *Head= new Node(13);
    Node *Tail=Head;

    for(int i=0;i<5;i++){
        if(Head==NULL){
            Head = new Node(arr[i]); 
            Tail = Head;
        }else{
            Tail->next= new Node(arr[i]);
            Tail= Tail->next;
        }
    }

    // PRINT 
    Node *temp = Head;
    while(temp){
        cout<<temp->data<<" ";
        temp= temp->next;
    }
}