// https://programmers.co.kr/learn/courses/30/lessons/12933

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

long long solution(long long n)
{
    string answer;
    string tmp = to_string(n);
    vector<int> arr;
    for (char c : tmp)
        arr.push_back(c - '0');

    sort(arr.begin(), arr.end(), greater<int>());
    for (int n : arr)
        answer.push_back(n + '0');
    return stol(answer);
}

// long long solution(long long n)
// {
//     long long answer = 0;

//     string str = to_string(n);
//     sort(str.begin(), str.end(), greater<char>());
//     answer = stoll(str);

//     return answer;
// }