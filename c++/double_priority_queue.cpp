// https://programmers.co.kr/learn/courses/30/lessons/42628

#include <string>
#include <vector>
#include <deque>
#include <algorithm>

using namespace std;

vector<int> solution(vector<string> operations)
{
    vector<int> answer;
    deque<int> dq;

    for (string op : operations)
    {
        sort(dq.begin(), dq.end());
        if (op[0] == 'I')
        {
            int num = stoi(op.substr(2));
            dq.push_back(num);
        }
        else if (op == "D 1" && dq.size() != 0)
        {
            dq.pop_back();
        }
        else if (op == "D -1" && dq.size() != 0)
        {
            dq.pop_front();
        }
    }

    if (dq.size() == 0)
    {
        answer = {0, 0};
    }
    else
    {
        sort(dq.begin(), dq.end());
        answer.push_back(dq.back());
        answer.push_back(dq.front());
    }

    return answer;
}

// #include <string>
// #include <vector>
// #include <set>

// using namespace std;

// vector<int> solution(vector<string> arguments) {
//     vector<int> answer;
//     multiset<int> que;
//     multiset<int>::iterator iter;
//     string sub;

//     for(auto s : arguments) {
//         sub =s.substr(0, 2);
//         if(sub=="I ") que.insert(stoi(s.substr(2,s.length()-2)));
//         else if(s.substr(2,1)=="1"&&que.size()>0) { que.erase(--que.end()); }
//         else if(que.size()>0) { que.erase(que.begin()); }
//     }

//     if(que.size()==0) { answer.push_back(0); answer.push_back(0); }
//     else {
//         iter = --que.end(); answer.push_back(*iter);
//         iter = que.begin(); answer.push_back(*iter);
//     }

//     return answer;
// }