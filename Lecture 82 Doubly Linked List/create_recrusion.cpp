
#include<iostream>
#include<vector>
using namespace std;

class Node{
    public:
        Node *prev;
        int data;
        Node *next;
        
        Node(int data): prev(nullptr), data(data), next(nullptr){}
};

void createLinkedList(vector<int>&list, int index, int size, Node *tail){
    if(index == size) return;
    Node *temp=new Node(list[index]);
    tail->next = temp;
    temp->prev = tail;
    createLinkedList(list,index+1,size,temp);
}

int main(){
    vector<int>list = {35,23,67,789,234};
    Node *head =new Node(list[0]);
    createLinkedList(list,1,list.size(),head);

    Node *dis = head;
    while(dis){
        cout<<dis->data<<" ";
        dis = dis->next;
    }
}