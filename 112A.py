def stringComp(a,b):
    if a>b:
        return 1
    elif a<b:
        return -1
    else :
        return 0


a=input()
b=input()
n1=a.lower()
n2=b.lower()

stringComp(n1,n2)
print(stringComp(n1,n2))