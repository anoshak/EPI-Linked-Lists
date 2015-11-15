/*
 * Q2_reverse_list_rec.cpp
 *
 *  Created on: Nov 7, 2015
 *      Author: Anoshak
 */

#include "common_utils.h"

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head==NULL || head->next == NULL)
            return head;
        ListNode* rem = reverseList(head->next);
        head->next->next = head;
        head->next = NULL;
        return rem;
    }
};


