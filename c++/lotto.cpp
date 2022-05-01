// https://programmers.co.kr/learn/courses/30/lessons/77484#fn1

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int getRank(int numCorrect)
{
    if (numCorrect == 0)
    {
        return 6;
    }
    else
    {
        return 6 - numCorrect + 1;
    }
}

vector<int> solution(vector<int> lottos, vector<int> win_nums)
{
    vector<int> answer;
    int numZero = 0;
    int wrongNum = 0;
    for (int num : lottos)
    {
        if (num == 0)
        {
            numZero++;
        }
        else if (find(win_nums.begin(), win_nums.end(), num) == win_nums.end())
        {
            wrongNum++;
        }
    }
    answer.push_back(getRank(6 - wrongNum));
    answer.push_back(getRank(6 - numZero - wrongNum));
    return answer;
}