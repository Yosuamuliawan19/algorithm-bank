#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

typedef long long ll;
using namespace std;
using namespace __gnu_pbds;

template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag,tree_order_statistics_node_update>;

#define all(x) x.begin(), x.end()
#define f(i,a,b) for(int i = (a); i <= (b); i++)
#define fd(i,a,b) for(int i = (a); i >= (b); i--)
#define mp make_pair
#define faster_io() ios_base::sync_with_stdio(false)
#define pb push_back
#define pii pair<int,int>
#define SZ(x) ((int)x.size())
#define vii vector<pair<int,int>>

const int INF = 1000000005;
const ll INFLL = 100000000000000002ll;
const ll MOD = 10000000;

// ----------------------------------------------------------------------------------------------------------

int D[100005], L[100005][18], N, Q, Size[100005];
vector<int> E[100005];

int get(int n, int dist)
{
    f(i,0,17) if(dist&(1<<i)) n = L[n][i];
    return n;
}

int lca(int a, int b)
{
    if(D[a] < D[b]) return lca(b,a);
    int diff = D[a] - D[b];
    f(i,0,17) if(diff&(1<<i)) a = L[a][i];
    if(a == b) return a;
    fd(i,17,0) if(L[a][i] != L[b][i]) a = L[a][i], b = L[b][i];
    return L[a][0];
}

void dfs(int n, int p, int d)
{
    D[n] = d;
    L[n][0] = p;
    Size[n] = 1;
    for(int v : E[n]) if(v != p)
    {
        dfs(v,n,d+1);
        Size[n] += Size[v];
    }
}

int main()
{
    cin >> N;
    f(i,1,N-1)
    {
        int a,b;
        scanf("%d %d", &a, &b);
        E[a].pb(b), E[b].pb(a);
    }
    dfs(1,0,1);
    f(j,1,17) f(i,1,N) L[i][j] = L[L[i][j-1]][j-1];
    cin >> Q;
    while(Q--)
    {
        int a,b;
        scanf("%d %d", &a, &b);
        int l = lca(a,b);
        int d1 = D[a] - D[l];
        int d2 = D[b] - D[l];
        if(d1 == d2)
        {
            int node1 = get(a,d1-1);
            int node2 = get(b,d2-1);
            printf("%d\n", N - Size[node1] - Size[node2]);
        }
        else if(d1%2 == d2%2)
        {
            int dist = (d1+d2) / 2;
            if(d1 > d2)
            {
                int node = get(a,dist);
                int child = get(a,dist-1);
                printf("%d\n", Size[node] - Size[child]);
            }
            else
            {
                int node = get(b,dist);
                int child = get(b,dist-1);
                printf("%d\n", Size[node] - Size[child]);
            }
        }
        else printf("0\n");
    }
}
