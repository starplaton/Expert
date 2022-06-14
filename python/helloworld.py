T = int(input())
cute = 0

for _ in range(T):
    if int(input()) == 1:
        cute += 1

if cute > T//2:
    print("Junhee is cute!")
else:
    print("Junhee is not cute!")