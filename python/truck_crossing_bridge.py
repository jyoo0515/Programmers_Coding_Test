# https://programmers.co.kr/learn/courses/30/lessons/42583


def solution(bridge_length, weight, truck_weights):
    answer = 0
    crossed = []
    n = len(truck_weights)
    truck = truck_weights.pop(0)
    while len(crossed) < n:
        if truck + truck_weights[0] < weight:
            return 0
