/*
OOP way for stack..

*/
#include<iostream>
using namespace std;
#define max_stack_size 100

class Stack {

private:
	int stack[max_stack_size];
	 int top;

public:
   
    //class constructor..
    Stack(){
    	top=-1;
    }	 

     //check if stack is full ?
     int isFull(){
     	if(top>max_stack_size)
     		return 1;
     	else
     		return 0;
     }

     // push into stack..
    void push(int x){
    	if(isFull()){
    		cout<<"stack full"<<endl;
    		return;
    	}
    	stack[++top]=x;
    }
    
     int isEmpty(){
     	if(top<0)
     		return 1;
     	else
     		return 0;
     }

    void pop(){
    	if(isEmpty()){
    		cout<<"stack empty"<<endl;
    		return;
    	}
    	top--;
    }

    int gettop(){
    	return stack[top];
    }

    void printStack(){
       
       for (int i = 0; i <=top; ++i)
       {
       	  cout<<stack[i]<<" ";
       }

    }


};

int main(){


	Stack s;
	for (int i = 0; i < 5; ++i)
	{
		s.push(i);

	}
	s.printStack();

	return 0;
} 

