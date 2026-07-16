
#include<iostream>
#include<vector>
using namespace std;

class Node{
    public:
        int data;
        Node *next;

        Node(int data): data(data), next(nullptr){}
};

void createLinkedList(vector<int>&list,int index, int size,Node *prev){
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
void insertAtEnd(int data, Node *&head, Node *&tail) {
    Node *newNode = new Node(data);

    if (head == nullptr) {
        head = tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = newNode;
}

int main(){
    vector<int>list1={5,10,15,40};
    vector<int>list2={2,3,20};
    Node *head1 = new Node(list1[0]);
    Node *head2 = new Node(list2[0]);
    createLinkedList(list1,1,list1.size(),head1);
    createLinkedList(list2,1,list2.size(),head2);    
    displayLinkedList(head1);
    displayLinkedList(head2);
    
    Node *head =NULL,*tail=NULL;
    Node *curr1=head1,*curr2=head2;
    while(curr1&&curr2){
        if(curr1->data<=curr2->data){
            insertAtEnd(curr1->data,head,tail);
            curr1=curr1->next;
        }else{
            insertAtEnd(curr2->data,head,tail);
            curr2=curr2->next;
        }
    }

    while(curr1){
        insertAtEnd(curr1->data,head,tail);
        curr1=curr1->next;
    }
    while(curr2){
        insertAtEnd(curr2->data,head,tail);
        curr2=curr2->next;
    }

    

    displayLinkedList(head);
}