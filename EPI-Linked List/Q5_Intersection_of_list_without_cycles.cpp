/*
 * Q5_Intersection_of_list_without_cycles.cpp
 *
 *  Created on: Nov 7, 2015
 *      Author: Anoshak
 */

#include "common_utils.h"

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* a = headA,*b = headB;
        int a_count = 0, b_count=0;
        while(a)
        {
            a_count++;
            a=a->next;
        }
        while(b)
        {
            b_count++;
            b = b->next;
        }
        a= headA;
        b= headB;
        if(a_count<b_count)
        {
           for(int i=0;i<b_count-a_count;i++)
                b= b->next;
        }
        else
        {
           for(int i=0;i<a_count-b_count;i++)
                a= a->next;
        }
        while(a && b)
        {
            if(a == b)
                return a;
            a=a->next;
            b=b->next;
        }
        return NULL;

    }
};


