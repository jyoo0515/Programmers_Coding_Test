# https://programmers.co.kr/learn/courses/30/lessons/42578

# 어느 부위든 미착용의 경우 + 부위의 갯수만큼 경우의 수 존재
# 따라서 이를 구해 모두 곱해준 뒤 모두 미착용인 경우를 빼기 위해 -1


def solution(clothes):
    answer = 1
    dic = {}
    for clothe in clothes:
        if clothe[1] in dic:
            dic[clothe[1]] += 1
        else:
            dic[clothe[1]] = 1

    for n in list(dic.values()):
        answer *= n + 1
    return answer - 1


# def solution(clothes):
#     from collections import Counter
#     from functools import reduce
#     cnt = Counter([kind for name, kind in clothes])
#     answer = reduce(lambda x, y: x*(y+1), cnt.values(), 1) - 1
#     return answer
