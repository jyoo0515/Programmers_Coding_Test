// https://programmers.co.kr/learn/courses/30/lessons/42747

#include <string>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

int solution(vector<int> citations)
{
    int answer = 0;
    sort(citations.begin(), citations.end(), greater<int>());
    for (int i = 0; i < citations.size(); i++)
    {
        for (int h = 0; h <= citations[i]; h++)
        {
            if (i + 1 >= h)
                answer = max(answer, h);
        }
    }
    return answer;
}

// #include <string>
// #include <vector>
// #include <algorithm>

// using namespace std;

// int solution(vector<int> citations) {
//     sort(citations.begin(), citations.end(), greater<int>());

//     for (int i = 0; i < citations.size(); ++i) {
//         if (citations[i] < i + 1) {
//             return i;
//         }
//     }

//     return citations.size();
// }