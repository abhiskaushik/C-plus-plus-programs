/*
Stack class using linked list..
*/
#include<iostream>
#include<malloc.h>
using namespace std;

class Stack{

  private:
  	struct node{
       int val;
       struct node *next;
  	};
  	struct node *top;

  public:
       //CONSTRUCTOR OF class
      Stack(){
      	top=NULL;
      }


  	void push(int x){
       struct node *new_node=(struct node*)malloc(sizeof(struct node));
         new_node->val=x;
         new_node->next=top;
         top=new_node;

  	}

  	void pop(){
  		if(top==NULL)
  			return;

  		top=top->next;
  	}
    
    int getTop(){
    	return top->val;
    }
  
  void printStack(){
    struct node *temp=top;
    while(temp!=NULL){
    	cout<<temp->val<<" ";
    	temp=temp->next;
    }
    cout<<endl;
  }


};

int main(){

    Stack s;
    for (int i = 0; i <5; ++i)
    {
    	/* code */
    	s.push(i);
    }
    s.printStack();
    s.pop();
    s.printStack();


	return 0;
}

