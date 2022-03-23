/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2){
       struct ListNode* list3=(struct ListNode* )malloc(sizeof(struct ListNode));//创建l3是为了方便进行比较后存入；
              list3->next=NULL;
       struct ListNode* list4=list3;//用来保存首地址
       while(list1||list2)
       {
           if(list1==NULL&&list2)
           {
            list3->next=list2;
            list2=list2->next;
           }
           else if(list2==NULL&&list1)
           {
            list3->next=list1;
            list1=list1->next;
           }
           else{
                 if(list1->val<list2->val)
           {
            list3->next=list1;
            list1=list1->next;
           }
       else{
            list3->next=list2;
            list2=list2->next;
       }   
       } 
            list3=list3->next;     
    }
     
       return list4->next;
}
