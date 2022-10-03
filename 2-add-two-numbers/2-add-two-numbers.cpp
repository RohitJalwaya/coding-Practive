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
    private:
    ListNode* reverse(ListNode* head){
        ListNode* prev=NULL;
        ListNode* curr=head;
        ListNode* aage=curr->next;
        while(curr!=NULL){
            curr->next=prev;
            prev=curr;
            curr=aage;
            aage=aage->next;
        }
        head=prev;
        return head;
    }
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head=NULL;
        ListNode* result;
        int carry=0;
        
        head=new ListNode((l1->val+l2->val)%10);
        carry=(l1->val+l2->val)/10;
        l1=l1->next;
        l2=l2->next;
        result=head;
        
        
//         Until one became null
        while(l1 && l2){
            head->next=new ListNode((l1->val+l2->val+carry)%10);
            carry=(l1->val+l2->val+carry)/10;
            l1=l1->next;
            l2=l2->next;
            head=head->next;
        }
        ListNode* pnt=NULL;
        if(l1==NULL){
            pnt=l2;
        }
        else{
            pnt=l1;
        }
        while(pnt!=NULL){
            head->next=new ListNode((pnt->val+carry)%10);
            carry=(pnt->val+carry)/10;
            pnt=pnt->next;
            head=head->next;
        }
        if(carry!=0){
            head->next=new ListNode(carry);
        }
        return result;
        
        /*!st approach didn't work
        ListNode* addition=NULL;
        ListNode* headAdd=addition;
        ListNode* tailAdd=addition;
        int carry=0;
        int sum;
        ListNode* head1=l1;
        ListNode* head2=l2;
        while(head1->next!=NULL && head2->next!=NULL){
            int value1=head1->val;
            int value2=head2->val;
            int sum=value1+value2+carry;
            if(sum>9){
                sum=sum/10;
                carry=sum%10;
            }
            if(headAdd==NULL){
                ListNode* temp=new ListNode(sum);
                headAdd=temp;
                tailAdd=temp;
            }
            else{
            ListNode* temp=new ListNode(sum);
                tailAdd->next=temp;
                tailAdd=temp;
            }
            
        }
        ListNode* result=reverse(headAdd);
        return result;*/
        
    }
};