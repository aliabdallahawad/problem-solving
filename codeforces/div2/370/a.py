n = int(input())
arr = [int(x) for x in input().split()]
flag = True
ret = [arr[n-1]]
i = n-2
while i >= 0:
  ret.insert(0, arr[i] + arr[i+1])
  i = i - 1
print(ret)