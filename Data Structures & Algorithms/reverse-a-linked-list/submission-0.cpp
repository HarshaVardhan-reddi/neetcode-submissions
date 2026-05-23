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
    ListNode* reverseList(ListNode* head) {
        ListNode* traversalnode = head;
        ListNode* prevnode = nullptr;
        ListNode* nextnode;
        while(traversalnode != nullptr){
            nextnode = traversalnode->next;
            traversalnode->next = prevnode;
            prevnode = traversalnode;
            traversalnode = nextnode;
        }
        return prevnode;
    }
};
