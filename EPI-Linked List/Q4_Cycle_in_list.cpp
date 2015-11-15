/*
 * Q4_Cycle_in_list.cpp
 *
 *  Created on: Nov 7, 2015
 *      Author: Anoshak
 */

#include "common_utils.h"

class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode *sr = head, *fr = head;
        while(fr && fr->next)
        {
            sr = sr->next;
            fr = fr->next->next;
            if(sr==fr)
                break;
        }
        if(fr==NULL || fr->next ==NULL)
            return NULL;
        sr = head;
        while(sr!=fr)
        {
            sr = sr->next;
            fr = fr->next;
        }

        return sr;
    }
};


