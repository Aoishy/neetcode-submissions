/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    void reorderList(ListNode* head) {
        
        if(!head)
        {
            return;
        }
        vector<ListNode*>nodes;
        ListNode* i=head;
        while(i)
        {
            nodes.push_back(i);
            i=i->next;
        }
        int start=0;
        int end=nodes.size()-1;
        while(start<end)
        {
            nodes[start]->next=nodes[end];
            start++;
            if(start>=end)
            {
                break;
            }
            nodes[end]->next=nodes[start];
            end--;

        }
        nodes[start]->next=nullptr;


    }
};
