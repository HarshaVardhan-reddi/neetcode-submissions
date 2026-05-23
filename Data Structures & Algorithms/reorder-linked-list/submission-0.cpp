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
    ListNode *slow = head, *fast = head;
    while(fast != nullptr && fast->next != nullptr){
      slow = slow->next;
      fast = fast->next->next;
    }

    if(head == nullptr || head->next == nullptr) return;
    
    ListNode *prev = nullptr, *current = slow->next;
    slow->next = nullptr;
    while(current != nullptr){
      ListNode *tmp = current->next;
      current->next = prev;
      prev = current;
      current = tmp;
    }
    ListNode *secondhead = prev, *list1next, *list2next;
    while(head != nullptr && secondhead != nullptr){
      list1next = head->next;
      list2next = secondhead->next;
      head->next = secondhead;
      secondhead->next = list1next;
      head = list1next;
      secondhead = list2next;
    }
  }
};
