// https://programmers.co.kr/learn/courses/30/lessons/42587?

#include <string>
#include <vector>
#include <deque>
#include <algorithm>

using namespace std;

int solution(vector<int> priorities, int location)
{
    int answer = 1;
    deque<int> dq(priorities.begin(), priorities.end());
    while (!dq.empty())
    {
        if (location == 0)
        {
            if (dq[location] == *max_element(dq.begin(), dq.end()))
                return answer;
            dq.push_back(dq.front());
            dq.pop_front();
            location = dq.size() - 1;
        }
        else
        {
            if (dq[0] == *max_element(dq.begin(), dq.end()))
            {
                dq.pop_front();
                answer++;
            }
            else
            {
                dq.push_back(dq.front());
                dq.pop_front();
            }
            location--;
        }
    }
    return answer;
}

// #include <string>
// #include <vector>
// #include <queue>
// #include <algorithm>

// using namespace std;

// int solution(vector<int> priorities, int location) {
//     queue<int> printer;                         //queue에 index 삽입.
//     vector<int> sorted;                         //정렬된 결과 저장용
//     for(int i=0; i<priorities.size(); i++) {
//         printer.push(i);
//     }
//     while(!printer.empty()) {
//         int now_index = printer.front();
//         printer.pop();
//         if(priorities[now_index] != *max_element(priorities.begin(),priorities.end())) {
//             //아닌경우 push
//             printer.push(now_index);
//         } else {
//             //맞는경우
//             sorted.push_back(now_index);
//             priorities[now_index] = 0;
//         }
//     }
//     for(int i=0; i<sorted.size(); i++) {
//         if(sorted[i] == location) return i+1;
//     }
// }