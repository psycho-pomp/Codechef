# cook your dish here
t=int(input())
for _ in range(t):
    x1,x2,x3,v1,v2=map(int,input().split())
    t1=(x3-x1)/v1
    t2=(x2-x3)/v2
    if t1>t2:
        print("Kefa")
    elif t2>t1:
        print("Chef")
    else:
        print("Draw")
