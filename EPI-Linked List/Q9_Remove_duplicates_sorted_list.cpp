/*
 * Q9_Remove_duplicates_sorted_list.cpp
 *
 *  Created on: Nov 8, 2015
 *      Author: Anoshak
 */


#include "common_utils.h"

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* origHead = head;
        if(head==NULL)
            return head;
        while(head->next)
        {
            if(head->val == head->next->val)
            {
                ListNode* temp = head->next;
                head->next = head->next->next;
                free(temp);
            }
            else head = head->next;
        }
        return origHead;
    }
};



