repeat
  io.write("Input a number: \n")
  num = io.read()
until tonumber(num)

n = tonumber(num)
for i = 1, n, 1 do
  local res = "\n"
  if i % 3 == 0 then
    res = res .. "Fizz"
  end
  if i % 5 == 0 then
    res = res .. "Buzz"
  end
  if res == "\n" then
    res = res .. tostring(i)
  end
  io.write(res)
end
