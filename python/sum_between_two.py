# https://programmers.co.kr/learn/courses/30/lessons/12912?language=python3


def solution(a, b):
    if a > b:
        tmp = b
        b = a
        a = tmp
    return sum(range(a, b + 1))


# def solution(a, b):
#     if a > b: a, b = b, a
#     return sum(range(a,b+1))
