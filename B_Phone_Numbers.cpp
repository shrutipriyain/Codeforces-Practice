#include <cstdio>
char P[][110] = {"If you want to call a taxi, you should call: ", "If you want to order a pizza, you should call: ", "If you want to go to a cafe with a wonderful girl, you should call: "};
int R[110][3], X[3], i, j, n, k;
int main()
{
    scanf("%d", &n);
    char M[110][24];
    for (i = 0; i < n; i++)
    {
        scanf("%d%s", &k, M[i]);
        for (j = 0; j < k; j++)
        {
            char a[10];
            scanf("%s", a);
            if (a[0] == a[1] && a[0] == a[3] && a[0] == a[4] && a[0] == a[6] && a[0] == a[7])
                R[i][0]++;
            else if (a[0] > a[1] && a[1] > a[3] && a[3] > a[4] && a[4] > a[6] && a[6] > a[7])
                R[i][1]++;
            else
                R[i][2]++;
        }
        for (j = 0; j < 3; j++)
            if (R[i][j] > X[j])
                X[j] = R[i][j];
    }
    for (i = 0; i < 3; i++)
    {
        printf(P[i]);
        bool C = 0;
        for (j = 0; j < n; j++)
            if (R[j][i] == X[i])
            {
                if (C)
                    printf(", ");
                C = 1;
                printf(M[j]);
            }
        puts(".");
    }
}