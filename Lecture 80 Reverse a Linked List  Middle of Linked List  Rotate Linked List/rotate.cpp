
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

Node *createLinkedList(vector<int>&list, int index, int size, Node *prev){
    if(index == size) return prev;
    Node *temp = new Node(list[index]);
    temp->next = prev;
    return createLinkedList(list,index+1,size,temp);
}

void displayLinkedList(Node *Dis){
    while(Dis){
        cout<<Dis->data<<" ";
        Dis = Dis->next;
    }
    cout<<endl;
}

int main(){
    vector<int>list ={54,7,54,67,51,36,79};
    Node *head = createLinkedList(list,0,list.size(),NULL);
    displayLinkedList(head);

    int length = 0;
    Node *temp = head;
    while(temp){
        length+=1;
        temp = temp->next;
    }
    Node *tail = head;
    Node *prev = NULL;
    int k=2;
    k= k%length;
    for(int i=0;i<k;i++){
        while(tail->next != NULL){
            prev=tail;
            tail=tail->next;
        }
        prev->next=NULL;
        tail->next=head;
        head = tail;
    }

    displayLinkedList(head);
}