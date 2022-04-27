// https://programmers.co.kr/learn/courses/30/lessons/12948

#include <string>
#include <vector>

using namespace std;

string solution(string phone_number)
{
    string answer = "";
    for (int i = 0; i < phone_number.size(); i++)
    {
        if (i >= phone_number.size() - 4)
            answer += phone_number[i];
        else
            answer += '*';
    }
    return answer;
}

// string solution(string phone_number)
// {
//     string answer = phone_number;
//     for (int i = 0; i < answer.size() - 4; i++)
//     {
//         answer.replace(i, 1, "*");
//     }
//     return answer;
// }