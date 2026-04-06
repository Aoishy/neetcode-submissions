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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        vector<ListNode*>nodes;
        ListNode* i=head;
        while(i)
        {
            nodes.push_back(i);
            i=i->next;
        }
        
        int pos=nodes.size()-n;
        if(pos==0)
        {
            return head->next;
        }
       
         nodes[pos-1]->next=nodes[pos]->next;
        
        return head;
    }
};
