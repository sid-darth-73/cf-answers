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

void solver()
{
    ll c=0;
    ll a,b;
    cin>>a>>b;
    if(a == b){
        cout<<0<<endl;
    }
    else if(a > b){
        while(a > b)
        {
            if(a % 8 == 0 && a/8 >= b)
            {
                a /=8;
                c++;
            }
            else if(a % 4 == 0 && a/4 >= b)
            {
                a /=4;
                c++;
            }
            else if(a % 2 == 0 && a/2 >= b)
            {
                a /=2;
                c++;
            }
            else{
                break;
            }
        }
        }
        else
        {
            while(a < b)
            {
                if(a * 8 <= b)
                {
                    a *=8;
                    c++;
                }
                else if(a * 4 <= b)
                {
                    a *=4;
                    c++;
                }
                else if(a * 2 <= b)
                {
                    a *=2;
                    c++;
                }
                else break;
            }
        }
        if(a == b){
            cout<<c<<"\n";
        }
        else{
            cout<<-1<<"\n";
        }

}
int main()
{
    fastio();
    ll t,a,b;
    cin>>t;
    while(t--)
    {
        ll c=0;
        cin>>a>>b;
        if(a == b){
            cout<<0<<endl;
            continue;
        }
        if(a > b){
            while(a > b){
                if(a % 8 == 0 && a/8 >= b){
                    a /=8;
                    c++;
                }
                else if(a % 4 == 0 && a/4 >= b){
                    a /=4;
                    c++;
                }
                else if(a % 2 == 0 && a/2 >= b){
                    a /=2;
                    c++;
                }
                else{
                    break;
                }
            }
        }
        else{
            while(a < b){
                if(a * 8 <= b){
                    a *=8;
                    c++;
                }
                else if(a * 4 <= b){
                    a *=4;
                    c++;
                }
                else if(a * 2 <= b){
                    a *=2;
                    c++;
                }
                else{
                    break;
                }
            }
        }
        if(a == b){
            cout<<c<<endl;
        }
        else{
            cout<<-1<<endl;
        }

    }
    return 0;
}

