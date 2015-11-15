/*
 * Q11_Even_odd_merge.cpp
 *
 *  Created on: Nov 14, 2015
 *      Author: Anoshak
 */


#include "common_utils.h"

ListNode* even_odd(ListNode* root)
{
	if(root && root->next)
	{
		ListNode* even =root;
		ListNode* odd = root->next;
		ListNode* p = root->next->next;
		int i = 0;
		while(p)
		{
			if(i%2 !=0)
			{
				even->next = p;
				even = p;
			}
			else
			{
				odd->next = p;
				odd = p;
			}
			i++;
			p=p->next;
		}
		even->next = root->next;
		odd->next = NULL;
		return root;
	}
	else return root;
}


