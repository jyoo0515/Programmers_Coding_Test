// https://programmers.co.kr/learn/courses/30/lessons/12912?language=cpp

#include <string>

using namespace std;

long long solution(int a, int b)
{
    long long answer = 0;
    if (a == b)
        return a;
    if (b < a)
    {
        int tmp = a;
        a = b;
        b = tmp;
    }
    for (long long i = a; i < b + 1; i++)
        answer += i;
    return answer;
}

// long long solution(int a, int b) {
//     long long answer = 0;
//     if (a > b) a ^= b ^= a ^= b;
//     answer = (long long)b * -~b / 2 - (long long)a * ~-a / 2;
//     return answer;
// }

// long long solution(int a, int b) {
//     return (long long)(a + b) * (abs(a - b) + 1) / 2;
// }