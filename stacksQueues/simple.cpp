  #include<bits/stdc++.h>
   using namespace std;
//operations in stack STL
   int main(int argc, char const *argv[])
   {
   	 list<int> l;
     list<int>::iterator i;
   
   //int ar[]={3,4,1,2,7,8,4,9};
    
     for (int i = 0; i < 10; ++i)
     {
     	/* code */
     	l.push_back(i);
     }

   l.reverse();
   l.sort();
   l.remove(3);

   l.push_front(21);
   l.push_back(34);
   l.sort();
    for (i = l.begin(); i!=l.end() ; ++i)
    {
    	/* code */
    	cout<<(*i)<<" ";
       
    }



   	return 0;
   }