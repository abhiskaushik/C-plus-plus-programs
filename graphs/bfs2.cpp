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

void bfs(int s){
	bool visited[V]; //array to store false and true..

	for (int i = 0; i < V; ++i)
	{
		/* code */
		visited[i]=false;
	}

	list<int> queue;
	visited[s]=true;
	queue.push_back(s); //enque

	list<int>::iterator i;

	while(!queue.empty()){
		s=queue.front();
		cout<<s<<" ";
		queue.pop_front();

		for (i =adj[s].begin(); i!=adj[s].end(); ++i)
		{
			/* code */
			if(visited[*i]==false){
				visited[*i]=true;
				queue.push_back(*i);
			}

		}
	}



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
    
 cout<<"bfs is:"<<endl;
 g.bfs(2);




	return 0;
}


