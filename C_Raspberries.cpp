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
void solve(){   
    ll n,k;
    cin>>n>>k;
    
    map<ll,ll> mp;
    ll x,p=1;
    
    for(int i=0;i<n;i++){
        cin>>x;
        p*=x;
        p%=k;
        
        mp[x%k]++; 
    }
    
    if(p%k == 0) {
        cout<<"0\n";
        return;
    }
    
    if(k==2){
        cout<<1<<"\n";
        return;
    }
    if(k==3){
        if(mp[2])
            cout<<1<<"\n";
        else
            cout<<"2\n";
    }
    if(k==4){
        if(mp[3]) cout<<"1\n";
        else if(mp[2] && mp[1]) cout<<"1\n";
        else if(mp[2]) cout<<"2\n";
        else if(mp[1]>1) cout<<"2\n";
        else if(mp[1]) cout<<"3\n";
    }
    if(k==5){
        if(mp[4]) cout<<"1\n";
        else if(mp[3]) cout<<"2\n";
        else if(mp[2]) cout<<"3\n";
        else cout<<"4\n";
    }
     
}

void solver()
{
    int n ,k;
    cin >> n >> k;
    vector<int> a(n);
    for(auto &i : a) cin >> i;
    int sum=0, prod=1;
    int e_cnt=0, o_cnt=0;
    int f5=-1, f4=-1, f3=-1, f2=-1;
    int has_5=0, has_4=0, has_3=0, has_2=0;
    for(int i=0;i<n;i++)
    {
        prod = prod*a[i];
        if(a[i]%5==0) has_5=1;
        if(a[i]%2==0)
        {
            has_2==1;
            e_cnt++;
        } else o_cnt++;
        if(a[i]%3==0) has_3=1;
        //if(a[i]%4==0) has_4=1;
        f5 = max(f5,a[i]%5);
        //f4 = max(f4,a[i]%4);
        f3 = max(f3,a[i]%3);
        f2 = max(f2,a[i]%2);
    }
    // if(k==2) 
    // {
    //     if(prod%2==0) cout << "0\n";
    //     else cout << "1\n";
    // }
    // else if(k==3)
    // {
    //    if(prod%3==0) cout << "0\n";
    //    else cout << 3 - prod%3 << "\n";
    // }
    // else if(k==4)
    // {
    //     if(e_cnt>=2) cout << "0\n";
    //     else if(e_cnt==1) cout << "1\n";
    //     else if(e_cnt==0 && n>1) cout << "2\n";
    //     else if(e_cnt==0 && n==1) cout << (sum/4 + 1)*4 - sum << "\n";
    // }
    // else if(k==5)
    // {
        
    //     if(h==1) cout << "0\n";
    //     else cout << 5-f << "\n";
    // }
    if(k==2)
    {
        if(has_2==1) cout << "0\n";
        else cout << 2-f2 << "\n";

    }
    else if(k==3)
    {
        if(has_3==1) cout << "0\n";
        else cout << 3-f3 << "\n";

    }
    else if(k==4)
    {
        int m=k, ans=2;
        for(int i=0;i<n;i++)
        {
            if(a[i]%4==0)
            {
                m=0;
                break;
            }
            else
            {
                if(m > k-a[i]%k) m =k - a[i]%k;
            }
        
        }
        for(int i=0;i<n;i++)
        {
            if(a[i]%2==0) ans=max(ans-1,0);
        }
        cout << min(ans,m) << '\n';
    }
    else if(k==5)
    {
        if(has_5==1) cout << "0\n";
        else cout << 5-f5 << "\n";

    }
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