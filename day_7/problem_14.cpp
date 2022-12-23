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

// driver code

int main() {
    
    int pos;
    cout << "Enter Your Position : " << endl;
    cin >> pos;

    ListNode *ll = new ListNode(1);
    ll->next = new ListNode(2);
    ll->next->next = new ListNode(3);
    ll->next->next->next = new ListNode(4);

    int cnt = 0;

    ListNode *curr = ll;
    while (curr) {
        cnt++;
        curr = curr->next;
    }

    if(hasCycle(ll) && pos <= cnt)
        cout << "Exists" << endl;
    else {
        cout << "Not Exists" << endl;
    }

    return 0;
}