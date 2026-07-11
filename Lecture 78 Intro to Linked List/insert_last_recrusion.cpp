
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

Node *createLinkedList(int arr[], int index, int size){
    if(index==size){
        return NULL;
    }

    Node *temp = new Node(arr[index]);
    temp->next=createLinkedList(arr,index+1,size); 
    return temp;
}

int main(){
    int arr[5]={1,45,6,32,87};
    Node *Head= NULL;
    Head= createLinkedList(arr,0,5);
    Node *temp=Head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}