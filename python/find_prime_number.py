# https://programmers.co.kr/learn/courses/30/lessons/42839


def isPrime(num: int):
    if num == 0 or num == 1:
        return False
    for i in range(2, num // 2 + 1):
        if num % i == 0:
            return False
    return True


def search_num(numbers, i, visited, primes):
    for j in numbers:
        num = i + j
        remaining = numbers.replace(j, "", 1)
        if int(num) not in visited:
            visited.append(int(num))
            if isPrime(num):
                primes.append(int(num))

        if remaining:
            search_num(remaining, num, visited, primes)


def solution(numbers):
    visited = []
    primes = []

    for i in numbers:
        if int(i) not in visited:
            visited.append(int(i))
            if isPrime(int(i)):
                primes.append(int(i))

        remaining = numbers.replace(i, "", 1)
        search_num(remaining, i, visited, primes)

    return len(primes)


# from itertools import permutations
# def solution(n):
#     a = set()
#     for i in range(len(n)):
#         a |= set(map(int, map("".join, permutations(list(n), i + 1))))
#     a -= set(range(0, 2))
#     for i in range(2, int(max(a) ** 0.5) + 1):
#         a -= set(range(i * 2, max(a) + 1, i))
#     return len(a)


# primeSet = set()
# def isPrime(number):
#     if number in (0, 1):
#         return False
#     for i in range(2, number):
#         if number % i == 0:
#             return False

#     return True


# def makeCombinations(str1, str2):
#     if str1 != "":
#         if isPrime(int(str1)):
#             primeSet.add(int(str1))

#     for i in range(len(str2)):
#         makeCombinations(str1 + str2[i], str2[:i] + str2[i + 1:])


# def solution(numbers):
#     makeCombinations("", numbers)

#     answer = len(primeSet)

#     return answer
