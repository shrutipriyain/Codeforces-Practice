#include <bits/stdc++.h>
#define S 105
#define f(i,x,y) for(int i=x;i<y;i++)
int m,n,t,a[S][S],b[S][S];
 
int main() {
	scanf("%d%d",&m,&n);

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
            scanf("%d",&a[i][j]), b[i][j] = 1;      
    }
		
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
           {
               if (!a[i][j])
                {
                   for(int k=0;k<n;k++) b[i][k] = 0;
                   for(int k=0;k<m;k++) b[k][j] = 0;
                }
           }
    }
	for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
           {
            t = 0;
            for(int k=0;k<n;k++) t |= b[i][k];
            for(int k=0;k<m;k++) t |= b[k][j];
            if (t != a[i][j]) 
                {
                    puts("NO"); return 0;
                }
	        }
    }
	puts("YES");
	f(i,0,m) {
		f(j,0,n) printf("%d ",b[i][j]);
		puts("");
	}
}