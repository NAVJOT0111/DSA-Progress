class Solution {
public:
    vector<int> remainingMethods(int n, int k, vector<vector<int>>& invocations) {
        vector<vector<int>> adj(n);
        vector<int> indegree(n,0);
        vector<bool> suspecious(n, false);

        for(auto &edge : invocations){
            int u = edge[0];
            int v = edge[1];
            adj[u].push_back(v);
            indegree[v]++;
        }

        // BFS
        queue <int> que;
        que.push(k);
        suspecious[k] = true;

        while(!que.empty()){
            int curr= que.front();
            que.pop();

            for(int &ngbr : adj[curr]){
                indegree[ngbr]--;
                if(!suspecious[ngbr]){
                    que.push(ngbr);
                    suspecious[ngbr] = true;
                }
            }
        }

        vector<int> result;
        bool cannotRemove = false;
        for(int i =0; i < n; i++){
            if(suspecious[i] && indegree[i] > 0){
                cannotRemove = true;
                break;
            }
            if(!suspecious[i]){
                result.push_back(i);
            }
        }

        if(cannotRemove){
            vector<int> vec(n);
            for(int i =0; i < n; i++){
                vec[i] = i;
            }
            return vec;
        }

        return result;
    }
};