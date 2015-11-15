/*
 * Q8_Remove_kth_from_last.cpp
 *
 *  Created on: Nov 8, 2015
 *      Author: Anoshak
 */

#include "common_utils.h"

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(!head)
            return NULL;
        ListNode* q = head;
        for(int i=0;i<n;i++)
            q = q ->next;
        ListNode *p=head,*prev=NULL;

        while(q)
        {
            prev = p;
            p=p->next;
            q = q->next;
        }

        if(prev)
        {
            prev->next = p->next;
            free(p);
            return head;
        }
        else
        {
            head = p->next;
            free(p);
            return head;

        }
    }
};


