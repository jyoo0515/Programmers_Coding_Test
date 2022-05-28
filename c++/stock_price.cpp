#include <vector>
#include <stack>

using namespace std;

vector<int> solution(vector<int> prices)
{
    vector<int> answer;
    answer.resize(prices.size());
    stack<pair<int, int>> st;
    for (int i = 0; i < prices.size(); i++)
    {
        while (!st.empty() && st.top().second > prices[i])
        {
            answer[st.top().first] = i - st.top().first;
            st.pop();
        }
        st.push(make_pair(i, prices[i]));
    }

    while (!st.empty())
    {
        answer[st.top().first] = prices.size() - 1 - st.top().first;
        st.pop();
    }
    return answer;
}

// #include <string>
// #include <vector>
// #include <stack>

// using namespace std;

// vector<int> solution(vector<int> prices) {
//     vector<int> answer(prices.size());
//     stack<int> s;
//     int size = prices.size();
//     for(int i=0;i<size;i++){
//         while(!s.empty()&&prices[s.top()]>prices[i]){
//             answer[s.top()] = i-s.top();
//             s.pop();
//         }
//         s.push(i);
//     }
//     while(!s.empty()){
//         answer[s.top()] = size-s.top()-1;
//         s.pop();
//     }
//     return answer;
// }