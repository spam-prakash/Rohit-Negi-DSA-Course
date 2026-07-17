
#include<iostream>
#include<vector>
using namespace std;

class Node{
    public:
        int data;
        Node *next;
        
        Node(int data): data(data), next(nullptr){};
};

void createSingly(vector<int>&list,int index,int size,Node* prev, Node* &startCircular){
    if(index==size){
        startCircular=prev;
        return;
    }
    Node* temp = new Node(list[index]);
    prev->next=temp;
    createSingly(list,index+1,size,temp,startCircular);
}

void createCircular(vector<int>&list, int index, int size, Node *prev, Node *startCircular){
    if(index==size){
        prev->next = startCircular;
        return;
    }
    Node* temp = new Node(list[index]);
    prev->next = temp;
    createCircular(list,index+1,size,temp,startCircular);
}

class Solution{
    public:
        void removeLoop(Node *head){
            if(!head) return;

            Node *slow= head, *fast = head;
            bool loop = false;

            // Detect the loop
            while(fast && fast->next){
                slow=slow->next;
                fast=fast->next->next;

                if(slow==fast){
                    loop = true;
                    break;
                }
            }

            // Find the looping Node
            slow=head;
            if(!loop) return;
            while(slow!=fast){
                slow=slow->next;
                fast=fast->next;
            }
            
            // Delete the looping Node
            Node *temp=slow;
            while(temp->next!=fast){
                temp=temp->next;
            }
            temp->next=NULL;
        }
};

int main(){
    vector<int>list={2,4,6,7,9,1,7,78,5};
    int singly=4;
    Node *startCircular=NULL;
    Node *head = new Node(list[0]);
    createSingly(list,1,singly,head,startCircular);
    createCircular(list,singly,list.size(),startCircular,startCircular);

    Solution obj;
    obj.removeLoop(head);
}