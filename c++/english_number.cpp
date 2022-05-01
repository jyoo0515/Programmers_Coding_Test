// https://programmers.co.kr/learn/courses/30/lessons/81301?language=cpp

#include <string>
#include <vector>
#include <map>

using namespace std;

bool isNum(char c)
{
    if (48 <= c && c <= 57)
    {
        return true;
    }
    return false;
}

map<string, char> getMap()
{
    map<string, char> mp = {{"zero", '0'}, {"one", '1'}, {"two", '2'}, {"three", '3'}, {"four", '4'}, {"five", '5'}, {"six", '6'}, {"seven", '7'}, {"eight", '8'}, {"nine", '9'}};
    return mp;
}

int solution(string s)
{
    map<string, char> mp = getMap();
    string temp = "";
    for (int i = 0; i < s.size();)
    {
        if (isNum(s[i]))
        {
            temp.push_back(s[i]);
            i++;
            continue;
        }
        else if (mp.find(s.substr(i, 3)) != mp.end())
        {
            temp.push_back(mp.find(s.substr(i, 3))->second);
            i += 3;
            continue;
        }
        else if (mp.find(s.substr(i, 4)) != mp.end())
        {
            temp.push_back(mp.find(s.substr(i, 4))->second);
            i += 4;
            continue;
        }
        else if (mp.find(s.substr(i, 5)) != mp.end())
        {
            temp.push_back(mp.find(s.substr(i, 5))->second);
            i += 5;
            continue;
        }
    }

    int answer = stoi(temp);
    return answer;
}

// int solution(string s) {
//     s = regex_replace(s, regex("zero"), "0");
//     s = regex_replace(s, regex("one"), "1");
//     s = regex_replace(s, regex("two"), "2");
//     s = regex_replace(s, regex("three"), "3");
//     s = regex_replace(s, regex("four"), "4");
//     s = regex_replace(s, regex("five"), "5");
//     s = regex_replace(s, regex("six"), "6");
//     s = regex_replace(s, regex("seven"), "7");
//     s = regex_replace(s, regex("eight"), "8");
//     s = regex_replace(s, regex("nine"), "9");
//     return stoi(s);
// }