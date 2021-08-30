#!/usr/bin/env python3

from typing import List


def sum_of_two_initial(list1: List, list2: List, v):
    for a in list1:
        for b in list2:
            if a + b == v:
                return True
    return False


def sum_of_two_optimized(list1: List, list2: List, v):
    answers = set()
    for a in list1:
        answers.add(v - a)
    for b in list2:
        if b in answers:
            return True
    return False


def run_solution():
    list1 = [1, 2, 3, 4]
    list2 = [0, 0, - 1, 4]

    # returning true
    result = sum_of_two_initial(list1, list2, 8)  # 4 + 4
    print(f"Result non optimized {result}")
    result = sum_of_two_optimized(list1, list2, 8)  # 4 + 4
    print(f"Result optimized {result}")

    # returning false
    list1 = [1, 2, 3, 4]
    list2 = [0, 0, -1, 4]
    result = sum_of_two_optimized(list1, list2, 9)
    print(f"Result optimized {result}")


if __name__ == "__main__":
    run_solution()
