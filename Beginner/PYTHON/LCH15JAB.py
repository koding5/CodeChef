#!/usr/bin/env python3

from operator import itemgetter

testcase = int(input())

while testcase > 0:
    count=0
    high=0
    string = str(input())
    l = len(string)
    for i in range(l):
        count = string.count(string[i])
        if count > high:
            high = count
            if high == l:
                break
            if high >= (l/2):
                break

    if high == l:
        print("YES")
    elif high == (l - high):
        print("YES");
    else:
        print("NO");

    testcase = testcase - 1
