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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        
        ListNode* sorted = new ListNode(-1);
        ListNode* cur = sorted;
        int i=0;
        for(i=0; i < lists.size(); i++)
        {
            
            while(lists[i] != NULL)
            {
                cur -> next = new ListNode(lists[i] -> val);
                lists[i] = lists[i] -> next;
                cur = cur -> next;
            }
        }
        if(i==0)
            return sorted -> next;
        
        ListNode* pre = sorted -> next;
        ListNode* current = sorted -> next;
        int inter;
        while(pre != NULL)
        {
            current = pre -> next;
            while(current != NULL)
            {
                if(pre -> val > current -> val)
                {
                    inter = pre -> val;
                    pre -> val = current -> val;
                    current -> val = inter;
                }
                current = current -> next;
            }
            
            pre = pre -> next;
        }
        
        return sorted -> next;
    }
};