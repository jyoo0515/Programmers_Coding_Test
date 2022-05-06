# https://programmers.co.kr/learn/courses/30/lessons/62048

# def gcd(a, b):
#     if (b > a):
#         tmp = a
#         a = b
#         b = tmp
#     if b == 0:
#         return a
#     else:
#         return gcd(b, a % b)


import math


def solution(w, h):
    # return w * h - (((w / math.gcd(w, h)) + (h / math.gcd(w, h)) - 1) * math.gcd(w, h))
    return w * h - (w + h - math.gcd(w, h))


# def gcd(a,b): return b if (a==0) else gcd(b%a,a)
# def solution(w,h): return w*h-w-h+gcd(w,h)
