// Random Rectangle
#include <iostream>
#include <ctime>
#include <string>
int main()
{
  unsigned seed = time(0);
  srand(seed);
  const int length = 40;
  int width = rand() % length + 1;
  std::string rectangle_line;
  rectangle_line.assign(width, '#');
  std::cout << rectangle_line << '\n';
  std::cout << rectangle_line << std::endl;
  std::cout << rectangle_line << std::endl;
}
