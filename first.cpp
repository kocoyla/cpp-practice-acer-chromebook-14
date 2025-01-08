#include "std.h"

int main() {
  Strings msgs{"We dig", "emacs", "Makefile", "gnu c++", "Linux"};
  for (auto msg : msgs) cout << msg << ", ";
  cout << "and ChromeBooks!\n";

  Numbers nums{3, 1, 4, 1, 5};
  nums.push_back(0);
  nums.push_back(999);
  cout << "Some nums: ";
  for (auto num : nums) cout << num << ", ";
  cout << ". Total of " << nums.size() << " numbers.\n";
  return 0;
}
