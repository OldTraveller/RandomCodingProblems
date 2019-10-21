#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const double PI = 3.141592654;
unordered_map<int, int> pos; 
bool visited[200005]; 
set<int> forest, dupforest; 
int temp_sum = 0; 
int min_swap = 0; 
bool possi = 1; 

int dfs2(int node, set<int> &pq1, set<int> &pq2, vector<int> *graph) {
    if (visited[node]) return 0; 
    else {
        visited[node] = 1; 
        forest.erase(node); 
        pq1.insert(node); 
        pq2.insert(pos[node]); 
        int sum = node;
        for (int a : graph[node]) {
            sum += dfs2(a, pq1, pq2, graph); 
        }
        return sum; 
    }
}

void rebase() {
    memset(visited, 0, sizeof visited); 
    while (!forest.empty()) forest.erase(forest.begin()); 
    temp_sum = 0; 
}

int main() {
    ios :: sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t; 
    cin >> t;
    while (t--) {
        int n, d; 
        cin >> n >> d;
        for (int i = 1; i <= n; i++) {
            int val; 
            cin >> val; 
            forest.insert(val); 
            pos[val] = i; 
        }
        vector<int> graph[n + 1]; 
        for (int i = 1; i <= n; i++) {
            if (pos[i + d]) {
                graph[i].push_back(pos[i + d]); 
                graph[pos[i + d]].push_back(i); 
            }
            if (pos[i - d]) {
                graph[i].push_back(pos[i - d]); 
                graph[pos[i - d]].push_back(i); 
            }
        }
        while (!forest.empty() and possi) {
            auto node = forest.begin(); 
            set<int> check_pos; 
            set<int> check_node; 
            temp_sum += (dfs2(*node, check_node, check_node, graph)); 
            for (auto it : check_node) cout << it << " "; 
            cout << endl; 
            for (auto it : check_pos) cout << it << " "; 
            cout << endl; 
            if (check_node != check_pos) {
                possi = 0; 
                break;
            }
        }
        if (!possi) cout << -1 << endl; 
        else cout << temp_sum << endl; 
        rebase(); 
    }   
}