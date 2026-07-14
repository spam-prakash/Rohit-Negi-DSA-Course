
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
    if(index==size) return prev;
    Node *temp = new Node(list[index]);
    temp->next = prev;
    return createLinkedList(list,index+1,size,temp); 
}

void displayLinkedList(Node *dis){
    while(dis){
        cout<<dis->data<<" ";
        dis = dis->next;
    }
    cout<<endl;
}

int main(){
    vector<int>list={54,534,89,756,4,234,55};
    Node *head = createLinkedList(list,0,list.size(),NULL);
    displayLinkedList(head);

    // REMOVE Kth ELEMENT
    int k=3;

    Node *temp= head;
    int count=0;
    while(temp){
        count++;
        temp=temp->next;
    }
    if(k==1){
        head=NULL;
    }

    int delCount=count/k;
    temp=head;
    while(delCount--){
        for(int i=1;i<k-1;i++){
            temp=temp->next;
        }
        Node *tempdel = temp->next;
        temp->next = tempdel->next;
        temp=tempdel->next;
        delete tempdel;
    }

    displayLinkedList(head);

}


// NO EXTERNAL HELP TAKEN