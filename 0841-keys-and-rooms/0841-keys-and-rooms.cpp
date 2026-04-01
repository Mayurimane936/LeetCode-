class Solution {
    void markVis(vector<int>& vis, vector<int>& room, vector<vector<int>>& rooms) {
        for (int rm : room) {       
            if (!vis[rm]) {         
                vis[rm] = 1;       
                markVis(vis, rooms[rm], rooms);
            }
        }
    }
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n = rooms.size();
        vector<int> vis(n, 0);
        vis[0] = 1;         
        markVis(vis, rooms[0], rooms);

        for (int i = 0; i < n; i++) {
            if (vis[i]==0) {
                return false;
            };
        }
        return true;
    }
};