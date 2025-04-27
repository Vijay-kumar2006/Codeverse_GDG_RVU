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
    
        bool isrecursion(ListNode* &end, ListNode* &start){
            if(end==nullptr) return true;
            bool right = isrecursion(end->next, start);
    
            bool ans = right and start  ->val==end->val;
    
            start = start->next;
    
            return ans;
    
        }
        bool isPalindrome(ListNode* head) {
            ListNode* start = head;
            return isrecursion(head, start);   
        }
    };