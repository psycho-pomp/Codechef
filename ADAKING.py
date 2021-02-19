# cook your dish here
t=int(input())
for _ in range(t):
    k=int(input())
    for i in range(8):
        for j in range(8):
            if i==0 and j==0:
                print('O',end='')
                k-=1
            elif k!=0:
                print('.',end='')
                k-=1
            elif k==0:
                print("X",end='')
        print()

                
                
