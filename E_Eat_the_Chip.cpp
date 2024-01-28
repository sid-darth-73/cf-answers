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

void solve() {
    int h, w, xA, yA, xB, yB;
    cin >> h >> w >> xA >> yA >> xB >> yB;
    bool win;
    string possible;

    if ((xA - xB) % 2 == 0) 
    {
        possible = "Bob";
        if (xA >= xB) win = false;
        else 
        {
            if (yA == yB) win = true;
            else 
            {
                int n_turns;
                if (yA < yB) 
                {
                    n_turns = yB - 1;
                } 
                else 
                {
                    n_turns = w - yB;
                }
                win = (xB - 2 * n_turns >= xA);
            }
        }
    } 
    else 
    {
        possible = "Alice";
        xA ++;
        if (yB - yA == 0) yA+=0;
        else 
        {
            if (yB - yA > 0) yA+=1;
            else yA+=-1;
        }

        if (xA > xB) 
        {
            win = false;
        } 
        else 
        {
            if (yA == yB) {
                win = true;
            } 
            else 
            {
                int n_turns;
                if (yA < yB) n_turns = w - yA;
                else n_turns = yA - 1;
                win = (xB - 2 * n_turns >= xA);
            }
        }
    }

    if (win) 
    {
        cout << possible << "\n";
    } 
    else 
    {
        cout << "Draw" << "\n";
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