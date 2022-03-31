// https://programmers.co.kr/learn/courses/30/lessons/86491

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> sizes)
{
    vector<int> larger, smaller;
    for (auto size : sizes)
    {
        if (size[0] < size[1])
        {
            larger.push_back(size[1]);
            smaller.push_back(size[0]);
        }
        else
        {
            smaller.push_back(size[1]);
            larger.push_back(size[0]);
        }
    }
    return (*max_element(larger.begin(), larger.end()) * *max_element(smaller.begin(), smaller.end()));
}