// https://programmers.co.kr/learn/courses/30/lessons/12940

#include <string>
#include <vector>

using namespace std;

int gcd(int a, int b)
{
    int tmp;
    if (a < b)
    {
        tmp = a;
        a = b;
        b = tmp;
    }
    while (b != 0)
    {
        int rem = a % b;
        a = b;
        b = rem;
    }
    return a;
}

vector<int> solution(int n, int m)
{
    vector<int> answer;
    answer.push_back(gcd(n, m));
    answer.push_back(n * m / answer[0]);
    return answer;
}