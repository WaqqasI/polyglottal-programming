function FizzBuzz(n: number): void {
  for (let i: number = 0; i <= n; i++) {
    const res: string = (i % 3 == 0 ? 'Fizz' : '') + (i % 5 == 0 ? 'Buzz' : '')
    if (res) console.log(res)
  }
}

FizzBuzz(100)
