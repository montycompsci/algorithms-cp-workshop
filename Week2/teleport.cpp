#include <iostream>

using namespace std;

int main() {

  // This connects the files to standard input and output
  freopen("teleport.in", "r", stdin);
  freopen("teleport.out", "w", stdout);

  // Reading in input and initializing values
  int a, b, x, y;
  cin >> a >> b >> x >> y;

  // Finding the minimum of three potential paths between positions a and b
  cout << min(abs(a - b),
              min(abs(a - x) + abs(b - y), abs(b - x) + abs(a - y)));

  return 0;
}
