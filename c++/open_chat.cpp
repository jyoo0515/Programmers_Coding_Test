// https://programmers.co.kr/learn/courses/30/lessons/42888

#include <string>
#include <vector>
#include <map>

using namespace std;

vector<string> split(string s)
{
    size_t pos = 0;
    vector<string> arr = {};
    while ((pos = s.find(" ")) != string::npos)
    {
        arr.push_back(s.substr(0, pos));
        s.erase(0, pos + 1);
    }
    arr.push_back(s.substr(0, pos));
    return arr;
}

vector<string> solution(vector<string> record)
{
    vector<string> answer;
    vector<pair<string, string>> tmp;
    map<string, string> users;
    for (string s : record)
    {
        vector<string> arr = split(s);
        if (arr[0] == "Enter")
        {
            tmp.push_back(make_pair(arr[0], arr[1]));
            if (users.find(arr[1]) != users.end())
                users.find(arr[1])->second = arr[2];
            else
                users.insert(make_pair(arr[1], arr[2]));
        }
        else if (arr[0] == "Leave")
        {
            tmp.push_back(make_pair(arr[0], arr[1]));
        }
        else if (arr[0] == "Change")
        {
            auto user = users.find(arr[1]);
            user->second = arr[2];
        }
    }

    for (auto t : tmp)
    {
        string str = users.find(t.second)->second;
        if (t.first == "Enter")
            str += "님이 들어왔습니다.";
        else
            str += "님이 나갔습니다.";
        answer.push_back(str);
    }
    return answer;
}