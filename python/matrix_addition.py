# https://programmers.co.kr/learn/courses/30/lessons/12950?language=python3

def solution(arr1, arr2):
    for i in range(len(arr1)):
        for j in range(len(arr1[i])):
            arr1[i][j] += arr2[i][j]
    return arr1


print(solution([[1, 2], [2, 3]], [[3, 4], [5, 6]]))


# def solution(A, B):
#     answer = [[c + d for c, d in zip(a, b)] for a, b in zip(A, B)]
#     return answer
