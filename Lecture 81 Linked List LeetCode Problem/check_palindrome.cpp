
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

Node *createLinkedList(vector<int>&list,int index,int size, Node *prev){
    if(index==size) return prev;
    Node *temp = new Node(list[index]);
    temp->next=prev;
    return createLinkedList(list,index+1,size,temp);
}

int main(){
    vector<int>list={1,2,3,3,2,1};
    Node *head=createLinkedList(list,0,list.size(),NULL);
    vector<int>newlist;

    Node *temp=head;
    while(temp){
        newlist.push_back(temp->data);
        temp=temp->next;
    }

    // for(auto x:newlist){
    //     cout<<x<<" ";
    // }

    int start=0,end=newlist.size()-1;
    bool flag=false;
    while(start<=end){
        if(newlist[start]==newlist[end]){
            flag=true;
        }else{
            flag=false;
        }
        start++;
        end--;
    }

    flag ? cout<<"true" : cout<<"false";
}