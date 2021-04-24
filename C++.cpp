
#include <iostream>

int main(int argc, char **argv) {

  std::cout << "Input an integer";

  int num;
  std::cin >> num;

  if (!num) {
    std::cout << "Need a number arg";
    return -1;
  }
  for (int i = 1; i <= num; i++) {
    std::cout << "\n";
    if (i % 3 == 0)
      std::cout << "Fizz";
    if (i % 5 == 0)
      std::cout << "Buzz";
    if ((i % 3 && i % 5) != 0)
      std::cout << i;
  }

  return 0;
}
