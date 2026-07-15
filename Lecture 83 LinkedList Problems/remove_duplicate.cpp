
#include<iostream>
#include<vector>
using namespace std;

class Node{
    public:
        int data;
        Node *next;

        Node(int data): data(data), next(nullptr){}
};

void createLinkedList(vector<int>&list, int index, int size, Node *prev){
    if(index==size) return;
    Node *temp= new Node(list[index]);
    prev->next=temp;
    createLinkedList(list,index+1,size,temp);
}

void displayLinkedList(Node *dis){
    while(dis){
        cout<<dis->data<<" ";
        dis = dis->next;
    }
    cout<<endl;
}

int main(){
    vector<int>list={2,5,5,7,7,8,8,8,9,9,9,9};
    Node *head =new Node(list[0]);
    createLinkedList(list,1,list.size(),head);
    displayLinkedList(head);

    Node *curr = head;
    while(curr && curr->next){
        Node *nextNode= curr->next;
        if(curr->data == nextNode->data){
            
                curr->next = nextNode->next;
                delete nextNode;
            
        }else{
            curr=curr->next;
        }
    }

    displayLinkedList(head);
}