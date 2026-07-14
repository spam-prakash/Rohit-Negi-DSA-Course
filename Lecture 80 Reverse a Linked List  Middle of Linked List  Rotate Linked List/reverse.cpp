
#include<iostream>
#include<vector>
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

Node *createLinkedList(vector<int>&arr,int index, int size, Node *Prev){
    if(index==size)return Prev;
    Node *Temp= new Node(arr[index]);
    Temp->next = Prev;
    return createLinkedList(arr,index+1,size,Temp);
}

int main(){
    vector<int>arr={6,67,56,78,56};
    Node *Head = NULL;
    Head = createLinkedList(arr,0,5,Head);

    // REVERSE USING VECTOR
    // vector<int>temparr;
    // Node *Tail = Head;
    // while(Tail){
    //     temparr.push_back(Tail->data);
    //     Tail = Tail->next;
    // }
    // Head = NULL;
    // Head = createLinkedList(temparr,0,5,Head);

    // REVERSE WITHOUT VECTOR
    Node *Prev = NULL;
    Node *Curr = Head;
    Node *Fut = NULL;

    while(Curr){
        Fut = Curr->next;
        Curr->next = Prev;
        Prev = Curr;
        Curr = Fut;
    }
    Head = Prev; 

    // Print
    Node *Dis = Head;
    while(Dis){
        cout<<Dis->data<<" ";
        Dis = Dis->next;
    } 
}