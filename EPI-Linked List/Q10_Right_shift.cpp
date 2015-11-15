/*
 * Q10_Right_shift.cpp
 *
 *  Created on: Nov 14, 2015
 *      Author: Anoshak
 */

#include "common_utils.h"

class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head)
            return head;
        ListNode* p  = head;
        int count = 0;
        while(p)
        {
            p=p->next;
            count++;
        }
        k = k% count;
        if(!k)
            return head;
        p=head;
        for(int i=0;i<count-k-1;i++)
        {
            p=p->next;
        }
        ListNode* q = p->next;
        while(q->next)
            q=q->next;
        q->next = head;
        q = p->next;
        p->next = NULL;
        return q;


    }
};


