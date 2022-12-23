// merge two sorted list

#include<bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
    if(list1 == NULL)
        return list2;
    if(list2 == NULL)
        return list1;

    if(list1->val <= list2->val) {
        list1->next = mergeTwoLists(list1->next,list2);
        return list1;
    } else {
        list2->next = mergeTwoLists(list1,list2->next);
        return list2;
    }
}

//driver code

int main() {

    ListNode *list1 = new ListNode(1);
    list1->next = new ListNode(3);
    list1->next->next = new ListNode(5);
    list1->next->next->next = new ListNode(7);

    ListNode *list2 = new ListNode(2);
    list2->next = new ListNode(4);
    list2->next->next = new ListNode(6);
    list2->next->next->next = new ListNode(8);

    ListNode *merged_list = mergeTwoLists(list1, list2);

    // Print the merged list
    ListNode *curr = merged_list;
    while (curr) {
        std::cout << curr->val << " ";
        curr = curr->next;
    }
    std::cout << std::endl;

    return 0;
}