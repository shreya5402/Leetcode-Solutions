//Inplace is when you do not create external nodes.
//Time complexity:- O(m+n)
//here we maintain a head and a tail pointer on the merged linked list and choose the head of the merged list by comparing the first node of both the linked lists.For all subsequent nodes in both lists we choose the smaller current node and link it to the tail of the merged list while moving the current pointer of that list one step forward.
class Solution {
public:
	ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) 
  {
		if(l1 == NULL)
        {
			return l2;
		}
		if(l2 == NULL)
        {
			return l1;
		} 	
		//if value pointend by l1 pointer is less than equal to value pointed by l2 pointer
		//we wall call recursively l1 -> next and whole l2 list.
		if(l1 -> val <= l2 -> val)
        {
			l1 -> next = mergeTwoLists(l1 -> next, l2);
			return l1;
		}
		else
        {
			l2 -> next = mergeTwoLists(l1, l2 -> next);
			return l2;            
		}
	}
};	
