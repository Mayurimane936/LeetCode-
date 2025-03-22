class Solution {
public:
    void dfs(int node, vector<int>&visited, vector<vector<int>>& isConnected) {
        visited[node] = 1;
        for(auto it: isConnected[node]) {
            if(!visited[it]) {
                dfs(it, visited, isConnected);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int ans = 0;
        int n = isConnected.size();
        vector<vector<int>> adjList(n);

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (isConnected[i][j] == 1 && i != j) {
                    adjList[i].push_back(j);
                    adjList[j].push_back(i);
                }
            }
        }

        vector<int> visited(n, 0);
        for(int i=0; i<n; i++) {
            if(!visited[i]) {
                ans++;
                dfs(i, visited, adjList);
            }
        }
        return ans;
    }
};