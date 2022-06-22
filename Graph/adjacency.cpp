#include <bits/stdc++.h>
using namespace std;

void addEdge(vector <int> adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}


int main(void)
{
    vector <int> a[6];
    addEdge(a, 0, 5);
    addEdge(a, 2, 4);
    addEdge(a, 3, 0);
    addEdge(a, 2, 3);
    addEdge(a, 5, 1);
    addEdge(a, 0, 1);
    addEdge(a, 5, 3);
    addEdge(a, 4, 1);
    int dp[6] = {0};
    for(int i = 0; i < 6; i++)
    {
        for (int j = 0; j < a[i].size(); j++)
        {
            if (j == 0) cout << i << " : ";
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}