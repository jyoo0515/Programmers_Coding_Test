// https://programmers.co.kr/learn/courses/30/lessons/42586

#include <string>
#include <vector>
#include <queue>
#include <cmath>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds)
{
    vector<int> answer;
    queue<int> daysLeft;
    for (int i = 0; i < progresses.size(); i++)
    {
        int remainder = 100 - progresses[i];
        daysLeft.push(ceil((double)remainder / (double)speeds[i]));
    }

    int cnt = 1;
    int bottleNeck = daysLeft.front();
    daysLeft.pop();
    while (!daysLeft.empty())
    {
        if (bottleNeck < daysLeft.front())
        {
            answer.push_back(cnt);
            bottleNeck = daysLeft.front();
            daysLeft.pop();
            cnt = 1;
        }
        else
        {
            cnt += 1;
            daysLeft.pop();
        }
    }
    answer.push_back(cnt);

    return answer;
}

// #include <string>
// #include <vector>

// using namespace std;

// vector<int> solution(vector<int> progresses, vector<int> speeds) {
//     vector<int> answer;

//     int day;
//     int max_day = 0;
//     for (int i = 0; i < progresses.size(); ++i)
//     {
//         day = (99 - progresses[i]) / speeds[i] + 1;

//         if (answer.empty() || max_day < day)
//             answer.push_back(1);
//         else
//             ++answer.back();

//         if (max_day < day)
//             max_day = day;
//     }

//     return answer;
// }