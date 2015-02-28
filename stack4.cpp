/*
stack using linked list
*/
#include<iostream>
#include<malloc.h>
using namespace std;

struct node{
	int val;
	struct node *next;
};
struct node *top=NULL;

void push(int x){
   
   struct node *new_node=(struct node*)malloc(sizeof(struct node));
    new_node->val=x;
    new_node->next=top;
    top=new_node;
}

void pop(){
   if(top==NULL)
   	 return;
     
     struct node *temp;
    // temp=top;

   	 top=top->next; 
    //free(top);
}

void printStack(){
	struct node *temp=top;
	while(temp!=NULL){
		cout<<temp->val<<endl;
		temp=temp->next;
	}
}

int getTop(){
	return top->val;
}

int main()
{
	for (int i = 0; i < 5; ++i)
	{
		push(i);
	}
	printStack();
	pop();
	printStack();
	cout<<getTop()<<endl;

}
