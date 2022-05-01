// https://programmers.co.kr/learn/courses/30/lessons/12931

#include <iostream>
#include <string>

using namespace std;
int solution(int n)
{
    int answer = 0;
    string str = to_string(n);
    for (char c : str)
    {
        answer += (c - '0');
    }

    return answer;
}