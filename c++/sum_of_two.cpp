// https://programmers.co.kr/learn/courses/30/lessons/68644

#include <string>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> numbers)
{
    set<int> s;
    sort(numbers.begin(), numbers.end());
    for (int i = 0; i < numbers.size() - 1; i++)
        for (int j = i + 1; j < numbers.size(); j++)
            s.insert(numbers[i] + numbers[j]);

    return vector<int>(s.begin(), s.end());
}