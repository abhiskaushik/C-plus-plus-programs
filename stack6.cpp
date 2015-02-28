/*
Reverse a string using stack class
*/
#include<iostream>
#include<malloc.h>
using namespace std;

//stack class to reverse a string..
class Stack{

private:
	struct node{
      
      int val;
      struct node *next;
    };
    struct node *top;
public:
	//class constructor..
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
     
     //reverse login is.. push & print while popping..
     /*void reverse(){
       
           for (int i = 0; i <5; ++i)
         { 
    	
    	 int z=s.pop();
    	  t.push(z);

        }  
     } */
        
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
  
   Stack s,t;
    for (int i = 0; i < 5; ++i)
    {
    	/* code */
    	s.push(i);
    }
    s.printStack();
    
    for (int i = 0; i <5; ++i)
    {
    	
    	int z=s.pop();
    	t.push(z);

    } 
    	//s.reverse();
    t.printStack();


}

