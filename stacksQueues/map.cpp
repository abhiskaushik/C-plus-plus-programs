  #include<bits/stdc++.h>
    using namespace std;


    int main(int argc, char const *argv[])
    {
    	 map<char,int> m;

            for (int i = 0; i < 10; ++i)
            {
            	
            	m.insert(pair<char,int>	('A'+i,65+i));
            }

            char ch;

            cin>>ch;

            map<char,int>::iterator p;

            p=m.find(ch);

            if(p!=m.end()){
            	cout<<(p->second)<<endl;
            }

            else
            	cout<<"not found"<<endl;


    	return 0;
    }