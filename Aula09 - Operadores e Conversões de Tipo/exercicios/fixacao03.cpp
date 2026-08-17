#include <iostream>

int main(int argc, char *argv[]) {

  const int HORAS_POR_DIAS{24};
  const int MINUTOS_POR_HORA{60};
  const int SEGUNDOS_POR_MINUTO{60};

  long long totalSegundos;

  std::cout << "Entre com o númeroem segundos: ";
  std::cin >> totalSegundos;

  const int SEGUNDOS_POR_HORA{MINUTOS_POR_HORA * SEGUNDOS_POR_MINUTO};
  const int SEGUNDOS_POR_DIA{HORAS_POR_DIAS * SEGUNDOS_POR_HORA};

  long long dias = totalSegundos / SEGUNDOS_POR_DIA;
  long long resto = totalSegundos % SEGUNDOS_POR_DIA;

  long long horas = resto / SEGUNDOS_POR_HORA;
  resto %= SEGUNDOS_POR_HORA;

  long long minutos = resto / SEGUNDOS_POR_MINUTO;
  long long segundos = resto % SEGUNDOS_POR_MINUTO;

  std::cout << totalSegundos << " segundos = " << dias << " dias, " << horas
            << " horas," << minutos << " minutos e " << segundos << " segundos."
            << std::endl;

  return 0;
}
