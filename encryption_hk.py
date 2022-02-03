https://www.hackerrank.com/challenges/encryption/problem?isFullScreen=false

st = str(input())
n = len(st)
x = n**0.5
m = x//1
k= m+1
k = int(k)
m = int(m)
f =[]
if(x!=m):
    for i in range(0,k):
        for j in range(i, n, k):
            print(st[j], end = '')
        print(end = ' ')
else:
    for i in range(0,m):
        for j in range(i, n, m):
            print(st[j], end = '')
        print(end = ' ')
