// https://programmers.co.kr/learn/courses/30/lessons/12906

#include <vector>
#include <unordered_set>

using namespace std;

vector<int> solution(vector<int> arr)
{
    vector<int> answer;
    for (int i = 0, n = -1; i < arr.size(); i++)
    {
        if (n != arr[i])
        {
            answer.push_back(arr[i]);
            n = arr[i];
        }
    }
    return answer;
}