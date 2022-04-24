// https://programmers.co.kr/learn/courses/30/lessons/12944

#include <string>
#include <vector>

using namespace std;

double solution(vector<int> arr)
{
    double sum = 0;
    for (int n : arr)
    {
        sum += n;
    }
    return sum / arr.size();
}
