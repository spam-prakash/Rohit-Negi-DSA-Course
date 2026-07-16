/*
class Node {
   public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
} */


#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

class Node{
    public:
        int data;
        Node *next;

        Node(int data): data(data), next(nullptr){};
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


class Solution {
  public:
    // bool check(vector<Node*>&visited, Node *curr){
    //     for(int i=0;i<visited.size();i++){
    //         if(visited[i]==curr)
    //             return 1;
    //     }
    //     return 0;
    // }
    bool detectLoop(Node* head) {
        // code here
        Node *curr = head;
        unordered_map<Node*,bool>visited;
        while(curr){
            if(visited[curr]){
                return 1;
            }
            visited[curr]=1;
            curr = curr->next;
        }
        return 0;
    }
};

int main(){
    vector<int>list={1,2,3,4,5,6,7,8,9,10};
    int singly=4;

    Node *startCircular = NULL;
    Node *head = new Node(list[0]);
    createSingly(list,1,singly,head,startCircular);
    createCircular(list,singly,list.size(),startCircular,startCircular);

    Solution obj;

    if(obj.detectLoop(head))
        cout << "Loop detected";
    else
        cout << "No loop detected";
}