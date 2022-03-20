// https://programmers.co.kr/learn/courses/30/lessons/72410

#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool valid(int c)
{
    if (c == 45 || c == 46 || c == 95)
    { // -, _, .
        return true;
    }
    else if (c >= 48 && c <= 57)
    { // number
        return true;
    }
    else if (c >= 97 && c <= 122)
    { // lower case alphabet
        return true;
    }
    return false;
}

string solution(string new_id)
{
    for (int i = 0; i < new_id.size(); i++)
    {
        new_id[i] = tolower(new_id[i]);
    }

    string valid_id;
    for (char c : new_id)
    {
        if (valid(c))
        {
            valid_id.push_back(c);
        }
    }

    for (int i = 1; i < valid_id.length();)
    {
        if (valid_id[i] == '.' && valid_id[i - 1] == '.')
        {
            valid_id.erase(valid_id.begin() + i);
            continue;
        }
        else
        {
            i++;
        }
    }

    if (valid_id.front() == '.')
    {
        valid_id.erase(valid_id.begin());
    }

    if (valid_id.back() == '.')
    {
        valid_id.erase(valid_id.end() - 1);
    }

    if (valid_id.empty())
    {
        valid_id = "a";
    }

    if (valid_id.length() > 15)
    {
        valid_id = valid_id.substr(0, 15);
        if (valid_id.back() == '.')
        {
            valid_id.erase(valid_id.end() - 1);
        }
    }

    if (valid_id.length() < 3)
    {
        char c = valid_id.back();
        while (valid_id.length() < 3)
        {
            valid_id.push_back(c);
        }
    }

    string answer = valid_id;
    return answer;
}