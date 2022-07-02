# https://programmers.co.kr/learn/courses/30/lessons/12933


def solution(n):
    answer = ""
    arr = []
    for c in str(n):
        arr.append(int(c))
    arr.sort(reverse=True)

    for i in arr:
        answer += str(i)

    return int(answer)


# def solution(n):
#     ls = list(str(n))
#     ls.sort(reverse = True)
#     return int("".join(ls))
