#include <iostream>
//Definition for singly-linked list.
/*struct ListNode 
{
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
};*/
 
class Solution 
{
 public:
    
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
    {
      unsigned int carry = 0, sum = 0, temp = 0;
	ListNode* l3 = nullptr;
	ListNode* head = nullptr;
	  
	while (l1 != nullptr && l2 != nullptr)
	{
		sum = l1->val + l2->val + carry;
		carry = sum/10;
		sum %= 10;
		
		if(l3 == nullptr)
		{
			l3 = new ListNode(sum);
			head = l3;
		}
		else
        	{
        	  l3->next = new ListNode (sum);
		  l3 = l3->next;
  	      }
        
		l1 = l1->next;
		l2 = l2->next;
	}

	ListNode* listPtr = nullptr;
	
	if(l1 != nullptr)
		listPtr = l1;
	else if(l2 != nullptr)
		listPtr = l2;

	while(listPtr != nullptr)
	{
		sum = carry + listPtr->val;
		carry = sum/10;
		sum %= 10;
		
		if(l3 == nullptr)
		{
		     l3 = new ListNode(sum);
		     head = l3;
		}
		else
        	{
	          l3->next = new ListNode(sum);
		    l3 = l3->next;
            }
		listPtr = listPtr->next;
	}

      if(carry > 0)
	{
        l3->next = new ListNode(carry);
	}
    
     return head;
        
  }
};




















