/*
 * Q13_Pivoting_list.cpp
 *
 *  Created on: Nov 14, 2015
 *      Author: Anoshak
 */

#include "common_utils.h"

class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode *less_first=NULL,*less_last=NULL,*more_first=NULL,*more_last=NULL;
        ListNode *xptr = NULL;

        while(head)
        {
            if(head->val < x)
            {
                if(!less_first)
                {
                    less_first = less_last = head;
                }
                else
                {
                    less_last->next = head;
                    less_last=head;
                }
            }
            else
            {
                if(!more_first)
                {
                    more_first = more_last = head;
                }
                else
                {
                    more_last->next = head;
                    more_last= head;
                }
            }
            head = head->next;
        }

        if(more_last)
            more_last->next = NULL;

        if(less_first)
        {
            less_last->next = more_first;
            return less_first;
        }
        else return more_first;

    }
};


