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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* head = new ListNode();
        ListNode* ans = head;
        while(list1!=NULL || list2!=NULL){
            if(list1!=NULL){
                if(list2!=NULL){
                    int mini = min(list1->val, list2->val);
                    ListNode* temp = new ListNode(mini);
                    ans->next = temp;
                    ans = ans->next;
                    if(list1->val == mini)
                        list1 = list1->next;
                    else
                        list2 = list2->next;
                }
                else{
                    ListNode* temp = new ListNode(list1->val);
                    ans->next = temp;
                    ans = ans->next;
                    list1 = list1->next;
                }
            }
            
            else if(list2!=NULL){
                    ListNode* temp = new ListNode(list2->val);
                    ans->next = temp;
                    ans = ans->next;
                    list2 = list2->next;
                
            }
        }
        return head->next;
    }
};