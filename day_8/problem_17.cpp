// reverse linked list

#include<bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

 ListNode* reverseList(ListNode* head) {
    ListNode* nextptr , *prevptr = NULL;

    while(head) {
        nextptr = head->next;
        head->next = prevptr;
        prevptr = head;
        head = nextptr;
    }

    return prevptr;
 }

//driver code

int main()
{
    ListNode *ll = new ListNode(1);
    ll->next = new ListNode(2);
    ll->next->next = new ListNode(3);
    ll->next->next->next = new ListNode(4);
    ll->next->next->next->next = new ListNode(5);

    reverseList(ll);
    
    ListNode* curr = ll;

    while (curr) {
        cout << curr->val << " ";
        curr = curr->next;
    }

    
}