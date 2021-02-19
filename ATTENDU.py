# cook your dish here
t=int(input())
for _ in range(t):
    n=int(input())
    b=input()
    if (120-n)+b.count("1")>=90:
        print("YES")
    else:
        print("NO")
        
    
