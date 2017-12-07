#!/usr/bin/env python
# -*- coding: utf-8 -*-

import matplotlib.pyplot as plt

a = []

f = open("test.txt", "rU")
for line in f.xreadlines():
    a += [[x for x in line.split(' ', -1) if not line == ''] for line in line.split('\n', -1) if not line == '']

fig = plt.figure()
ax1 = fig.add_subplot(1,1,1)

plt.savefig('fractal.png')
