
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

Node *createLinkedList(int arr[],int index,int size, Node*Prev){
    if(index==size) return Prev;
    Node *Temp=new Node(arr[index]);
    Temp->next=Prev;
    return createLinkedList(arr,index+1,size,Temp);
}

int main(){
    int arr[5]={4,54,56,2367,6};
    Node *Head= NULL;
    Head= createLinkedList(arr,0,5,Head);

    Node *Temp=Head;
    while(Temp){
        cout<<Temp->data<<" ";
        Temp=Temp->next;
    }
}