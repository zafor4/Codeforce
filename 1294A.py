t = int(input())

for i in range(t):
    nums = list(map(int, input().split()))
    n = nums[3]
    
    nums = nums[:3]
    threshold = max(nums) * 3
    ans = n - (threshold - sum(nums))
    
    if ans < 0:
        print("NO")
    else:
        if ans % 3 == 0:
            print("YES")
        else:
            print("NO")
