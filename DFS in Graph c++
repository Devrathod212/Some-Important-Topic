const int n = 1e5 + 10;
bool vis[n];
vector<int> g[n];
vector<vector<int>> comp;
vector<int> current;

void dfs(int vertex)
{
    /*take action on vertex after entering the vertex*/
    vis[vertex] = true;
    // current.push_back(vertex);
    for (int child : g[vertex])
    {
        /* Take action on child before entering the child node */

        if (vis[child])
        {
            continue;
        }

        
        dfs(child);

        
        /*Take action on child
        after exiting child node*/
    }

    /*Take action on vertex before exiting the vertex*/
}
