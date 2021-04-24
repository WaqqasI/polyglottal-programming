FizzBuzz <- 1:15
output <- vector()

for (i in FizzBuzz) {
  output[i] <- ""

  if (i %% 3 == 0) { output[i] <- paste0(output[i], "Fizz") }
  if (i %% 5 == 0) { output[i] <- paste0(output[i], "Buzz") }

  if (output[i] == "") {output[i] <- i}
}

print(output)
