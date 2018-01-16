#!/usr/bin/env python3

from operator import itemgetter

testcase = int(input())

while testcase > 0:
    a,b = map(int, input().split())
    print(a+b)
    testcase = testcase - 1
