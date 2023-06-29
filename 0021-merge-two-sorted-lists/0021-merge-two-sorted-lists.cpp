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
        ListNode* temp1=list1;
        ListNode* temp2=list2;
        
        ListNode* dummyhead=new ListNode();
        ListNode* ptr = dummyhead;
        
        
        while(temp1!=NULL && temp2!=NULL)
        {
            if(temp1->val < temp2->val)
            {
                ptr->next=temp1;
                temp1=temp1->next;
                ptr=ptr->next;
            }
            else
            {
                ptr->next=temp2;
                temp2=temp2->next;
                ptr=ptr->next;
            }
        }
        
        while(temp1!=NULL)
        {
            ptr->next=temp1;
            temp1=temp1->next;
            ptr=ptr->next;
        }
        while(temp2!=NULL)
        {
            ptr->next=temp2;
            temp2=temp2->next;
            ptr=ptr->next;
        }
        return dummyhead->next;
    }
};