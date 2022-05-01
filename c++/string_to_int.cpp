// https://programmers.co.kr/learn/courses/30/lessons/12925

#include <string>
#include <vector>

using namespace std;

int solution(string s)
{
    int answer = 0;
    if (s[0] == '-')
    {
        answer = stoi(s.substr(1, s.length() - 1));
        answer *= -1;
    }
    else
        answer = stoi(s);
    return answer;
}

// stoi function converts sign as well
// int solution(string s) {
//     int answer = stoi(s);
//     return answer;
// }