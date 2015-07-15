  #include<bits/stdc++.h>
    using namespace std;

  class Graph{

   private:
   	int V;
   	list<int> *adj;

   public:
   	 Graph(int V){
   	 	this->V=V;
   	 	adj=new list<int>[V];
   	 }

   	 void addEdge(int v,int w){
   	 	adj[v].push_back(w);
   	 }

   	 void dfsUtil(int v,bool visited[]){
   	 	visited[v]=true;
   	 	cout<<v<<" ";

   	 	list<int>::iterator i;

   	 	  for (i =adj[v].begin(); i!=adj[v].end(); ++i)
   	 	  {
   	 	  	/* code */
   	 	  	  if(visited[*i]==false)
   	 	  	  	dfsUtil(*i,visited);
   	 	  }

   	 }

   	 void dfs(int s){
   	 	bool visited[V];

   	 	for (int i = 0; i <V; ++i)
   	 	{
   	 		/* code */
   	 		visited[i]=false;
   	 	}

   	 	dfsUtil(s,visited);

   	 }



  };


    int main(int argc, char const *argv[])
    { 
    	 Graph g(4);
    	 g.addEdge(0,1);
    	 g.addEdge(0,2);
    	 g.addEdge(1,2);
    	 g.addEdge(2,0);
    	 g.addEdge(2,3);
    	 g.addEdge(3,3);

    	 g.dfs(2);
    	

    	return 0;
    }