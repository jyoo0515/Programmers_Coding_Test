// https://programmers.co.kr/learn/courses/30/lessons/42860

#include <string>
#include <vector>

using namespace std;

int getDistance(char c)
{
    int forward = c - 'A';
    int reverse = 'Z' - c + 1;

    return min(forward, reverse);
}

int solution(string name)
{
    int answer = 0, idx;
    int length = name.length();
    int move = length - 1;

    for (int i = 0; i < length; i++)
    {
        answer += getDistance(name[i]);

        idx = i + 1;
        while (idx < length && name[idx] == 'A')
            idx++;

        move = min(move, i * 2 + length - idx);
        move = min(move, (length - idx) * 2 + i);
    }

    return answer + move;
}