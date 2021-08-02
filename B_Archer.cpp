/*  MATHS CONCEPT of Probability:
        let probabobility of A winning, p= a/b;
        let probabability of B winning, q= c/d;

        Then,
        Probability of A Losing = 1-p
        Probability of B losing = 1-q

        Now, A only wins if:
        A wins
        OR

        A loses AND B loses AND A wins
        OR

        A loses AND B loses AND A loses AND B loses AND A wins 
        and so on

        Thus, 
        Probability of A winning = p + (1-p)(1-q)p + (1-p)(1-q)(1-p)(1-q)p + ....

        Solving the equation p + (1-p)(1-q)p + (1-p)(1-q)(1-p)(1-q)p + ....
        let 1-p=X and 1-q= Y
        Probability = (1-X) + X(1-X)Y + X2(1-x)Y2 + ....
                    = (1-X)[ 1 + XY + X2Y2 + x3Y3 + ......]

                    sum of the infinite GP:  1 + XY + X2Y2 + x3Y3 + ......
                            { formula: a/ 1-r   where a is the first term and r is the common ratio}
                            {here, a= 1 and r=XY}


                            sum of gp  =  1/(1- XY)
            thus, probabilty  = (1-X)(1) / (1-XY)
                              = p/(1-(1-p)(1-q)) ===> ANS
    */

#include <bits/stdc++.h>
using namespace std;
int main()
{
ios:
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    double a, b, c, d;
    cin >> a >> b >> c >> d;

    double p = a / b;
    double q = c / d;
    double X = 1 - p;

    double Y = 1 - q;
    double den = 1 - (X * Y);

    double ans = p / den;
    cout << ans;

    return 0;
}
