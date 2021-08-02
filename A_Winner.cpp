#include <bits/stdc++.h>
using namespace std;

void solution(int &n)
{
    string a;int b;
    cin>>a>>b;
    vector<pair<string,int>> scoreBoard;
    scoreBoard.push_back(make_pair(a,b));
    string name1=scoreBoard[0].first;
    string name2;
    long long sum1=b;
    long long sum2=0;
    for(int i=1;i<n;i++)
    {
        string temp;
        int tempo;
        cin>>temp>>tempo;
        scoreBoard.push_back(make_pair(temp,tempo));//maintaining the record
        if(temp!=scoreBoard[0].first)  // if the name is diff 
        {
            name2=temp; //save the second name;
            sum2+=tempo;//add the score to the 2nd participant
        }
        else
        {
            sum1+=tempo; //add score to the first participant
        }
    }
   // cout<<"sum1= "<<sum1<<" and sum2= "<<sum2<<endl;
    if(sum1>sum2)   
    {
        cout<<name1;
        return;
    }
    else if(sum2>sum1)
    {
        cout<<name2;
        return;
    }
    else // if both score the same, then check which one comes first
    {
        long long s1=0,s2=0;
        for(int i=0;i<n;i++)
        {
            //cout<<"Name: "<<scoreBoard[i].first<< " Score: "<<scoreBoard[i].second<<endl;
            if(scoreBoard[i].first==name1) // if it is first's score, add to s1 and check if equal tp sum or not
            {
                s1+=scoreBoard[i].second;
                if(s1>=sum1)
                {
                    cout<<name1;
                    break;
                }
            }
            else
            {
                s2+=scoreBoard[i].second;
                if(s2>=sum1)
                {
                    cout<<name2;
                    break;
                }
            }
        }
    }
    return;
}

int main()
{
    int n;
    cin>>n;
    solution(n);
    return 0;
}