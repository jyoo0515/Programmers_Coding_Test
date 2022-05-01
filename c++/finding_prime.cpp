// https://programmers.co.kr/learn/courses/30/lessons/12921

#include <string>
#include <vector>
#include <cmath>

using namespace std;

vector<bool> sieve(int n)
{
    vector<bool> notPrime(n + 1);
    notPrime[1] = true;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (notPrime[i])
            continue;
        for (int j = i * i; j <= n; j += i)
            notPrime[j] = true;
    }
    return notPrime;
}

int solution(int n)
{
    int answer = 0;
    vector<bool> notPrime = sieve(n);
    for (int i = 2; i <= n; i++)
    {
        if (!notPrime[i])
            answer++;
    }

    return answer;
}