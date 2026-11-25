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
    void reorderList(ListNode* head) {

        if ( head == nullptr || head->next == nullptr){
            return;
        }

        //find the middle using slow and fast where slow will reach the middle while fast will reach the end as fast jums two steps and slow takes one step

        ListNode* slow = head;
        ListNode* fast = head;

        while ( fast->next != nullptr && fast->next->next != nullptr){
            fast = fast->next->next;
            slow = slow->next;
        }

        //splitting 

        ListNode* second = slow->next;
        slow->next = nullptr;

        //reverse

        ListNode* prev = nullptr;
        while(second != nullptr){
            ListNode* next = second->next;
            second->next = prev;
            prev = second;
            second = next;
        }

        second = prev;
        ListNode* first = head;
        while( second != nullptr){
            ListNode* temp1 = first->next;
            ListNode* temp2 = second->next;

            first->next = second;
            second->next = temp1;

            first = temp1;
            second = temp2;
        }
    }
};