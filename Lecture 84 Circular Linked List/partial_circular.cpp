
#include<iostream>
#include<vector>
using namespace std;

class Node{
    public:
        int data;
        bool visited;
        Node *next;

        Node(int data): data(data), visited(false), next(nullptr){};
};

void createSingly(vector<int>&list, int index, int size, Node *prev, Node *&startCircular){
    if(index==size) {
        startCircular = prev;
        return;
    }
    Node *temp = new Node(list[index]);
    prev->next=temp;
    createSingly(list,index+1,size,temp,startCircular);
}

void createCircular(vector<int>&list, int index, int size, Node *prev, Node *head){
    if(index == size){
        prev->next = head;
        return;
    }
    Node *temp = new Node(list[index]);
    prev->next = temp;
    createCircular(list,index+1,size,temp,head);
}

void displayLinkedList(Node *dis){
    while(dis && !dis->visited){
        cout << dis->data << " ";
        dis->visited = true;
        dis = dis->next;
    }
    cout << endl;
}

void resetVisited(Node *reset){
    while(reset && reset->visited){
        reset->visited=false;
        reset = reset->next;
    }
}

int main(){
    vector<int>list={1,2,3,4,5,6,7,8,9,10};
    int singly=4;

    Node *startCircular = NULL;
    Node *head = new Node(list[0]);
    createSingly(list,1,singly,head,startCircular);
    createCircular(list,singly,list.size(),startCircular,startCircular);
    displayLinkedList(head);

}