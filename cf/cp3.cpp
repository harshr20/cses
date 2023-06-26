#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ll> vll;
typedef vector<vll> vvll;
const int MOD = 1e9 + 7;

#define fio                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define itr(c, it) for (auto it = c.begin(); it != c.end(); it++)
#define lop(i, n) for (int i = 0; i < (n); i++)
#define inp(x)           \
    for (auto &inps : x) \
    cin >> inps
#define raise(n, m) int(pow(n, m))
#define out(x)           \
    for (auto outps : x) \
    cout << outps << " "

void dfs_non_iter(vvi v, int i)
{
    stack<int> s;
    s.push(i);
    int n = v.size();
    int vis[n]={0};
    vis[0] = 1;
    while (!s.empty())
    {
        int node = s.top();
        cout << node << " ";
        s.pop();
        for (auto x : v[node])
        {   
            //cout<<x<< node;
            if (vis[x] == 0)
            {
                vis[x] = 1;
                s.push(x);
            }
        }
    }
}
void work()
{
    // code from here
    vvi v(5);
    // cout<<"okay1";
    v[0] = {1, 2, 3};
    v[1] = {2, 3};
    v[2] = {0, 4};
    v[3] = {0};
    v[4] = {1, 2, 3, 0};
    // cout<<"okay";
    dfs_non_iter(v, 0);
}

int main()
{
    fio;
    work();
    return 0;
}