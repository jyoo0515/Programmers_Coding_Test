// https://programmers.co.kr/learn/courses/30/lessons/42889

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(const pair<int, double> &a, const pair<int, double> &b)
{
    if (a.second == b.second)
        return a.first < b.first;
    return a.second > b.second;
}

vector<int> solution(int N, vector<int> stages)
{
    vector<int> answer;
    vector<pair<int, double>> temp;
    for (int i = 1; i < N + 1; i++)
    {
        double rate;
        int numer = count(stages.begin(), stages.end(), i);
        int denom = count_if(stages.begin(), stages.end(), [i](int elem)
                             { return elem >= i; });
        if (denom == 0)
        {
            rate = 0;
        }
        else
        {
            rate = (double)numer / denom;
        }
        temp.push_back(make_pair(i, rate));
    }
    sort(temp.begin(), temp.end(), cmp);

    for (auto elem : temp)
    {
        answer.push_back(elem.first);
    }
    return answer;
}