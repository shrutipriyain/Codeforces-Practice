//codeforces-Pashmak and Garden-459A
#include <iostream>
using namespace std;
int main()
{
	int x1,x2,x3,x4,y1,y2,y3,y4;
	cin>>x1>>y1>>x2>>y2;
	int side;
	double slope=((double)(y2-y1)/(double)(x2-x1));
	if(x1==x2)
	{
		side=y2-y1;
		x3=x1+side;
		x4=x3;
		y3=y2;
		y4=y1;
		cout<<x3<<" "<<y3<<" "<<x4<<" "<<y4;
	}
	else if(y1==y2)
	{
		side=x2-x1;
		x3=x1;
		x4=x2;
		y3=y1+side;
		y4=y3;
		cout<<x3<<" "<<y3<<" "<<x4<<" "<<y4;
	}
	else if(slope==1 || slope==-1)
	{
		x3=x2;
		y3=y1;
		x4=x1;
		y4=y2;
		cout<<x3<<" "<<y3<<" "<<x4<<" "<<y4;
	}
	else
		cout<<-1;
return 0;
}

