
#include<iostream>
#include<vector>
using namespace std;

class Node{
    public:
        Node *prev;
        int data;
        Node *next;

        Node(int data): prev(nullptr), data(data), next(nullptr){};
};

void createDoubly(vector<int>&list, int index, int size, Node *tail){
    if(index == size) return;
    Node *temp = new Node(list[index]);
    tail->next=temp;
    temp->prev = tail;
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
    vector<int>list={54,234,67,78,89,23,90};
    Node *head = new Node(list[0]);
    createDoubly(list,1,list.size(),head);
    displayLinkedList(head);

    // DELETE AT POS
    int p = 2;      // 1-based position
    Node *tail=head;
    for (int i = 1; i < p; i++) {
        tail = tail->next;
    }
    if(tail->prev!=NULL) tail->prev->next = tail->next;
    else head=tail->next;
    if(tail->next!=NULL)tail->next->prev = tail->prev;
    delete tail;
    displayLinkedList(head);
}