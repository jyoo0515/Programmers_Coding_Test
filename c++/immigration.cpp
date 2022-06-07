// https://programmers.co.kr/learn/courses/30/lessons/43238

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

long long solution(int n, vector<int> times)
{
    long long max_time = (long long)*max_element(times.begin(), times.end()) * n;
    long long min_time = 1;
    long long answer = 1;

    while (min_time <= max_time)
    {
        long long mid = (max_time + min_time) / 2;
        long long people = 0;

        for (int t : times)
        {
            // how many people can be served in "mid" minutes
            people += mid / t;

            if (people >= n)
                break;
        }
        if (people >= n)
        {
            answer = mid;
            max_time = mid - 1;
        }
        else
        {
            min_time = mid + 1;
        }
    }

    return answer;
}