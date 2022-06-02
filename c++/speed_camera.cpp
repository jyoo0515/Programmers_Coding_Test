// https://programmers.co.kr/learn/courses/30/lessons/42884

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool compVec(const vector<int> a, const vector<int> b) { return a[1] < b[1]; }

int solution(vector<vector<int>> routes)
{
    int answer = 0;
    sort(routes.begin(), routes.end(), compVec);
    int cameraLoc = -30001;
    for (auto route : routes)
    {
        if (route[0] > cameraLoc)
        {
            cameraLoc = route[1];
            answer++;
        }
    }
    return answer;
}

// using namespace std;

// bool cmp(vector<int> a, vector<int> b) { return a[1] < b[1]; }

// int solution(vector<vector<int>> routes) {
//     int answer = 0;
//     int limit = -30001;
//     sort(routes.begin(), routes.end(), cmp);
//     for(int i = 0; i < routes.size(); i++){
//         if(limit < routes[i][0]){
//             answer++;
//             limit = routes[i][1];
//         }
//     }
//     return answer;
// }