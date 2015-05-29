#include<bits/stdc++.h>
#define ll long long
using namespace std;

class DP{


private:


public:
 DP(){ };

void lcs(){
	ll ar[]={-1,2,3,-4,5,7};
	ll size=sizeof(ar)/sizeof(ar[0]);
	ll max_end_here=0,max_so_far=0;

	for (ll i = 0; i <size; ++i)
	{
		/* code */
		max_end_here+=ar[i];
		
		if(max_end_here<0)
			max_end_here=0;

		else if(max_end_here>max_so_far)
			max_so_far=max_end_here;

	}
	printf("%lli\n",max_so_far);
}






};

int main(int argc, char const *argv[])
{
	/* code */
	DP dp;
	dp.lcs();

	return 0;
}


