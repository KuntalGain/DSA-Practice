// remove elements in list

#include<bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* removeElements(ListNode* head, int val) {


    // for empty list
    if(head == nullptr) return head;

    // for head.val = val case
    while(head != nullptr && head->val == val) head = head->next;

    //for value at intermediate pos
    ListNode* curr = head;
    while(curr != nullptr && curr->next != nullptr) {
        if(curr->next->val == val)
            curr->next = curr->next->next;
        else
            curr = curr->next;
    }

    return head;

}

//driver code

int main()
{
    ListNode *ll = new ListNode(1);
    ll->next = new ListNode(2);
    ll->next->next = new ListNode(6);
    ll->next->next->next = new ListNode(3);
    ll->next->next->next->next = new ListNode(4);
    ll->next->next->next->next->next = new ListNode(5);
    ll->next->next->next->next->next->next = new ListNode(6);
    
    
    removeElements(ll,7);
    
    ListNode* curr = ll;

    while (curr) {
        cout << curr->val << " ";
        curr = curr->next;
    }

    
}