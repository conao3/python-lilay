#include <iostream>

typedef long long ll;

int main() {
  ll a, b, c, d;
  std::cin >> a >> b >> c >> d;
  {
    std::string __a;
    if (a <= d && c <= b) {
      __a = "Yes";
    } else {
      __a = "No";
    }
    std::cout << __a << std::endl;
  }
}
