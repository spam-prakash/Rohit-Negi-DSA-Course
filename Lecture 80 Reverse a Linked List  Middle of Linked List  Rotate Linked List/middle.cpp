
#include<iostream>
using namespace std;

class Node{
    public: 
        int data;
        Node *next;

        Node(int data){
            this->data = data;
            this->next = NULL;
        }
};

Node *createLinkedList(int arr[], int index, int size, Node *Prev){
    if(index  == size) return Prev;
    Node *Temp = new Node(arr[index]);
    Temp->next = Prev;
    return createLinkedList(arr,index+1,size,Temp);
}

void displayLinkedList(Node *Dis){
    while(Dis){
        cout<<Dis->data<<" ";
        Dis = Dis->next;
    }
}

int main(){
    int arr[6]={56,67,54,74,34,54};
    Node *Head= createLinkedList(arr,0,6,NULL);
    
    displayLinkedList(Head);

    // FIND MIDDLE
    int count = 0;
    Node *Tail = Head;
    while(Tail){
        count+=1;
        Tail = Tail->next;
    }
    count /=2; 
    Tail = Head;
    for(int i=0;i<count;i++){
        Tail =Tail->next;
    }
    cout<<endl<<"Middle Node: "<<Tail->data;
}