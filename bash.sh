read n
echo "input a number"
if [[ -z ${n+1} ]]; then n = 15; fi
seq 5 | sed '0~5s/.*/Buzz/;0~3s/.*/Fizz/;0~15s/.*/FizzBuzz/'
