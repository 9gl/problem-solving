# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def getDecimalValue(self, head: ListNode) -> int:
        curr = head 
        x = 0
        while curr:
            x = (x << 1) | curr.val 
            curr = curr.next
        return x