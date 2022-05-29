#include <string>
#include <vector>

using namespace std;

string solution(string number, int k)
{
    int length = number.length() - k;
    while (k--)
    {
        for (auto itr = number.begin(); itr != number.end(); itr++)
        {
            if (*itr < *(itr + 1))
            {
                number.erase(itr);
                break;
            }
        }
    }

    while (number.length() > length)
        number.pop_back();

    return number;
}

// #include <string>
// #include <vector>

// using namespace std;

// string solution(string number, int k) {
//     string answer = "";

//     int biggest = 0;
//     int idx = 0;

//     for (int i = 0; i < number.length(); ++i)
//     {
//         if (biggest < number[i])
//         {
//             biggest = number[i];
//             idx = i;
//         }

//         if (i == k)
//         {
//             i = idx;
//             ++k;
//             answer.push_back(biggest);
//             biggest = 0;
//         }
//     }

//     return answer;
// }
