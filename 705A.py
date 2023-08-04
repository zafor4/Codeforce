numberofProblem=int(input())
time=int(input())
timeleft=240-time
i=5
j=5
count=0
while(i<=timeleft):
    if (count==numberofProblem):
        break

    j+=5
    i+=j
    count += 1
print(count)

