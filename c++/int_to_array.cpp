// https://programmers.co.kr/learn/courses/30/lessons/12932

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(long long n)
{
    vector<int> answer;
    string tmp = to_string(n);
    reverse(tmp.begin(), tmp.end());
    for (char c : tmp)
    {
        answer.push_back(c - '0');
    }

    return answer;
}

// vector<int> solution(long long n)
// {
//     vector<int> answer;
//     while (n)
//     {
//         answer.push_back(n % 10);
//         n /= 10;
//     }
//     return answer;
// }