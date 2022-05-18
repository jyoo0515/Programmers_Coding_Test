# https://programmers.co.kr/learn/courses/30/lessons/42746


def solution(numbers):
    answer = ""
    tmp = []
    for n in numbers:
        tmp.append(((str(n) * 4)[:4], len(str(n))))
    tmp.sort(reverse=True)
    print(tmp)
    if tmp[0][0] == "0000":
        return 0
    for (string, length) in tmp:
        answer += string[:length]

    return answer


# def solution(numbers):
#     numbers = list(map(str, numbers))
#     numbers.sort(key=lambda x: x*3, reverse=True)
#     return str(int(''.join(numbers)))
