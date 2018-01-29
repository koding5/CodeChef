#!/usr/bin/env python3

from operator import itemgetter

testcase = int(input())

total={1: 6, 3 : 6, 5 : 6, 4 : 9, 8 : 8, 6 : 7, 9 : 10, 0 : 5 }
while testcase > 0:
    count=0
    h,c,t = map(float, input().split())
    h = int(h)
    t = int(t)
    if h > 50:
        count = count + 1
    if c < 0.7:
        count = count + 3
    if t > 5600:
        count = count + 5;
    print(total[count])

    testcase = testcase - 1
