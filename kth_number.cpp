// https://programmers.co.kr/learn/courses/30/lessons/42748

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands)
{
    vector<int> answer;
    for (auto command : commands)
    {
        vector<int> subVector = {array.begin() + (command[0] - 1), array.begin() + command[1]};
        sort(subVector.begin(), subVector.end());
        answer.push_back(subVector[command[2] - 1]);
    }

    return answer;
}