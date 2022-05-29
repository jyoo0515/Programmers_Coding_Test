// https://programmers.co.kr/learn/courses/30/lessons/42627

#include <vector>
#include <queue>
#include <functional>
#include <algorithm>

using namespace std;

struct comp
{
    bool operator()(const vector<int> &lhs, const vector<int> &rhs)
    {
        return lhs[1] > rhs[1];
    }
};

int solution(vector<vector<int>> jobs)
{
    int answer = 0, time = 0;
    int n = jobs.size();
    vector<int> timeTaken;
    priority_queue<vector<int>, vector<vector<int>>, comp> pq;

    while (timeTaken.size() < n)
    {
        for (auto iter = jobs.begin(); iter != jobs.end();)
        {
            if (*(iter->begin()) <= time)
            {
                pq.push(*iter);
                jobs.erase(iter);
            }
            else
            {
                iter++;
            }
        }

        if (pq.empty())
            time++;
        else
        {
            vector<int> cur = pq.top();
            pq.pop();

            time += cur[1];
            timeTaken.push_back(time - cur[0]);
        }
    }

    for (int t : timeTaken)
        answer += t;

    return answer / n;
}

// #include <vector>
// #include <queue>
// #include <algorithm>

// using namespace std;

// bool compare(vector<int> a, vector<int> b){
//     return a[1] < b[1];
// }

// int solution(vector<vector<int>> jobs) {
//     int answer = 0;
//     int start = 0; // 현재까지 작업이 진행된 시간
//     int time = 0; // 각각의 작업이 진행되는데 걸린 시간들의 합
//     int size = jobs.size();

//     sort(jobs.begin(), jobs.end(), compare); // 소요시간으로 우선 배열

//     while(!jobs.empty()){
//         for(int i=0; i<jobs.size(); i++){
//             if(jobs[i][0] <= start) {
//                 start += jobs[i][1];
//                 time += start - jobs[i][0];
//                 jobs.erase(jobs.begin() + i);
//                 break;
//             }

//             if(i == jobs.size()-1) start++;
//         }
//     }

//     answer = time / size;
//     return answer;
// }