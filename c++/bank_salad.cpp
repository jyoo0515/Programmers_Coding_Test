// 주어진 배열 arr에 n개의 정수 타입 숫자들이 정렬 되어 들어가 있다. 여기서 임의의 숫자 target가 그 배열의 몇 번 째에 있는지 반환하는 함수를 구현하라.

// arr = [1, 2, 9, 78, 124]
// target = 9

// the return value should be 2

#include <iostream>
#include <vector>
using namespace std;

int solution(vector<int> arr, int target, int left, int right)
{
    if (left > right)
        return -1;

    int mid = (left + right) / 2;
    if (arr[mid] == target)
        return mid;
    else if (arr[mid] < target)
        return solution(arr, target, mid + 1, right);
    else
        return solution(arr, target, left, mid - 1);
}

// To execute C++, please define "int main()"
int main()
{
    vector<int> arr = {1, 2, 9, 78, 124};
    cout << solution(arr, 0, 0, arr.size() - 1) << endl;
    cout << solution(arr, 1, 0, arr.size() - 1) << endl;
    cout << solution(arr, 2, 0, arr.size() - 1) << endl;
    cout << solution(arr, 9, 0, arr.size() - 1) << endl;
    cout << solution(arr, 78, 0, arr.size() - 1) << endl;
    cout << solution(arr, 200, 0, arr.size() - 1) << endl;

    return 0;
}
