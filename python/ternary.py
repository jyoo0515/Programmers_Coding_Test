# https://programmers.co.kr/learn/courses/30/lessons/68935?language=python3


def solution(n):
    answer = 0
    v = []
    while n > 0:
        v.append(n % 3)
        n //= 3

    exp = 0
    while len(v) > 0:
        answer += v.pop() * (3 ** exp)
        exp += 1
    return answer


# def solution(n):
#     tmp = ''
#     while n:
#         tmp += str(n % 3)
#         n = n // 3

#     answer = int(tmp, 3)
#     return answer
