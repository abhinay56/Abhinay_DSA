a=[2, 1, 1, 5, 6, 2, 3, 1]
n=len(a)
longest=0
for i in range(1, n - 1):
    if a[i] > a[i - 1] and a[i] > a[i + 1]:
        left = i - 1
        while left > 0 and a[left] > a[left - 1]:
            left -= 1
        right = i + 1
        while right < n - 1 and a[right] > a[right + 1]:
            right += 1
        longest = max(longest, right - left + 1)
if longest >= 3:
    print(longest)
else:
    print(0)
