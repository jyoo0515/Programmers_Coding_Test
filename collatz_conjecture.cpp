// https://programmers.co.kr/learn/courses/30/lessons/12943

#include <string>
#include <vector>

using namespace std;

int solution(int num)
{
    // convert type to prevent overflow
    long n = (long)num;
    for (int i = 0; i < 500; i++)
    {
        if (n == 1)
            return i;
        if (n % 2)
        {
            n = n * 3 + 1;
        }
        else
        {
            n /= 2;
        }
    }
    return -1;
}