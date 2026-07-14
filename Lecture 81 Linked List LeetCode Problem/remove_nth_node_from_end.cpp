
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

// Node *reverse(Node *curr, Node *prev){
//     if(curr == NULL) return prev;
//     Node *fut = curr->next;
//     curr->next= prev;
//     return reverse(fut,curr);
// }

void remove(Node* head, int k){
    if(head == NULL) return ;
    if(k==0){
        Node *tempdel = head;
        head = tempdel->next;
        delete tempdel;
    }else{
        Node *tail=head;
        for(int i=1;i<k-1 && tail!=NULL;i++){
            tail = tail->next;
        }

        if(tail !=NULL && tail->next != NULL){
            Node *tempdel = tail->next;
            tail->next=tempdel->next;
            delete tempdel;
        }
    }
}

int main(){
    vector<int>list = {6,67,24,9,2,789,234};
    int k=3;
    Node *head = createLinkedList(list,0,list.size(),NULL);
    displayLinkedList(head);
    // head = reverse(head,NULL);
    Node *tail = head;
    int count=0;
    while(tail){
        count+=1;
        tail = tail->next;
    }
    k=count-k+1;
    remove(head,k);
    // head = reverse(head,NULL);
    displayLinkedList(head);
}