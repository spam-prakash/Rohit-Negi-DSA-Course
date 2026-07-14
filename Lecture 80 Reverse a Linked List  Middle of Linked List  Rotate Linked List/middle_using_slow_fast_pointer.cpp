
#include<iostream>
using namespace std;

class Node{
    public: 
        int data;
        Node *next;

        Node(int data){
            this->data = data;
            this->next = NULL; 
        }
};

Node *createLinkedList(int arr[], int index, int size, Node *Prev){
    if (index == size) return Prev;
    Node *Temp = new Node(arr[index]);
    Temp->next = Prev;
    return createLinkedList(arr, index+1, size, Temp);  
}

void displayLinkedList(Node *Dis){
    while(Dis){
        cout<<Dis->data<<" ";
        Dis = Dis->next; 
    }
}

int main(){
    int arr[5]={53,56,234,89,9};
    Node *Head= createLinkedList(arr,0,5,NULL);
    displayLinkedList(Head);

    // MIDDLE USING SLOW & FAST POINTER
    Node *Slow = Head;
    Node *Fast = Head;

    while(Fast != NULL && Fast->next != NULL){
        Slow = Slow->next;
        Fast = Fast->next->next;
    }

    cout<<endl<<Slow->data;
}