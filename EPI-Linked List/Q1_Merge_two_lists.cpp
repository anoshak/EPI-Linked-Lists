/*
 * Q1_Merge_two_lists.cpp
 *
 *  Created on: Nov 7, 2015
 *      Author: Anoshak
 */

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

#include "common_utils.h"

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* result_beg = NULL, *result_last = NULL;

        while(l1 && l2)
        {
            if(l1->val < l2->val)
            {
                if(result_beg == NULL)
                    result_beg = l1;
                else result_last->next = l1;
                result_last = l1;
                l1 = l1->next;
                result_last->next = NULL;
            }
            else
            {
                if(result_beg == NULL)
                    result_beg = l2;
                else result_last->next = l2;
                result_last = l2;
                l2 = l2->next;
                result_last->next = NULL;
            }
        }
        if(l1)
        {
            if(result_beg==NULL)
                result_beg = l1;
            else result_last->next = l1;
        }
        if(l2)
        {
            if(result_beg==NULL)
                result_beg = l2;
            else result_last->next = l2;
        }

        return result_beg;
    }
};


