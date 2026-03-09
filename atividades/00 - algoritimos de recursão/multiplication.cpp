#include <iostream>

using namespace std;

int tail_recursive_multiplication(int number, int accumulator) {
  if (number == 0) {
    return accumulator;
  }

  return tail_recursive_multiplication(number - 1, accumulator * number);
}

int recursive_multiplication(int number) {
  return tail_recursive_multiplication(number, 1);
}

int iterative_multiplication(int number) {
  int accumulator = 1;

  for (int current = number; current > 0; current--) {
    accumulator *= current;
  }

  return accumulator;
}

int main() {
  int number;

  cout << "Digite um número: ";
  cin >> number;

  if (number < 0) {
    cout << "Digite um número maior ou igual a 0.";
    return 1;
  }

  int recursive_result = recursive_multiplication(number);
  int iterative_result = iterative_multiplication(number);

  cout << "Resultados:" << endl;
  cout << "- Multiplicação com recursão de cauda: " << recursive_result << endl;
  cout << "- Multiplicação iterativa: " << iterative_result << endl;

  return 0;
}
