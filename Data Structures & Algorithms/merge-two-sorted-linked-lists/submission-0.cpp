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
    ListNode* head = nullptr;
    // ListNode* currentptr = head;
    ListNode *ptr1 = list1, *ptr2 = list2, *lastnode = head;
    while(ptr1 != nullptr && ptr2 != nullptr){
        ListNode* currentnode = new ListNode();
        if(ptr1->val == ptr2->val){
            currentnode->val = ptr1->val;
            currentnode->next = new ListNode(ptr2->val);
            if(head == nullptr) head = currentnode;
            if(lastnode != nullptr) lastnode->next = currentnode;
            currentnode = currentnode->next;
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
            lastnode = currentnode;
            continue;
        }else if(ptr1->val < ptr2->val){
            currentnode->val = ptr1->val;
            ptr1 = ptr1->next;
        }else{
            currentnode->val = ptr2->val;
            ptr2 = ptr2->next;
        }
        if(head == nullptr) head = currentnode;
        if(lastnode == nullptr) lastnode = currentnode;
        else{
            lastnode->next = currentnode;
            lastnode = currentnode;
        }
    }
    while(ptr1 != nullptr){
        ListNode* currentnode = new ListNode(ptr1->val);
        if(lastnode == nullptr) {head = currentnode; lastnode = currentnode;}
        else{
            lastnode->next = currentnode;
            lastnode = currentnode;
        }
        ptr1 = ptr1->next;
    }
    while(ptr2 != nullptr){
        ListNode* currentnode = new ListNode(ptr2->val);
        if(lastnode == nullptr) {head = currentnode; lastnode = currentnode;}
        else{
            lastnode->next = currentnode;
            lastnode = currentnode;
        }
        ptr2 = ptr2->next;
    }
    return head;
  }
};
