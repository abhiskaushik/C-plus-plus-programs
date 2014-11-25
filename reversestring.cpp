/*
Reverse a string..
*/
#include<iostream>
#include<string>
using namespace std;

void Reverse(string str,int i){
   
    if(str[i]!='\0'){
         Reverse(str,i+1);
         cout<<(str[i]);

    }


}


int main(){
   
    //char str[]="hello";
     string str="hello abhishek";
     Reverse(str,0);

	return 0;
}