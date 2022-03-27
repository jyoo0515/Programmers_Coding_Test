// https://programmers.co.kr/learn/courses/30/lessons/77884?language=cpp

#include <string>
#include <vector>

using namespace std;

bool evenDivisor(int num)
{
    int divisorCnt = 0;
    for (int i = 1; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            divisorCnt++;
            if (i * i < num)
            {
                divisorCnt++;
            }
        }
    }
    return divisorCnt % 2 == 0;
}

int solution(int left, int right)
{
    int answer = 0;
    for (int i = left; i <= right; i++)
    {
        if (evenDivisor(i))
        {
            answer += i;
        }
        else
        {
            answer -= i;
        }
    }
    return answer;
}