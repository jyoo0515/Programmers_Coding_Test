// https://programmers.co.kr/learn/courses/30/lessons/43164

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void dfs(vector<vector<string>> tickets, vector<bool> &visited, string cur, vector<string> &answer)
{
    answer.push_back(cur);

    for (int i = 0; i < tickets.size(); i++)
    {
        if (tickets[i][0] == cur && !visited[i])
        {
            visited[i] = true;
            dfs(tickets, visited, tickets[i][1], answer);

            if (answer.size() != tickets.size() + 1)
            {
                answer.pop_back();
                visited[i] = false;
            }
        }
    }
}

vector<string> solution(vector<vector<string>> tickets)
{
    vector<string> answer;
    sort(tickets.begin(), tickets.end());
    vector<bool> visited(tickets.size());
    dfs(tickets, visited, "ICN", answer);

    return answer;
}

// Another solution

// #include <string>
// #include <vector>

// using namespace std;
// int visited[1000000];
// string ans_string = "a";

// void dfs(vector<vector<string>> &tickets, string cur, string path, int depth) {
//     if (depth == tickets.size()) {
//         string p = path;
//         if (path < ans_string) {
//             ans_string = path;
//         }
//         return;
//     }

//     for (int i = 0; i < tickets.size(); i++) {
//         if (cur == tickets[i][0] && !visited[i]) {
//             visited[i] = 1;
//             dfs(tickets, tickets[i][1], path + tickets[i][1], depth+1);
//             visited[i] = 0;
//         }
//     }
// }

// vector<string> solution(vector<vector<string>> tickets) {
//     vector<string> answer;
//     dfs(tickets, "ICN", "ICN", 0);
//     for (int i = 0; i < ans_string.size(); i+=3) {
//         answer.push_back(ans_string.substr(i, 3));
//     }
//     return answer;
// }

// BFS but not correct

// vector<string> solution(vector<vector<string>> tickets)
// {
//     vector<string> answer;
//     priority_queue<string, vector<string>, greater<string>> pq;

//     for (int i = 0; i < tickets.size();)
//     {
//         if (tickets[i][0] == "ICN")
//         {
//             pq.push(tickets[i][1]);
//             tickets.erase(tickets.begin() + i);
//         }
//         else
//         {
//             i++;
//         }
//     }
//     answer.push_back("ICN");

//     while (!pq.empty())
//     {
//         string ap = pq.top();
//         answer.push_back(ap);
//         pq.pop();

//         for (int i = 0; i < tickets.size();)
//         {
//             if (tickets[i][0] == ap)
//             {
//                 pq.push(tickets[i][1]);
//                 tickets.erase(tickets.begin() + i);
//             }
//             else
//             {
//                 i++;
//             }
//         }
//     }
//     return answer;
// }