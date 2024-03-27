def gcd(a, b)
  return a if b == 0
  return gcd(b, a % b)
end