//revser a stack using recursion...

#include<bits/stdc++.h>
using namespace std;

struct node {

int val;
struct node *next;

};

struct node *head=NULL;
struct node *new_head=NULL;

  struct node *allocateNode(){
    struct node *new_node=(struct node*)malloc(sizeof(struct node));
     return new_node;
  }

  struct node *append(int x){
      struct node *new_node=allocateNode();
        new_node->val=x;
        new_node->next=NULL;

        if(head==NULL){
           head=new_node;
           return head; 
         }
         struct node *temp=head;
         while(temp->next!=NULL)
         	 temp=temp->next;

        temp->next=new_node;

        return temp;

  }

 struct node *push(int x){
 	 struct node *new_node=allocateNode();
 	   new_node->val=x;

 	    if(head==NULL){
 	    	new_node->next=NULL;
 	    	head=new_node;
 	    	 return head;
 	    }

 	   new_node->next=head;
 	   head=new_node;
 	   return head;

 }

 int pop(){
       
     struct node *temp=head;
      
 	  head=head->next;
      
      return temp->val; 
 
 }

void printLL(){
	 struct node *temp=head;
	while(temp!=NULL){
		cout<<temp->val<<" ";
		temp=temp->next;
	}
}

void reverseStack(){
     
     if(head==NULL)
     	return;

        int temp=pop();
         reverseStack();
          new_head=append(temp);

}



int main(int argc, char const *argv[])
{   
	 int ar[]={1,2,4,6,7,4,5};
       int size=sizeof(ar)/sizeof(ar[0]);
       //struct node *head=NULL;
	 
	 for (int i = 0; i <size; ++i)
	 {
	    head=push(ar[i]);
	 }

	  printLL();
      pop(); cout<<endl;
      printLL(); cout<<endl;
	 
	 reverseStack();
	  printLL();

	return 0;
}