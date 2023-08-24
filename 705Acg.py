
problems=int(input())
times=int(input())
totaltime=240
timeleft=totaltime-times
count=0
for i in range(1,problems+1):
    problemtime=5*i
    if problemtime<=timeleft:
        count+=1
        timeleft-=problemtime

    else :
        break

print(count)        
