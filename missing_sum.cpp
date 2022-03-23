// https://programmers.co.kr/learn/courses/30/lessons/86051?language=cpp

#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers)
{
    int expected_sum = 45;
    int actual_sum = 0;
    for (int num : numbers)
    {
        actual_sum += num;
    }

    return expected_sum - actual_sum;
}