class Solution {
public:
  ListNode* removeNthFromEnd(ListNode* head, int n) {
    ListNode dummy(0, head);
    ListNode *slow = &dummy, *fast = head;

    for (int i = 0; i < n; i++)
      fast = fast->next;

    while (fast != nullptr) {
      slow = slow->next;
      fast = fast->next;
    }

    ListNode* toDelete = slow->next;
    slow->next = toDelete->next;
    delete toDelete;
    return dummy.next;
  }
};