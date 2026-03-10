#include <iostream>

using namespace std;

int tail_recursive_multiplication(int n1, int n2, int acc) {
  if (n2 == 0) {
    return acc;
  }

  return tail_recursive_multiplication(n1, n2 - 1, acc + n1);
}

int recursive_multiplication(int n1, int n2) {
  return tail_recursive_multiplication(n1, n2, 0);
}

int iterative_sum(int n1, int n2) {
  int acc = 0;

  for (int i = 0; i < n2; i++) {
    acc += n1;
  }

  return acc;
}

int main() {
  int n1, n2;

  cout << "Digite n1: ";
  cin >> n1;
  cout << "Digite n2: ";
  cin >> n2;

  if (n1 < 0 || n2 < 0) {
    cout << "Digite números maiores ou iguais a 0." << endl;
    return -1;
  }

  if (n2 > n1) {
    int temp = n1;
    n1 = n2;
    n2 = temp;
  }

  int recursive_result = recursive_multiplication(n1, n2);
  int iterative_result = iterative_sum(n1, n2);

  cout << "Resultados:" << endl;
  cout << "- Multiplicação com recursão de cauda: " << recursive_result << endl;
  cout << "- Multiplicação iterativa: " << iterative_result << endl;

  return 0;
}
