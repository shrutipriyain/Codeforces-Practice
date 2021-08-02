#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> ar,int key)
{
	int p = 0;
    int r = ar.size() - 1;
    int q = (r + p) / 2;
    int counter = 0;

    while (p <= r)
    {
        counter++;
        if (ar[q] == key)
            return q;
        else
        {
            if (ar[q] < key) 
            {
                p = q + 1;
                q = (r + p) / 2;
            }
            else
            {
                r = q - 1;
                q = (r + p) / 2;    
            }
        }
    }
    return -1;
}

int LinearSearch(vector<int> ar,int key) //since binary search cannot work for column matrix
{
	for(int i=0;i<ar.size();i++)
	{
		if(ar[i]==key)
			return i;
	}
	return -1;
}
int main()
{
    int R,C;
    cin>>R>>C;
    char ar[R][C];
    vector<int> col;
    vector<int> row;
    for(int i=0;i<R;i++)
    {
        for(int j=0;j<C;j++)
            {
                cin>>ar[i][j];
                if(ar[i][j]=='S' || ar[i][j]=='s')
                {
                    if (LinearSearch(col,j)==-1)    col.push_back(j);
                    if (binarySearch(row,i)==-1)    row.push_back(i);
                }
            }
    }
    cout<<((R*C)-(col.size()*row.size()));



    return 0;
}
