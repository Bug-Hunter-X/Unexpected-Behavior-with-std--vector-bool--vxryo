#include <vector>
#include <iostream>

int main() {
  //Instead of std::vector<bool>, use a more conventional approach:
  std::vector<bool> vec1;
  vec1.push_back(true);
  vec1.push_back(false);
  std::vector<int> vec2;
  vec2.push_back(1);
  vec2.push_back(0);
  std::cout << "vec1[0]: " << vec1[0] << std::endl; // This might be optimized and not give the expected result 
  std::cout << "vec2[0]: " << vec2[0] << std::endl; // This will always print 1
  return 0;
}
