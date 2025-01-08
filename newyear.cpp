#include "std.h"

int main() {
  Numbers numbersTo10{1, 2, 3, 4, 5, 6, 7, 8, 9};
  Nat total{};
  for (auto n : numbersTo10) total += n*n*n;
  cout << total << endl;
  Nat max{100}, year{2025};
  Numbers numbersToMax{};
  numbersToMax.reserve(max);
  for(int i{}; i < max; ++i) numbersToMax.push_back(i+1); // 1 to 100
  Nat count{};
  for (auto a : numbersToMax) {
    for (auto b : numbersToMax) {
      if (b < a) continue;
      for (auto c : numbersToMax) {
	if (c < b) continue;
	if (a*a + b*b + c*c == year) {
	  ++count;
	  cout << a << " " << b << " " << c << endl;
	}
      }
    }
  }
  cout << "Got " << count << " prisms.\n";
  return 0;
}
