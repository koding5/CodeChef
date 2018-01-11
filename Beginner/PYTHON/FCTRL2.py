#!/usr/bin/env python3

from math import factorial
testcase = input()
testcase = int(testcase)

while testcase > 0:
    a = input()
    a = int(a);
    print(factorial(a))
    testcase = testcase - 1
