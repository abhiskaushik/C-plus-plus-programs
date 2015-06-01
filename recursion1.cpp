#include<bits/stdc++.h>
using namespace std;

struct node {

int val;
struct node *next;

};

struct node *allocateNode(){
    struct node *new_node=(struct node*)malloc(sizeof(struct node));
     return new_node;
  }


void append(struct node **head,int x){
  
   struct node *new_node=allocateNode();
       new_node->val=x;
       new_node->next=NULL;

       if((*head)==NULL){
       	 (*head)=new_node;
       	 return;
       }

       	struct node *temp=(*head);
       	
       	while(temp->next!=NULL)
       		temp=temp->next;

         temp->next=new_node;

  return;
}

void printLL(struct node *head){
   
   while(head!=NULL){
   	cout<<head->val<<" ";
   	  head=head->next;
   }

    return;
}


void printAlternate(struct node *head){
 
   if(head==NULL)
   	 return;

   	cout<<head->val<<" ";
      
      if(head->next!=NULL)
       printAlternate(head->next->next);
      
      cout<<head->val<<" ";
}


int main(int argc, char const *argv[])
{      int ar[]={1,2,4,6,7,4};
       int size=sizeof(ar)/sizeof(ar[0]);
       struct node *head=NULL;
	 
	 for (int i = 0; i <size; ++i)
	 {
	     append(&head,ar[i]);
	 }

	 printLL(head); cout<<endl;
	 printAlternate(head);
	return 0;
}