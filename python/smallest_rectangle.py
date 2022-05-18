# https://programmers.co.kr/learn/courses/30/lessons/86491?language=python3


def solution(sizes):
    larger = []
    smaller = []
    for size in sizes:
        larger.append(max(size))
        smaller.append(min(size))
    return max(larger) * max(smaller)


# def solution(sizes):
#     return max(max(x) for x in sizes) * max(min(x) for x in sizes)


# def solution(sizes):
#     sizes = [sorted(s) for s in sizes]
#     return max([x[0] for x in sizes]) * max([x[1] for x in sizes])
