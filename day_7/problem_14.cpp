// check cycle exists in list
#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

bool hasCycle(ListNode* head) {
    if(head == NULL) return false;

    // |1|->|2|->|3|->|2|

    ListNode* fast = head;
    ListNode* slow = head;

    while(fast != NULL && fast->next != NULL) {
        fast = fast->next->next;
        slow = slow->next;

        if(fast == slow)    
            return true;
    }

    return false;
}
