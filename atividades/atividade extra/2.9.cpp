#include <vector>

// O(n^2)

double avaliaPolinomioIngenuo(const std::vector<double> &a, double x) {
  double soma = 0.0;
  int n = a.size();
  for (int i = 0; i < n; i++) {
    double potencia = 1.0;
    for (int j = 0; j < i; j++) {
      potencia *= x;
    }
    soma += a[i] * potencia;
  }
  return soma;
}

// O(n)

double avaliaPolinomioHorner(const std::vector<double> &a, double x) {
  int n = a.size();
  if (n == 0) {
    return 0.0;
  }
  double resultado = a[n - 1];
  for (int i = n - 2; i >= 0; i--) {
    resultado = resultado * x + a[i];
  }
  return resultado;
}
