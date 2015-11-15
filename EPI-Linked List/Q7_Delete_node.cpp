/*
 * Q7_Delete_node.cpp
 *
 *  Created on: Nov 8, 2015
 *      Author: Anoshak
 */


#include "common_utils.h"


class Solution {
public:
    void deleteNode(ListNode* node) {
        node->val = node->next->val;
        ListNode* temp = node->next;
        node->next = node->next->next;
        free(temp);
    }
};



