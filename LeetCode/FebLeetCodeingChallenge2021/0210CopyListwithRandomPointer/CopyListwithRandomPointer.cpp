# include <iostream>

// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;

    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};


class Solution {
public:
    Node* copyRandomList(Node* head) {
        if (head == NULL)
            return NULL;

        Node* ans;
        Node* templistOne = head;
        Node* templistTwo;

        while(templistOne) {
            templistTwo = new Node(templistOne->val);
            templistTwo->next = templistOne->next;
            templistOne->next = templistTwo;
            templistOne = templistOne->next->next;
        }

        ans = head->next;
        templistOne = head;
        while (templistOne) {
            if (templistOne->random)
                templistOne->next->random = templistOne->random->next;
            templistOne = templistOne->next->next;
        }

        templistOne = head;
        while (templistOne) {
            templistTwo = templistOne->next;
            templistOne->next = templistTwo->next;
            if (templistTwo->next)
                templistTwo->next = templistTwo->next->next;
            templistOne = templistOne->next;
        }

        return ans;
    }
};
