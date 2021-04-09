/***********************************
*******AUTHOR SHASHI KANT **********         
****GMAIL Shshiksnt140895@gmail.com*
************************************                                  
***********************************/
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
/*class graph
{
	map<int,list<int>>adj;
	public :
	       void addedge(int a, int b)
	       {
	           adj[a].push_back(b);
	           adj[b].push_back(a);
	       }

}*/
bool is_valid(ll board[][10], int i, int j, ll  n)
{
	int x = i;
	int y = j;
	while(x>=0 && y>=0)
	{
		if(board[x][y] == 1)
			return false;
		x--;
		y--;
	}
	  x = i;
	  y = j;
	while(x<n && y<n)
	{
		if(board[x][y] == 1)
			return false;
		x++;
		y++;
	}
	for(int k = i; k>=0; k--)
	{
		if(board[k][j] == 1)
			return false;
	}
	return true;

}
bool solve_queen(ll board[][10], int i, ll n)
{
	if(i == n)
	{
		for(int i =0; i<n; i++)
		{
			for(int j =0; j<n; j++)
			{
				if(board[i][j] == 1)
					cout<< "Q" << " ";
				else
					cout<< "-" <<" ";
			}
			cout<< endl;
		}
		return true;
	}
	for(int j =0; j<n; j++)
	{
		if(is_valid(board, i, j, n))
		{
			board[i][j] = 1;
			bool next = solve_queen(board, i+1, n);
			if(next)
			return true;
			board[i][j] = 0;
		}
	}
	return false;
}
int main(){
       int t; jdbf
       cin>>t;
       while(t--)
       {
         ll board[10][10] = {0};
         ll n;
         cin>>n;
         solve_queen(board, 0, n);

        }	
	return 0;
}