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
    ListNode* reverse(ListNode* head)
    {
        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* nx = NULL;
        while (curr!=nullptr)
        {
            nx = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nx;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        ListNode* f = head;
        ListNode* s = head;
        while(f && f->next)
        {
            f = f->next->next;
            s = s->next;
        }
        s = reverse(s);
        while(s && s->val == head->val)
        {
            head = head->next;
            s = s->next;
        }
        return s==nullptr;
    }
};