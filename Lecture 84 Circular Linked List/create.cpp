
#include<iostream>
#include<vector>
using namespace std;

class Node{
    public:
        int data;
        Node *next;

        Node(int data): data(data), next(nullptr){};
};

void createLinkedList(vector<int>&list, int index, int size, Node *prev, Node *head){
    if(index == size){
        prev->next=head;
        return;
    }
    Node *temp = new Node(list[index]);
    prev->next=temp;
    createLinkedList(list,index+1,size,temp,head);
}

void displayLinkedList(Node *dis, Node *head){
    if(head==NULL) return;
    do
    {
        cout<<dis->data<<" ";
        dis = dis->next;
    } while (dis!=head);
    // cout << dis->data << endl;
    cout<<endl;
}

int main(){
    vector<int>list={54,4,78,23,90};
    Node *head = new Node(list[0]);
    createLinkedList(list,1,list.size(),head,head);
    displayLinkedList(head,head);
}