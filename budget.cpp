// https://programmers.co.kr/learn/courses/30/lessons/12982

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> d, int budget)
{
    sort(d.begin(), d.end());
    int answer = 0;
    int sum = 0;
    for (int i : d)
    {
        sum += i;
        if (sum <= budget)
            answer++;
        else
            break;
    }
    return answer;
}