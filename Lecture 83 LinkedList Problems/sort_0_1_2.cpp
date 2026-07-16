
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
    Node *temp=new Node(list[index]);
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
    vector<int>list={0,1,1,2,1,2,0,0,1,2,2};
    Node *head= new Node(list[0]);
    createLinkedList(list,1,list.size(),head);
    displayLinkedList(head);

    int count0, count1, count2;
    count0 = count1 = count2 = 0;


    Node *curr = head;

    while(curr){
        if(curr->data==0) count0++;
        else if(curr->data==1) count1++;
        else if(curr->data==2) count2++;
        curr = curr->next;
    }

    curr=head;
    while(count0--){
        curr->data=0;
        curr = curr->next;
    }
    while(count1--){
        curr->data=1;
        curr = curr->next;
    }
    while(count2--){
        curr->data=2;
        curr = curr->next;
    }
    displayLinkedList(head);
    
}