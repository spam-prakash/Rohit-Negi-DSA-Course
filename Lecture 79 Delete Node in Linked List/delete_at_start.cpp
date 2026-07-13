
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
    int arr[5]={4,54,57,34,8};
    Node *Head= NULL;

    for(int i=0;i<5;i++){
        if(Head==NULL){
            Head = new Node(arr[i]);
        }else{
            Node *Temp = new Node(arr[i]);
            Temp->next= Head;
            Head = Temp;
        }
    }

    // DELETE FIRST NODE
    if(Head != NULL){
        Node *Tail=Head;
        Head = Tail->next;
        delete Tail;
    }

    Node *Dis = Head;
    while(Dis){
        cout<<Dis->data<<" ";
        Dis = Dis->next;
    }   
}