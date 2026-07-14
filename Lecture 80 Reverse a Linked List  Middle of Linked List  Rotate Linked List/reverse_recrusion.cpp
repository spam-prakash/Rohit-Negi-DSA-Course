
#include<iostream>
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

Node *createLinkedList(int arr[],int index,int size,Node *Prev){
    if(index==size) return Prev;
    Node *Temp = new Node(arr[index]);
    Temp->next=Prev;
    return createLinkedList(arr,index+1,size,Temp);
}

Node *reverseLinkedList(Node *Curr, Node*Prev){
    if(Curr == NULL) return Prev;
    Node *Fut = Curr->next;
    Curr->next = Prev;
    return reverseLinkedList(Fut,Curr);
}

int main(){
    int arr[5]={5,6,46,54,15};
    Node *Head = createLinkedList(arr,0,5,NULL);
    Head =reverseLinkedList(Head,NULL);

    // PRINT
    Node *Dis = Head;
    while(Dis){
        cout<<Dis->data<<" ";
        Dis = Dis->next;
    }
}