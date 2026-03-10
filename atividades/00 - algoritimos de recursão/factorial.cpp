#include <iostream>

using namespace std;

int tail_recursive_factorial(int n, int acc) {
  if (n == 1 || n == 0) {
    return acc;
  }

  return tail_recursive_factorial(n - 1, acc * n);
}

int recursive_factorial(int n) { return tail_recursive_factorial(n, 1); }

int iterative_factorial(int n) {
  int acc = 1;

  for (int i = n; i > 1; i--) {
    acc *= i;
  }

  return acc;
}

int main() {
  int n;

  cout << "Digite n: ";
  cin >> n;

  if (n < 0) {
    cout << "Digite um número maior ou igual a 0." << endl;
    return -1;
  }

  int recursive_result = recursive_factorial(n);
  int iterative_result = iterative_factorial(n);

  cout << "Resultados:" << endl;
  cout << "- Fatorial com recursão de cauda: " << recursive_result << endl;
  cout << "- Fatorial iterativo: " << iterative_result << endl;

  return 0;
}
