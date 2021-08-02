//codeforces-supercentral Point 165A
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n; 
	cin>>n;
	vector< pair<int,int> > coord;
	for(int i=0;i<n;i++)
	{
		int a,b;
		cin>>a>>b;	
		coord.push_back( make_pair(a,b) ); 
	}
	int sum=0;
	for(int i=0;i<n;i++)
	{
		bool top,bottom,right,left;
		top=bottom=right=left=0;
	 	for(int j=0;j<n;j++)
	 	{
	 		int x=coord[i].first;
	 		int y=coord[i].second;
	 		//right neighbour
	 		if(coord[j].first>x && coord[j].second==y)	right=1;
	 		//left neighbour
	 		if(coord[j].first<x && coord[j].second==y)	left=1;
	 		//bottom  neighbour
	 		if(coord[j].first==x && coord[j].second<y)	bottom=1;
	 		//top neighbour
	 		if(coord[j].first==x && coord[j].second>y)	top=1;
		 }
		 if(top && bottom && right && left)
		 sum++;	 
	}
	cout<<sum;
return 0;
}

