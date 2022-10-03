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
    bool isPalindrome(ListNode* head) {
        stack<int> s;
        ListNode* pnt=head;
        while(pnt!=NULL){
            s.push(pnt->val);
            pnt=pnt->next;
        }
        pnt=head;
        while(!s.empty()){
            if(s.top()==pnt->val){
                s.pop();
                pnt=pnt->next;
            }
            else{
                return false;
            }
        }
        return true;
        
    }
};