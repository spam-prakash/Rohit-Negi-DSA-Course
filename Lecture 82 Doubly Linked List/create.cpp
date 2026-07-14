
#include<iostream>
#include<vector>
using namespace std;

class Node{
    public:
        Node *prev;
        int data;
        Node *next;

        Node(int data){
            this->prev=NULL;
            this->data=data;
            this->next=NULL;
        }
};

int main(){
    vector<int>list={54,46,2,56,789,6};
    Node *head=NULL;
    Node *tail=NULL;
    for(int i=0;i<list.size();i++){
        if(head==NULL){
            head = new Node(list[i]);
            tail=head;
        }else{
            // Node *temp = new Node(list[i]);
            // temp->next=head;
            // temp->next->prev = temp;
            // head=temp;

            Node *temp = new Node(list[i]);
            tail->next = temp;
            temp->prev=tail;
            tail = temp;
        }
    }

    Node *dis = head;
    while(dis){
        cout<<dis->data<<" ";
        dis = dis->next;
    }
}