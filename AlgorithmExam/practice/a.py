n, k = map(int, input().split())

# 카운트 초기화
cnt = 0

for i in range(1, n+1):

    # 약수 일 경우
    if n % i == 0:
        cnt += 1

    # k번째 해당하는 경우
    if cnt == k:
        print(i)
        break
else:
    print(-1)
