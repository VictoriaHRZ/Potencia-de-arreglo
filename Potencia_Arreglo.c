#define N 10
int arreglo[N] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};

int potencia(int i)
{
  int resultado = arreglo[i];
  for (int j = 0; j < i; j++)
  {
    resultado = resultado * arreglo[i];
  }
  return resultado;
}

void numero(int i)
{
  arreglo[i] = potencia(i);
  return;
}

int main()
{
  for (int i = 0; i < N; i++)
  {
    numero(i);
  }
  return 0;
}