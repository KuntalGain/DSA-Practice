// remove duplicates

#include<bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* deleteDuplicates(ListNode* head) {
    if(head == NULL || head->next == NULL)
        return head;
    
    head->next = deleteDuplicates(head->next);

    if(head->val == head->next->val)
        return head->next;
    else 
        return head;
}

//driver code

int main()
{
    ListNode *ll = new ListNode(1);
    ll->next = new ListNode(1);
    ll->next->next = new ListNode(2);
    
    
    deleteDuplicates(ll);

    while(ll != nullptr) {
        cout << ll->val << " ";
        ll = ll->next;
    }
    
}