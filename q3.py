# import sys
# sys.stdin = open("1.in", "r")

N = int(input())
nums = ((N**2)*(N**2 + 1))/2

for row in range(N):
    numbers = [int(number) for number in input().split()]
    for number in numbers:
            nums -= number

print(int(nums - 1))