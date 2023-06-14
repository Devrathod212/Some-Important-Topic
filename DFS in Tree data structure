#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+10;
vector<int> g[N];
int depth[N],height[N];

void dfs(int vertex, int par){

    for(int child : g[vertex]){

        if(child == par) continue;

        depth[child] = depth[vertex] + 1;
        
        dfs(child, vertex);

        height[vertex]  = max(height[vertex], 1 + height[child]);

    }    

}
