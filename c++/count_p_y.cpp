// https://programmers.co.kr/learn/courses/30/lessons/12916

#include <string>
using namespace std;

bool solution(string s)
{
    int pCnt = 0;
    int yCnt = 0;
    for (char c : s)
    {
        if (c == 'p' || c == 'P')
            pCnt++;
        else if (c == 'y' || c == 'Y')
            yCnt++;
    }

    return pCnt == yCnt;
}