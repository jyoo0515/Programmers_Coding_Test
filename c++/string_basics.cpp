// https://programmers.co.kr/learn/courses/30/lessons/12918

#include <string>
#include <regex>

using namespace std;

bool solution(string s)
{
    regex re("\\d{4}|\\d{6}");
    return regex_match(s, re);
}