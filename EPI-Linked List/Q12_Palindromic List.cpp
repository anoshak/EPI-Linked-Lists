/*
 * Q12_Palindromic List.cpp
 *
 *  Created on: Nov 14, 2015
 *      Author: Anoshak
 */

#include "common_utils.h"

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if(!head || !head->next)
            return true;
        ListNode* sr=head, *fr = head;
        while(fr && fr->next)
        {
            sr = sr->next;
            fr = fr->next->next;
        }
        ListNode* mid = sr;
        if(fr)
            sr=sr->next;

        ListNode* prev = NULL,*p=head,*ahead;
        while(p!=mid)
        {
            ahead = p->next;
            p->next = prev;
            prev = p;
            p = ahead;
        }
        while(prev && sr)
        {
            if(prev->val != sr->val)
                return false;
            prev = prev->next;
            sr = sr->next;
        }
        return true;


    }
};


