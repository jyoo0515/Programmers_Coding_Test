// https://programmers.co.kr/learn/courses/30/lessons/1845

#include <vector>
#include <set>
using namespace std;

int solution(vector<int> nums)
{
    set<int> s;
    for (int num : nums)
    {
        s.insert(num);
    }
    return min(nums.size() / 2, s.size());
}