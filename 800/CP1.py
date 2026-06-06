# t = int(input("enter the test case"))
# a = []
# while t > 0:
#   a = []
#   t -= 1
#   n = int(input("enter numberof boxes: "))
#   l = int(input("AMax lngth "))
#   for i in range(n):
#     k = int(input("Enter each character om box "))
#     a.append(k)
#   if(a==sorted(a)):
#     print("YES")
#     exit()
#   l2=a[:]
#   for i in range(n):
#     for j in range(l):
#       a[0:j+1]=sorted(a[0:j+1])
#       a[j:n-1]=sorted(a[j:n-1])
#       if(sorted(l2)==a):
#         print("YES")
#         exit()
#       else:
#         print("NO")
#         exit()

t = int(input())
while t > 0:
    t -= 1
    n, k = map(int, input().split())
    a = list(map(int, input().split()))
    if k == 1:
        if a == sorted(a):
            print("YES")
        else:
            print("NO")
    else:
        print("YES")