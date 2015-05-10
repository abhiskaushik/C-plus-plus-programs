#include<bits/stdc++.h>
#define ll long long 
using namespace std;

class Stacks{

private:
	

public:
   Stacks(){}

  void evaluatePostfix(){
  	string str="23*54*+9-";
  	 stack<int> stck; int ans,i=0;
  	  while(str[i]!='\0'){
  	  	 if(str[i]=='+' || str[i]=='-' || str[i]=='*'){
            int top1=stck.top();
             stck.pop();
             int top2=stck.top();
              if(str[i]=='+')ans=top1+top2;
              if(str[i]=='-')ans=top1-top2;
              if(str[i]=='*')ans=top1*top2;
  	  	 }
  	  	 else
  	  	 	stck.push(str[i]);
  	    i++;

  	  }
  	  
  	  printf("%d\n",ans);

  }


};

int main(int argc, char const *argv[])
{
	Stacks s;
	s.evaluatePostfix();
	return 0;
}