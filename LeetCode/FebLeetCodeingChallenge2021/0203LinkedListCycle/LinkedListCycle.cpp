#include <iostream>

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode *onestep = head;
        ListNode *twosteps = head;

        if (head == nullptr) 
            return false;

        while (twosteps->next != nullptr && twosteps->next->next!= nullptr){
            onestep = onestep->next;
            twosteps = twosteps->next->next;
            if (onestep == twosteps)
                return true;
        }

        return false;
    }
};