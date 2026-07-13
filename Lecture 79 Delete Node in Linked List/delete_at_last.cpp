
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
    int arr[5]={35,56,34,54,67};
    Node *Head = NULL;

    for(int i=0;i<5;i++){
        if(Head==NULL){
            Head = new Node(arr[i]);
        } else{
            Node * Temp = new Node(arr[i]);
            Temp->next = Head;
            Head = Temp;
        }
    }

    // DELETE LAST NODE

     if(Head == NULL){   //Linked List Does NOt Exist
        cout<<"List is Empty.";
    }else if( Head ->next ==NULL){  //Lisked List has Excatly One Node
        delete Head;
        Head = NULL;
    } else{     //Linked List havr More Then One Node
        Node *Tail = Head;
        while(Tail->next->next != NULL){
            Tail = Tail->next;
        }  
        Node *Del = Tail->next;
        Tail->next= NULL;
        delete Del; 
    }

    // PRINT
    Node *Dis= Head;
    while(Dis){
        cout<<Dis->data<<" ";
        Dis = Dis->next;
    } 
}