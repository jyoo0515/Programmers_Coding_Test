# https://programmers.co.kr/learn/courses/30/lessons/42587


def solution(priorities, location):
    answer = 1
    while len(priorities) > 0:
        if location == 0:
            if max(priorities) == priorities[location]:
                return answer
            priorities.append(priorities.pop(0))
            location = len(priorities) - 1
        else:
            if priorities[0] == max(priorities):
                priorities.pop(0)
                answer += 1
            else:
                priorities.append(priorities.pop(0))
            location -= 1


# def solution(priorities, location):
#     queue =  [(i,p) for i,p in enumerate(priorities)]
#     answer = 0
#     while True:
#         cur = queue.pop(0)
#         if any(cur[1] < q[1] for q in queue):
#             queue.append(cur)
#         else:
#             answer += 1
#             if cur[0] == location:
#                 return answer