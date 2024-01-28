#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define ff first
#define ss second
#define pb push_back;
#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

bool cmp(pair<int,int> a,pair<int,int> b)
{
    if(a.first != b.first)
    {
        return a.first > b.first;
    }
    return a.second < b.second;
}
void solve()
{
    int n;
    cin >> n;
    vector<pair<int,int> > ara(n);
    vector<pair<int,int> > arb(n);
    vector<pair<int,int> > arc(n);
    int p=1,q=1,r=1;
    int maxa=INT_MIN, maxb=INT_MIN, maxc=INT_MIN;
    for(int i=0;i<n;i++)
    {
        cin >> ara[i].first;
        ara[i].second=p;
        p++;

    }
    for(int i=0;i<n;i++)
    {
        cin >> arb[i].first;
        arb[i].second=q;
        q++;

    }
    for(int i=0;i<n;i++)
    {
        cin >> arc[i].first;
        arc[i].second=r;
        r++;

    }

    sort(ara.begin(),ara.end(),cmp);
    sort(arb.begin(),arb.end(),cmp);
    sort(arc.begin(),arc.end(),cmp);
    int ans=INT_MIN;
    //vector<int> ansarr;
    // for(auto e: ara) cout << e.first << "--> " << e.second << " ";
    // cout << endl;
    // for(auto e: arb) cout << e.first << " -->" << e.second << " ";
    // cout << endl;
    // for(auto e: arc) cout << e.first << "--> " << e.second << " ";
    // cout << "\n\n";
    //if(ara[0].second != arb[0].second && ara[0].second != arc[0].second) ans = ara[0].first + arb[0].first + arc[0].first;
    for(int i=0;i<3;i++)
    {
        int sum=0;
        sum+=ara[i].first;
        int bfra=ara[i].second;
        for(int j=0;j<3;j++)
        {
            if(arb[j].second != bfra)
            {
                sum+=arb[j].first;
                int bfrb=arb[j].second;
                for(int k=0; k<3; k++)
                {
                    if(arc[k].second != bfra && arc[k].second != bfrb)
                    {
                        sum+=arc[k].first;
                        ans=max(sum,ans);
                        //ansarr.push_back(ans);
                        sum=sum-arc[k].first;
                    }
                }
                sum=sum-arb[j].first;
            }
        }

    }
    cout << ans << "\n";
}
int main()
{
	fastio();
    int t;
    cin >> t;
    while(t--)
    {
        solve(); 
    }
    return 0;
}