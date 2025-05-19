Definition for singly-linked list.
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next
class Solution:
    def reverseList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        prev_elem = None
        curr_elem = head
        while curr_elem:
            next_elem = curr_elem.next
            curr_elem.next = prev_elem
            prev_elem = curr_elem
            curr_elem = next_elem
        return prev_elem
