
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
    Node *Head;
    // HEAD = new Node(100);
    Head=NULL;

    int arr[4]={1,2,3,4};

    for(int i=0;i<4;i++){
        if(Head == NULL){
            Head = new Node(arr[i]);
        }else{
            Node *Temp = new Node(arr[i]);
            Temp->next = Head;
            Head = Temp;
        }
    }

    // INSERT AT GIVEN POSITION
    int x=2;
    int data=23;
    Node *Tail=Head;
    for(int i=0;i<x-1;i++){
        Tail = Tail->next;
    }
    Node *Ins = new Node(data);
    Ins->next = Tail->next; 
    Tail->next = Ins;


    // PRINT
    Node *Temp=Head;
    while(Temp){
        cout<<Temp->data<<" ";
        Temp=Temp->next;
    }
}