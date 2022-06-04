// https://programmers.co.kr/learn/courses/30/lessons/49189

#include <queue>
#include <vector>
#include <algorithm>
#include <list>
#include <climits>
#include <functional>

using namespace std;

struct comp
{
    bool operator()(const pair<int, int> p1, const pair<int, int> p2)
    {
        return p1.first < p2.first;
    }
};

vector<int>
dijkstra(int n, int start, vector<list<int>> adjList)
{
    vector<int> dist(n + 1, INT_MAX);
    priority_queue<pair<int, int>, vector<pair<int, int>>, comp> pq;

    dist[start] = 0;
    pq.push(make_pair(0, start));

    while (!pq.empty())
    {
        int curDist = pq.top().first;
        int curNode = pq.top().second;
        pq.pop();

        for (auto itr = adjList[curNode].begin(); itr != adjList[curNode].end(); itr++)
        {

            int nextNode = *itr;
            int nextDist = curDist + 1;

            if (nextDist < dist[nextNode])
            {
                dist[nextNode] = nextDist;
                pq.push(make_pair(nextDist, nextNode));
            }
        }
    }
    return dist;
}

int solution(int n, vector<vector<int>> edge)
{
    int answer = 0;
    vector<list<int>> adjList(n + 1);
    for (vector<int> e : edge)
    {
        adjList[e[0]].push_back(e[1]);
        adjList[e[1]].push_back(e[0]);
    }
    vector<int> dist = dijkstra(n, 1, adjList);
    sort(dist.begin(), dist.end(), greater<int>());

    int max = dist[1];
    for (int i = 1; i < dist.size(); i++)
    {
        if (dist[i] == max)
            answer++;
        else
            break;
    }

    return answer;
}

// #include <string>
// #include <vector>
// #include<queue>
// #include<iostream>
// using namespace std;

// int d[20001][20001];
// bool visit[20001];
// int dist[20001];
// int solution(int n, vector<vector<int>> edge) {
//     int max = 0;
//     int answer = 0;
//     for(int i=0;i<edge.size();i++)
//     {
//         d[edge[i][0]][edge[i][1]]=1;
//         d[edge[i][1]][edge[i][0]]=1;
//     }

//     queue<int> q;
//     visit[1]=true;
//     q.push(1);
//     dist[1]=0;
//     while(!q.empty())
//     {
//         int first = q.front();
//         q.pop();
//         for(int i=2;i<=n;i++)
//         {
//             if(d[first][i]==1 && !visit[i])
//             {
//                 q.push(i);
//                 visit[i]=true;
//                 dist[i]=dist[first]+1;
//                 if(max<dist[i])
//                 {
//                     max=dist[i];
//                 }
//             }
//         }
//     }

//     for(int i=1;i<=n;i++)
//     {
//         if(max==dist[i])
//         {
//             answer++;
//         }
//     }
//     return answer;
// }