def FizzBuzz(n):
  for i in range(0, n):
    res=""
    if (n % 3) == 0:
      res+="Fizz"
    if (n % 5) == 0:
      res+="Buzz"
    if len(res) > 0:
      print(res)
    n=n+1
FizzBuzz(15)