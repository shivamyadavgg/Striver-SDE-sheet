// https://www.interviewbit.com/problems/sort-binary-linked-list/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::solve(ListNode* A) {
    ListNode *temp = A;
    int zeroes = 0;
    while (temp != NULL) {
        zeroes += (temp->val == 0);
        temp = temp->next;
    }
    temp = A;
    while (temp != NULL) {
        if (zeroes) {
            temp->val = 0;
            zeroes -= 1;
        } else {
            temp->val = 1;
        }
        temp = temp->next;
    }
    return A;
}
