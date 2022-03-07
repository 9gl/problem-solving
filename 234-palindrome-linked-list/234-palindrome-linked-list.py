# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def llreverse(self,head):
        p,c,n = None,head,None
        while c:
            n = c.next
            c.next = p
            p = c
            c = n
        return p
    def isPalindrome(self, head: Optional[ListNode]) -> bool:
        f,s = head, head
        while f and f.next:
            f = f.next.next
            s = s.next
        s = self.llreverse(s)
        while s and s.val == head.val:
            head = head.next
            s = s.next
        return s == None
            