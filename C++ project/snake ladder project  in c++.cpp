/***********************************
*******AUTHOR SHASHI KANT **********         
****GMAIL Shshiksnt140895@gmail.com*
************************************                                  
***********************************/
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
class graph
{
	map<int,list<int>>adj;
	public :
	       void addedge(int a, int b)
	       {
	           adj[a].push_back(b);
	          
	       }
	       void bfs(int src, int target)
	       {
	       	    queue<int>q;
	       	    q.push(src);
	       	    map<int, int >dis;
	       	    for(auto x : adj)
	       	    {
	       	    	 int node = x.first;
	       	         dis[node] =  INT_MAX;
	       	    }
	       	      dis[src] = 0;

	       	    while(!q.empty())
	       	    {
	       	    	int x = q.front();
	       	    	q.pop();
	       	    	for(auto y : adj[x])
	       	    	{
	       	    		  if(dis[y] == INT_MAX)
	       	    		  {
	       	    		  	dis[y] =  dis[x] +1;
	       	    		  	q.push(y);
	       	    		  }
	       	    		
	       	    	}
	       	    }
	       	    cout<< dis[target] <<endl;
	       }

};
int main(){

      graph g;
      int board[50]={0};
      board[2] = 13;
      board[5] = 2;
      board[9] = 18;
      board[18] = 11;
      board[17] = -13;
      board[20] = -14;
      board[24] = -8;
      board[25] = 10;
      board[32] = -2;
      board[34] = -22;
      for(int i=0; i<=36; i++)
      {
      	for(int dies =1; dies<=6; dies++)
      	{

      		int j = i+dies+board[i];
      		if(j<=36)
      		g.addedge(i, j); 
      	}
      }
      g.addedge(36, 36);
      g.bfs(0, 36);
       return 0;
}