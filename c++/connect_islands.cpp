// https://programmers.co.kr/learn/courses/30/lessons/42861

#include <string>
#include <vector>
#include <queue>
#include <algorithm>
#include <functional>

using namespace std;

bool sortCost(const vector<int> &v1, const vector<int> &v2)
{
    return v1[2] < v2[2];
}

int prim(int n, vector<vector<int>> costs)
{
    int answer = 0;
    vector<bool> visited(n);
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({0, 0});

    while (!pq.empty())
    {
        int cur = pq.top().second;
        int weight = pq.top().first;
        pq.pop();

        if (visited[cur])
            continue;

        visited[cur] = true;
        answer += weight;

        for (vector<int> c : costs)
        {
            int next = -1;
            if (c[0] == cur)
            {
                next = c[1];
            }
            else if (c[1] == cur)
            {
                next = c[0];
            }

            if (next != -1 && !visited[next])
            {
                pq.push(make_pair(c[2], next));
            }
        }
    }
    return answer;
}

int solution(int n, vector<vector<int>> costs)
{
    int answer = 0;
    sort(costs.begin(), costs.end(), sortCost);
    answer = prim(n, costs);

    return answer;
}

// Kruskal's algorithm

// #include <string>
// #include <vector>
// #include <algorithm>
// using namespace std;
// int d[101];

// int getParent(int node){
//     if(node == d[node]){
//         return node;
//     }
//     else return d[node] = getParent(d[node]);
// }

// bool compare(vector<int> a, vector<int> b){
//     return a[2] < b[2];
// }

// int solution(int n, vector<vector<int>> costs) {

//     int answer = 0;
//     for(int i =0; i<n; i++){
//         d[i] = i;
//     }
//     sort(costs.begin(), costs.end(), compare);
//     for(int i=0; i<costs.size(); i++){
//         int start = getParent(costs[i][0]);
//         int end = getParent(costs[i][1]);
//         int cost = costs[i][2];

//         if(start != end){
//             d[end] = start;

//             answer += cost;
//         }
//     }

//     return answer;
// }