
#include<iostream>
#include<vector>
using namespace std;

class Node{
    public:
        Node *next;
        int data;
        Node *prev;

        Node(int data): prev(nullptr), data(data), next(nullptr){};
};

void createDoubly(vector<int>&list, int index, int size, Node *tail){
    if(index==size) return;
    Node *temp=new Node(list[index]);
    temp->prev=tail;
    tail->next=temp;
    createDoubly(list,index+1,size,temp);
}

void displayLinkedList(Node *dis){
    while(dis){
        cout<<dis->data<<" ";
        dis = dis->next;
    }
    cout<<endl;
}

int main(){
    vector<int>list={34,23,7,8,6,4,3};
    Node *head = new Node(list[0]);
    createDoubly(list,1,list.size(),head);
    displayLinkedList(head);

    // INSERT AT POS
    int p=2,x=61;    //Insert after the pth node.

    Node *tail = head; 
    while(p--){
        tail = tail->next;
    }
    Node *temp = new Node(x);
    temp->next = tail->next;
    temp->prev = tail;
    if(tail->next!=NULL) tail->next->prev = temp;
    tail->next = temp;

    
    displayLinkedList(head);
}