
#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Node{
    public:
        int data;
        Node *next;

        Node(int data): data(data), next(nullptr){};
};

void createSingular(vector<int>&list, int index, int size, Node *prev){
    if(index==size) return;
    Node *temp= new Node(list[index]);
    prev->next=temp;
    createSingular(list,index+1,size,temp);
}

void displayLinkedList(Node *dis){
    while(dis){
        cout<<dis->data<< " ";
        dis=dis->next;
    }
    cout<<endl;
}



class Solution{
    public:
        Node *reverseList(Node *head){
           Node *prev=NULL;
           Node *curr=head;
           Node *fut=NULL;

           while(curr){
            fut=curr->next;
            curr->next=prev;
            prev=curr;
            curr=fut;
           }
           return prev;
        }

        Node *addTwoNymbers(Node *head1, Node *head2){
            Node *curr1=reverseList(head1);
            Node *curr2=reverseList(head2);
            Node *head=new Node(0);
            Node *tail=head;
            int carry=0;

            while(curr1 && curr2){
                int sum=curr1->data+curr2->data+carry;
                tail->next=new Node(sum%10);
                tail=tail->next;
                curr1=curr1->next;
                curr2=curr2->next;
                carry=sum/10;
            }
            while(curr1){
                int sum=curr1->data+carry;
                tail->next=new Node(sum%10);
                tail=tail->next;
                curr1=curr1->next;
                carry=sum/10;
            }
            while(curr2){
                int sum=curr2->data+carry;
                tail->next=new Node(sum%10);
                tail=tail->next;
                curr2=curr2->next;
                carry=sum/10;
            }

            if(carry){
                tail->next=new Node(carry);
            }
            // To remove the extrta zero
            head=head->next;
            head=reverseList(head);
            return head;
        }

};

int main(){
    vector<int>list1={1,2,3};
    vector<int>list2={9,9,9};
    Node *head1 = new Node(list1[0]);
    Node *head2 = new Node(list2[0]);
    createSingular(list1,1,list1.size(),head1);
    createSingular(list2,1,list2.size(),head2);
    displayLinkedList(head1);
    displayLinkedList(head2);

    Solution obj;
    Node *head = obj.addTwoNymbers(head1,head2);
    displayLinkedList(head);
}