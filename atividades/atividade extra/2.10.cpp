#include <vector>

long long intercalaEConta(std::vector<int> &A, int inicio, int meio, int fim) {
  std::vector<int> esq(A.begin() + inicio, A.begin() + meio + 1);
  std::vector<int> dir(A.begin() + meio + 1, A.begin() + fim + 1);

  int i = 0, j = 0, k = inicio;
  long long inversoes = 0;

  while (i < esq.size() && j < dir.size()) {
    if (esq[i] <= dir[j]) {
      A[k++] = esq[i++];
    } else {
      A[k++] = dir[j++];
      // Os elementos restantes em 'esq' sao todos maiores que dir[j]
      inversoes += (esq.size() - i);
    }
  }

  while (i < esq.size()) {
    A[k++] = esq[i++];
  }
  while (j < dir.size()) {
    A[k++] = dir[j++];
  }

  return inversoes;
}

long long contaInversoes(std::vector<int> &A, int inicio, int fim) {
  long long inversoes = 0;
  if (inicio < fim) {
    int meio = inicio + (fim - inicio) / 2;
    inversoes += contaInversoes(A, inicio, meio);
    inversoes += contaInversoes(A, meio + 1, fim);
    inversoes += intercalaEConta(A, inicio, meio, fim);
  }
  return inversoes;
}
