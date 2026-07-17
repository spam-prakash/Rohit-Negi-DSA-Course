
#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};

class Solution {
public:
    Node* intersectPoint(Node* head1, Node* head2) {
        Node *curr1 = head1, *curr2 = head2;
        int length1 = 0, length2 = 0;

        while (curr1) {
            length1++;
            curr1 = curr1->next;
        }

        while (curr2) {
            length2++;
            curr2 = curr2->next;
        }

        curr1 = head1;
        curr2 = head2;

        int diff = abs(length1 - length2);

        if (length1 > length2) {
            while (diff--)
                curr1 = curr1->next;
        } else {
            while (diff--)
                curr2 = curr2->next;
        }

        while (curr1 != curr2) {
            curr1 = curr1->next;
            curr2 = curr2->next;
        }

        return curr1;
    }
};

int main() {
    // Common part
    Node* common = new Node(30);
    common->next = new Node(40);
    common->next->next = new Node(50);

    // List 1: 10 -> 20 -> 30 -> 40 -> 50
    Node* head1 = new Node(10);
    head1->next = new Node(20);
    head1->next->next = common;

    // List 2: 15 -> 30 -> 40 -> 50
    Node* head2 = new Node(15);
    head2->next = common;

    Solution obj;
    Node* ans = obj.intersectPoint(head1, head2);

    if (ans)
        cout << "Intersection at node: " << ans->data << endl;
    else
        cout << "No intersection found." << endl;

    return 0;
}



// Copied from ChatGPT beacuse recreating the intersection Node was tough.