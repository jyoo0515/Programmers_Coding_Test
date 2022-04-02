// https://programmers.co.kr/learn/courses/30/lessons/12919

#include <string>
#include <vector>

using namespace std;

string solution(vector<string> seoul)
{
    int idx = 0;
    for (int i = 0; i < seoul.size(); i++)
    {
        if (seoul[i] == "Kim")
        {
            idx = i;
            break;
        }
    }
    string answer = "김서방은 " + to_string(idx) + "에 있다";
    return answer;
}