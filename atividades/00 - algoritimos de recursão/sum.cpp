#include <iostream>

using namespace std;

int tail_recursive_sum(int n1, int n2, int acc) {
  if (n2 == 0) {
    return acc + n1;
  }

  return tail_recursive_sum(n1, n2 - 1, acc + 1);
}

int recursive_sum(int n1, int n2) { return tail_recursive_sum(n1, n2, 0); }

int iterative_sum(int n1, int n2) {
  int acc = 0;

  while (n2 > 0) {
    acc += 1;
    n2 -= 1;
  }

  return acc + n1;
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

  int recursive_result = recursive_sum(n1, n2);
  int iterative_result = iterative_sum(n1, n2);

  cout << "Resultados:" << endl;
  cout << "- Soma com recursão de cauda: " << recursive_result << endl;
  cout << "- Soma iterativa: " << iterative_result << endl;

  return 0;
}
