# https://programmers.co.kr/learn/courses/30/lessons/42583

import collections


def sum_bridge(queue_bridge):
    sum_b = 0
    if len(queue_bridge) > 0:
        for weight, t in queue_bridge:
            sum_b += weight
    return sum_b


def solution(bridge_length, weight, truck_weights):
    queue_wait = collections.deque(truck_weights)  # turcks waiting
    queue_bridge = collections.deque()  # trucks on the bridge

    time = 0
    while len(queue_wait) > 0 or len(queue_bridge) > 0:
        # move trucks on the brdige by one
        for i in range(len(queue_bridge)):
            # tuple(truck weight, time on bridge)
            queue_bridge[i] = (queue_bridge[i][0], queue_bridge[i][1] + 1)

        # remove trucks that reached the end
        if len(queue_bridge) > 0 and queue_bridge[0][1] > bridge_length:
            queue_bridge.popleft()

        # if another truck can be added, add it to the queue
        if len(queue_wait) > 0 and weight - sum_bridge(queue_bridge) >= queue_wait[0]:
            truck = queue_wait.popleft()
            queue_bridge.append((truck, 1))

        time += 1
    return time


# from collections import deque

# def solution(bridge_length, weight, truck_weights):
#     bridge = deque(0 for _ in range(bridge_length))
#     total_weight = 0
#     step = 0
#     truck_weights.reverse()

#     while truck_weights:
#         total_weight -= bridge.popleft()
#         if total_weight + truck_weights[-1] > weight:
#             bridge.append(0)
#         else:
#             truck = truck_weights.pop()
#             bridge.append(truck)
#             total_weight += truck
#         step += 1

#     step += bridge_length

#     return step
