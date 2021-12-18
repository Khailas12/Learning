# Divide two integers without using multiplication, division and mod operator

def favors(k, n):
    sign = -1 if ((k < 0) ^ (n < 0)) else 1

    k = abs(k)
    n = abs(n)

    quotient = 0
    while (k >= n):
        k -= n
        quotient += 1

    if sign == -1:
        quotient = - quotient

    return quotient


print(favors(5, 2))
print(favors(2, 1))
