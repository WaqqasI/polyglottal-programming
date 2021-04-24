const FizzBuzz = (n) => {
  for (let i = 0; i <= n; i++) {
    const res = (i % 3 == 0 ? 'Fizz' : '') + (i % 5 == 0 ? 'Buzz' : '')
    if (res) console.log(res)
  }
}

FizzBuzz(100)
