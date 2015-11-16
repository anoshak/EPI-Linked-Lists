/*
 * Q14_Add_lists.cpp
 *
 *  Created on: Nov 15, 2015
 *      Author: Anoshak
 */

#include "common_utils.h"

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* result_beg = NULL, *result_end = NULL;
        int carry = 0;
        while(l1 || l2 || carry)
        {
            int sum = 0;
            if(l1)
            {
                sum += l1->val;
                l1 = l1->next;
            }
            if(l2)
            {
                sum += l2->val;
                l2 = l2->next;
            }
            sum += carry;
            carry = sum/10;
            sum = sum% 10;
            ListNode* newNode = new ListNode(sum);
            if(result_beg == NULL)
                result_beg = result_end = newNode;
            else
            {
                result_end ->next = newNode;
                result_end = newNode;
            }
        }
        return result_beg;
    }
};


