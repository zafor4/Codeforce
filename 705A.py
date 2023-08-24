problems=int (input())
minuits=int (input())
time_Left=240-minuits
timeCount=0
count=0
if (time_Left%5!=0):
    time_Left=time_Left-(time_Left%5)

while(timeCount<time_Left):
    count+=1
    timeCount+=5*count
    if (count==problems):
        break

print(count)    
