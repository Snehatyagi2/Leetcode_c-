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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        
        // if list1 is empty, just return list2 [as its already sorted]
        if (list1 == NULL) {
            return list2;
        }
        // vice versa
        if (list2 == NULL) {
            return list1;
        }

        // compare and make a recursive call [recursion is where stack is used]
        if (list1->val <= list2->val) {
            list1->next = mergeTwoLists(list1->next, list2);
            return list1;
        } 
        
        // vice versa
        else {
            list2->next = mergeTwoLists(list2->next, list1);
            return list2;
        }
    }
};