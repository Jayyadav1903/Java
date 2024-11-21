n=int(input())
m=n
s=0
while n!=0:
    d=n%10
    s=(s*10)+d
    n=n//10
if (s==m):
    print("Palindrome")
else:
    print(" Not Palindrome")