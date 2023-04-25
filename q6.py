# import sys
# sys.stdin = open("1.in", "r")

n, c, r, p = map(int, input().split())
cat_motion, steps = list(input()), 0

def move(position, motion):
    if motion == "R":
        if position == n - 1:
            return 0
        else:
            return position + 1
    if motion == "L":
        if position ==  0:
            return n - 1
        else:
            return position - 1
    
for motion in cat_motion:

    c = move(c, motion)
    if c == r:
        r = move(r, motion)
        steps += 1
    
print(steps)
    
