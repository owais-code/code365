

t = int(input())
while(t):
    s = str(input())
    b = ("".join(sorted(s)))
    s = s.replace(b[0], "", 1)
    print(b[0], s[::])
    t-=1
