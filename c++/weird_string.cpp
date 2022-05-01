// https : // programmers.co.kr/learn/courses/30/lessons/12930

#include <string>
#include <vector>

using namespace std;

string solution(string s)
{
    string answer = "";
    int cnt = 0;
    for (char c : s)
    {
        if (isalpha(c))
        {
            if (cnt % 2 == 0)
                answer += toupper(c);
            else
                answer += tolower(c);
            cnt++;
        }
        else
        {
            answer += c;
            cnt = 0;
        }
    }
    return answer;
}