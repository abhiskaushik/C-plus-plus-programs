#include<bits/stdc++.h>
using namespace std;

struct node
{
	int val;
	struct node *next;
};

 struct node *allocateNode(){
    struct node *new_node=(struct node*)malloc(sizeof(struct node));
 	return new_node;
 }

void pushIntoList(struct node **head_ref,int x){
  	 
  	 //struct node *new_node=(struct node*)malloc(sizeof(struct node));
       struct node *new_node=allocateNode();
        new_node->val=x;
        new_node->next=(*head_ref);
        (*head_ref)=new_node;
      
 }
void appendIntoList(struct node **head_ref,int x){
	 //struct node *new_node=(struct node*)malloc(sizeof(struct node));
	  struct node *new_node=allocateNode();
	  new_node->val=x;
	  new_node->next=NULL;

	  struct node *temp=(*head_ref);
	   
	   if((*head_ref)==NULL){
	   	  (*head_ref)=new_node;
	   	  return;
	   }

	   while(temp->next!=NULL){
	   	  temp=temp->next;
        }

	   temp->next=new_node;
	   //return;

}

void insertAfter(struct node *node_ref,int x){
	if((node_ref)==NULL)
		return;

   struct node *new_node=allocateNode();	
    new_node->val=x;
     new_node->next=(node_ref)->next;
     (node_ref)->next=new_node;
}


  void printLL(struct node *head){
  	  struct node *temp=head;

  	 while(temp!=NULL){
  	 	printf("%d\n",temp->val);
  	 	temp=temp->next;
  	 }
     return;
  }




int main(){

   
   struct node *head=NULL;
    int values[]={20,30,40,10,40,60};
    int size=sizeof(values)/sizeof(values[0]);
   for (int i = 0; i <size; ++i){
    appendIntoList(&head,values[i]);
    //pushIntoList(&head,values[i]);
   }
    printLL(head);
    insertAfter((head->next),100);
    printLL(head);
	return 0;
}
