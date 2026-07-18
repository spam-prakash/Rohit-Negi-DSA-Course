
#include<iostream>
#include<vector>
using namespace std;

class Node{
    public:
        int data;
        Node *next;

        Node(int data): data(data), next(nullptr){};
};

void createSingly(vector<int>&list, int index, int size, Node *prev){
    if(index == size) return;
    Node *temp = new Node(list[index]);
    prev->next=temp;
    createSingly(list,index+1,size,temp);
}

void displayLinkedList(Node *dis){
    while(dis){
        cout<<dis->data<<" ";
        dis = dis->next;
    }
    cout<<endl;
}

class Solution{
    public:

};

int main(){
    vector<int>list={1,2,56,78,89,54,342,9,789,58,90,43,98,47,19};
    int size=4;
    Node *head =new Node(list[0]);
    createSingly(list,1,list.size(),head);
    displayLinkedList(head);

    Solution obj;

}