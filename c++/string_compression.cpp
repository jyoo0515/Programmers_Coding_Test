// https://programmers.co.kr/learn/courses/30/lessons/60057

#include <string>
#include <vector>

using namespace std;

int solution(string s)
{
    int answer = s.size();
    for (int i = 1; i < s.size() / 2 + 1; i++)
    {
        vector<string> arr;
        vector<int> repeated;
        for (int j = 0; j < s.size(); j += i)
            arr.push_back(s.substr(j, i));

        int cnt = 1;
        for (int k = 0; k < arr.size() - 1; k++)
        {
            if (arr[k] == arr[k + 1])
                cnt++;
            else
            {
                repeated.push_back(cnt);
                cnt = 1;
            }
        }
        repeated.push_back(cnt);
        if (arr.size() == repeated.size())
            continue;

        int tmp = s.size();
        for (int l : repeated)
        {
            if (l > 9)
                tmp -= (i * (l - 1)) - 2;
            else if (l > 1)
                tmp -= (i * (l - 1)) - 1;
        }
        answer = min(answer, tmp);
    }
    return answer;
}