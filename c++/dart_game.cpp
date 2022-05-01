// https://programmers.co.kr/learn/courses/30/lessons/17682

#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(string dartResult)
{
    vector<int> arr;
    int cnt = -1;
    for (int i = 0; i < dartResult.length();)
    {
        char c = dartResult[i];
        if (47 < c && c < 58)
        {
            if (47 < dartResult[i + 1] && dartResult[i + 1] < 58)
            {
                arr.push_back(10);
                i += 2;
            }
            else
            {
                arr.push_back(c - '0');
                i++;
            }
            cnt++;
            continue;
        }
        else if (c == 'D')
        {
            arr[cnt] = pow(arr[cnt], 2);
        }
        else if (c == 'T')
        {
            arr[cnt] = pow(arr[cnt], 3);
        }
        else if (c == '*')
        {
            if (cnt == 0)
            {
                arr[cnt] *= 2;
            }
            else
            {
                arr[cnt] *= 2;
                arr[cnt - 1] *= 2;
            }
        }
        else if (c == '#')
        {
            arr[cnt] *= -1;
        }
        i++;
    }

    int answer = 0;
    for (int p : arr)
        answer += p;
    return answer;
}

// #include <string>
// #include <sstream>
// #include <cmath>

// using namespace std;

// int solution(string dartResult) {
//     stringstream ss(dartResult);

//     int sum[3] = { 0, 0, 0 };
//     int options[3] = { 1, 1, 1 };
//     for (int i = 0; i < 3; i++) {
//         int score;
//         char bonus;
//         char option;

//         ss >> score;

//         bonus = ss.get();
//         option = ss.get();

//         if (option != '*' && option != '#') {
//             ss.unget();
//         }

//         switch (bonus) {
//         case 'S':
//             sum[i] += pow(score, 1);
//             break;
//         case 'D':
//             sum[i] += pow(score, 2);
//             break;
//         case 'T':
//             sum[i] += pow(score, 3);
//             break;
//         default:
//             break;
//         }

//         switch (option) {
//         case '*':
//             if (i > 0 && options[i - 1]) options[i - 1] *= 2;
//             options[i] *= 2;
//             break;
//         case '#':
//             options[i] = -options[i];
//             break;
//         default:
//             break;
//         }
//     }

//     return sum[0] * options[0] + sum[1] * options[1] + sum[2] * options[2];
// }