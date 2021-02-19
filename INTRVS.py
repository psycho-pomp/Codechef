# cook your dish here
import math
t=int(input())
for _ in range(t):
    n,k=map(int,input().split())
    l=list(map(int,input().split()))
    count_solved=0
    count_k=0
    count_bot=0
    for sec in l:
        if sec>=0:
            count_solved+=1
            if sec>k:
                count_k+=1
            if sec<=1:
                count_bot+=1
    
    if count_solved<math.ceil(n/2):
        print("Rejected")
    elif count_k>=1:
        print("Too Slow")
        
        
    elif count_bot==n:
        print("Bot")
    else:
        print("Accepted")
                
                
            
            
        
    
