//Codeforces-game with sticks-451A
/*logic:
the number of steps possible in the game is the lesser number of the n and m
since always akshat starts first, if the number of steps in odd, he wins, else malvika will win*/
#include <iostream>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int test=(n<=m)?n:m;//store the lesser value in the test value
	if(test%2==0)
		cout<<"Malvika";
		else
		cout<<"Akshat";
	return 0;
}
