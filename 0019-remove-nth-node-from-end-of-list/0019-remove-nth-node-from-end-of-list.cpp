/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *p = head, *q = head, *t = head;
        int x = 0;

        // Pass 1: Count total number of nodes in the list
        while (t) {
            x++;
            t = t->next;
        }

        // Edge case: removing the head node (nth from end is the 1st node)
        if (x == n) {
            head = head->next;
            delete q; // Free the removed head node
            return head;
        }

        // Pass 2: Move q to the target node and p to its previous node
        for (int i = 1; i <= x - n; i++) {
            p = q;
            q = q->next;
        }

        // Unlink and delete the target node
        p->next = q->next;
        delete q;

        return head;
    }
};