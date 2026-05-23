class Solution {
public:
    bool hasCycle(ListNode* head) {
        // TODO: implement solution
        ListNode *onestep, *twostep;
        onestep = head;
        twostep = head;
        while(twostep != nullptr && twostep->next != nullptr){
            onestep = onestep->next;
            twostep = twostep->next->next;
            if(onestep == twostep) return true;
        }
        return false;
    }
};