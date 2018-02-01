#!/usr/bin/env python3

testcase = int(input())

while testcase > 0:
    s1,s2 = input().split()
    d = 0
    c = 0
    ls1 = list(s1);
    ls2 = list(s2);
    while (len(ls1)):
        t1=ls1.pop(0);
        t2=ls2.pop(0);
        if t1 == '?' and t2 == '?':
            d = d + 1
        elif t1 != '?' and t2 == '?':
            d = d + 1
        elif t1 == '?' and t2 != '?':
            d = d + 1
        elif t1 != t2:
            c = c + 1
    print(c, (c + d))

    testcase = testcase - 1
