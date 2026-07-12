
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
    int arr[5]={234,56,78,89,67};
    Node *Head=NULL;


    // INSERT THE NODES
    for(int i=0;i<5;i++){
        if(Head==NULL){
            Head=new Node(arr[i]);
        }else{
            Node *Temp = new Node(arr[i]);
            Temp->next=Head;
            Head=Temp; 
        }
    }
    

    // DELETE PART
    int x=2; //Index to delete

    if(Head==NULL) return 0;

    if(x==0){
        Node *TempDel = Head;
        Head = Head->next;
        delete TempDel;
    }else{
        Node *Tail= Head;
        for(int i=0;i<x-1 && Tail != NULL ;i++){
            Tail=Tail->next;
        }

        if(Tail !=NULL && Tail->next != NULL){
            Node *TempDel = Tail->next;
            Tail->next = Tail->next->next;
            delete TempDel;
        }
        
    }

    // PRINT
    Node *Dis = Head;
    while(Dis){
        cout<<Dis->data<<" ";
        Dis=Dis->next;
    }
}