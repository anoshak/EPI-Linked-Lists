/*
 * Q3_Reverse_sublist.cpp
 *
 *  Created on: Nov 7, 2015
 *      Author: Anoshak
 */

#include "common_utils.h"

class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int m, int n) {
        if(!head)
            return head;
        if(m==n)
            return head;
        ListNode* p = head,*prev = NULL;
        for(int i=1;i<m;i++)
        {
            prev = p;
            p=p->next;
        }
        ListNode* prev_q = NULL,*ahead,*q = p;
        for(int i=m;i<=n;i++)
        {
            ahead = q->next;
            q->next = prev_q;
            prev_q = q;
            q = ahead;
        }
        if(prev!= NULL)
        {
            prev->next = prev_q;
            p->next = q;
            return head;
        }
        else
        {
            p->next = q;
            return prev_q;
        }

    }
};


