// https://programmers.co.kr/learn/courses/30/lessons/42578

#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

int solution(vector<vector<string>> clothes)
{
    int answer = 1;
    unordered_map<string, int> mp;
    for (vector<string> c : clothes)
    {
        auto itr = mp.find(c[1]);
        if (itr != mp.end())
            itr->second++;
        else
            mp.insert(make_pair(c[1], 1));
    }

    for (auto itr = mp.begin(); itr != mp.end(); itr++)
        answer *= (itr->second + 1);

    return answer - 1;
}

// #include <string>
// #include <vector>
// #include <unordered_map>

// using namespace std;

// int solution(vector<vector<string>> clothes) {
//     int answer = 1;

//     unordered_map <string, int> attributes;
//     for(int i = 0; i < clothes.size(); i++)
//         attributes[clothes[i][1]]++;
//     for(auto it = attributes.begin(); it != attributes.end(); it++)
//         answer *= (it->second+1);
//     answer--;

//     return answer;
// }