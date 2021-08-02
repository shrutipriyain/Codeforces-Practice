//codeforces-dragons-230A
#include <iostream>
using namespace std;

void swap(int *xp, int *yp)  
{  
    int temp = *xp;  
    *xp = *yp;  
    *yp = temp;  
}  
  
// A function to implement bubble sort  
void bubbleSort(int arr[],int y[], int n)  
{  
    int i, j;  
    for (i = 0; i < n-1; i++)      
      
    // Last i elements are already in place  
    for (j = 0; j < n-i-1; j++)  
        if (arr[j] > arr[j+1])  {
            swap(&arr[j], &arr[j+1]); 
            swap(&y[j],&y[j+1]);
		}
}  

int main()
{
	unsigned int s,n;
	cin>>s>>n;
	 int x[n];
	 int y[n];
	
	for(int i=0;i<n;i++)
	{
		cin>>x[i]>>y[i];
	}
	
	bubbleSort(x,y,n);	
	int flag=1;
	for(int i=0;i<n;i++)
	{
		if(s<=x[i])
		{
			cout<<"NO";
			flag=0;
			break;
		}
		else if(s>x[i])
		{
			s=s+y[i];
		}
	}
	if(flag==1)
		cout<<"YES";
return 0;
}

