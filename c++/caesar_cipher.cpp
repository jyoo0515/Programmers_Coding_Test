// https://programmers.co.kr/learn/courses/30/lessons/12926

#include <string>
#include <vector>

using namespace std;

string solution(string s, int n)
{
    string answer = "";
    for (char c : s)
    {
        if (isalpha(c))
        {
            char result = c + n;
            if (c <= 'Z' && result > 'Z')
                result -= 26;
            else if (!isalpha(result))
                result -= 26;
            answer.push_back(result);
            continue;
        }
        answer.push_back(c);
    }
    return answer;
}

// int main()
// {
//     string test = "Z z A";
//     cout << solution(test, 25) << endl;
// }