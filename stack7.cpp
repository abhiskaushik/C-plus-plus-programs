/*
Reverse a string using stack..

*/
#include<iostream>
#include<malloc.h>
#include<string>
using namespace std;

class Stack{

private:
    struct node{
      int val;
      struct node *next;
    };
    struct node *top;

public:
   //constructor..
   Stack(){
      top=NULL;
   }	

   void push(int x){
      struct node *new_node=(struct node*)malloc(sizeof(struct node));
       new_node->val=x;
       new_node->next=top;
       top=new_node;
   }
   int pop(){
   	struct node *temp=top;
   	top=top->next;
   	return temp->val;
   }


};


int main(){
     
    Stack stack;
	string s;
	cin>>s;
	for (int i = 0; i <s.length(); ++i)
	{
		stack.push(s[i]);
	}

	for (int i = 0; i <s.length(); ++i)
	{
		/* code */
		s[i]=stack.pop();
	}
  cout<<s<<endl;
}