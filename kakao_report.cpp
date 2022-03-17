// https://programmers.co.kr/learn/courses/30/lessons/92334?language=cpp

#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

vector<int> solution(vector<string> id_list, vector<string> report, int k)
{
    vector<vector<string>> adjList;
    map<string, int> users;
    vector<int> answer;

    for (int i = 0; i < id_list.size(); i++)
    {
        users.insert(make_pair(id_list[i], i));
    }
    adjList.resize(id_list.size());

    for (int i = 0; i < report.size(); i++)
    {
        string rep = report[i];
        string src = rep.substr(0, rep.find(" "));
        string dst = rep.substr(rep.find(" ") + 1, rep.length());

        int idx = users.find(dst)->second;
        if (find(adjList[idx].begin(), adjList[idx].end(), src) == adjList[idx].end())
        {
            adjList[idx].push_back(src);
        }
    }

    answer.resize(id_list.size());
    for (int i = 0; i < id_list.size(); i++)
    {
        if (adjList[i].size() >= k)
        {
            for (int j = 0; j < adjList[i].size(); j++)
            {
                int idx = users.find(adjList[i][j])->second;
                answer[idx]++;
            }
        }
    }

    return answer;
}