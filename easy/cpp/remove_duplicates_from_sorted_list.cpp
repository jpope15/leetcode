// https://leetcode.com/problems/remove-duplicates-from-sorted-list/

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
    ListNode* deleteDuplicates(ListNode* head) {        
        ListNode* newHead = head;
        while (head)
        {
            if (!head->next)
            {
                break;
            }
            ListNode* nextHead = head->next;
            while (nextHead && nextHead->val == head->val)
            {
                nextHead = nextHead->next;
            }
            head->next = nextHead;
            head = nextHead;
        }
        return newHead;
    }
};