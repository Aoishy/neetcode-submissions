class Solution {
public:
    int minCostConnectPoints(vector<vector<int>>& points) {
        int n = points.size();
        vector<int> dist(n, INT_MAX);
        vector<bool> visit(n, false);

        dist[0] = 0;   // start from node 0
        int res = 0;

        for (int edges = 0; edges < n; edges++) {
            int node = -1;

            // pick minimum dist unvisited node
            for (int i = 0; i < n; i++) {
                if (!visit[i] && (node == -1 || dist[i] < dist[node])) {
                    node = i;
                }
            }

            visit[node] = true;
            res += dist[node];

            // update distances using this node
            for (int i = 0; i < n; i++) {
                if (!visit[i]) {
                    int d = abs(points[i][0] - points[node][0]) +
                            abs(points[i][1] - points[node][1]);
                    dist[i] = min(dist[i], d);
                }
            }
        }

        return res;
    }
};
