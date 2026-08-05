bool verificarBit(int digito, int solucao) {

  unsigned int mascara = 1;    // 0 0 0 0 0 0 0 1
  mascara = mascara << digito; // 0 0 0 0 1 0 0 0

  if (mascara & solucao)
    return true;

  return false;
}
