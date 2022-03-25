// https://programmers.co.kr/learn/courses/30/lessons/42862

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve)
{
    sort(reserve.begin(), reserve.end());
    sort(lost.begin(), lost.end());
    vector<int> new_lost;
    for (int l : lost)
    {
        auto itr = find(reserve.begin(), reserve.end(), l);
        if (itr != reserve.end())
        {
            reserve.erase(itr);
        }
        else
        {
            new_lost.push_back(l);
        }
    }
    int lostCnt = 0;
    for (int l : new_lost)
    {
        auto itr = find(reserve.begin(), reserve.end(), l - 1);
        if (itr != reserve.end())
        {
            reserve.erase(itr);
            continue;
        }
        itr = find(reserve.begin(), reserve.end(), l + 1);
        if (itr != reserve.end())
        {
            reserve.erase(itr);
            continue;
        }
        lostCnt++;
    }

    return n - lostCnt;
}

// int student[35];
// int solution(int n, vector<int> lost, vector<int> reserve) {
//     int answer = 0;
//     for(int i : reserve) student[i] += 1;
//     for(int i : lost) student[i] += -1;
//     for(int i = 1; i <= n; i++) {
//         if(student[i] == -1) {
//             if(student[i-1] == 1)
//                 student[i-1] = student[i] = 0;
//             else if(student[i+1] == 1)
//                 student[i] = student[i+1] = 0;
//         }
//     }
//     for(int i  = 1; i <=n; i++)
//         if(student[i] != -1) answer++;

//     return answer;
// }