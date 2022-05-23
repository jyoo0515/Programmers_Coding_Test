# https://programmers.co.kr/learn/courses/30/lessons/42747


def solution(citations):
    answer = 0
    citations.sort(reverse=True)
    for i in range(len(citations)):
        for h in range(citations[i] + 1):
            if i + 1 >= h:
                answer = max(answer, h)
    return answer


# def solution(citations):
#   sorted_citations = sorted(citations, reverse=True)
#   for i in range(len(sorted_citations)):
#     if sorted_citations[i] <= i:
#       return i
#   return len(sorted_citations)

# def solution(citations):
#     citations = sorted(citations)
#     l = len(citations)
#     for i in range(l):
#         if citations[i] >= l-i:
#             return l-i
#     return 0

# def solution(citations):
#     citations.sort(reverse=True)
#     answer = max(map(min, enumerate(citations, start=1)))
#     return answer
