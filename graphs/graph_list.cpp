  #include<bits/stdc++.h>
   using namespace std;

  struct edge{
      int vertex;
      int weight;
  };

   int main(int argc, char const *argv[])
   {    

   	     struct edge E;
   	   int n;
   	   cin>>n;
   	   vector< list<int> > adjList(n);
        
         
   	   adjList[0].push_back();
   	   adjList[0].push_back(1);

   	   adjList[1].push_back(2);
   	   adjList[1].push_back(0);

   	   adjList[2].push_back(0);
   	   adjList[2].push_back(1);
   	   adjList[2].push_back(3);

   	   adjList[3].push_back(2);

   	   //print the graph..

   	   int c=0;
   	     vector<list<int> >::iterator i;

   	   for ( vector<list<int> >::iterator i =adjList.begin(); i!=adjList.end(); ++i)
   	   {
   	   	/* code */  
   	   	    cout<<"vertices connected to node "<<c<<"are";
   	   	      list<int> li=*i;
   	   	   for (list<int >::iterator itr=li.begin(); itr!=li.end() ; ++itr)
   	   	   {
   	   	   	/* code */
   	   	   	  cout<< *itr <<" ";

   	   	   }
   	   	   cout<<endl;
   	   	   c++;
   	   }



   	return 0;
   }