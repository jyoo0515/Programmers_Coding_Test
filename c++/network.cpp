// https://programmers.co.kr/learn/courses/30/lessons/43162?language=cpp

#include <string>
#include <vector>

using namespace std;

bool visited[200];

void dfs(vector<vector<int>> computers, int cur)
{
    visited[cur] = true;

    for (int j = 0; j < computers[cur].size(); j++)
    {
        if (computers[cur][j] == 1 && !visited[j])
        {
            dfs(computers, j);
        }
    }
}

int solution(int n, vector<vector<int>> computers)
{
    int answer = 0;
    for (int i = 0; i < n; i++)
    {
        if (!visited[i])
        {
            dfs(computers, i);
            answer++;
        }
    }

    return answer;
}

// void DFS(int from, int n, vector<int> &visited, vector<vector<int>> &computers) {

//     for (int i = 0; i < n; i++) {
//         if (from != i && computers[from][i] == 1 && visited[i] == 0) {
//             visited[i] = 1;
//             DFS(i, n, visited, computers);
//         }
//     }
// }

// int solution(int n, vector<vector<int>> computers) {

//     int network = 0;
//     vector<int> visited(n, 0);

//     for (int i = 0; i <n; i++) {
//         if (visited[i] == 1) {
//             continue;
//         }

//         // visit node and start DFS
//         network++;
//         visited[i] = 1;

//         DFS(i, n, visited, computers);
//     }

//     return network;
// }