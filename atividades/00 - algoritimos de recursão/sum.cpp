#include <iostream>

using namespace std;

int tail_recursive_sum(int number, int accumulator) {
  if (number == 0) {
    return accumulator;
  }

  return tail_recursive_sum(number - 1, accumulator + number);
}

int recursive_multiplicacion(int number) {
  return tail_recursive_sum(number, 0);
}

int iterative_multiplication(int number) {
  int accumulator = 0;

  for (int current = number; current > 0; current--) {
    accumulator += current;
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

  int recursive_result = recursive_multiplicacion(number);
  int iterative_result = iterative_multiplication(number);

  cout << "Resultados:" << endl;
  cout << "- Soma com recursão de cauda: " << recursive_result << endl;
  cout << "- Soma iterativa: " << iterative_result << endl;

  return 0;
}
