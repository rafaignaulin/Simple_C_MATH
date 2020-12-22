#include <iostream>

using namespace std;


int busca(int pos, int vet[], int tam);

int main() {
  int tam;
  int valor;
  int result;

  cout << "Digite o tamanho do vetor\n";
  cin >> tam;
  int vetor[tam];

  cout << "Tudo bem, agora digite os valores desse vetor.\n";

  for(int x = 0; x < tam; x++){
    cout << "Digite o valor:" << x+1 << endl;
    cin >> vetor[x];
  }

  cout << "O proximo passo é escolher o valor desejado para busca no vetor.\n";

  cin >> valor;

  result = busca(valor, vetor, tam);

  if(result == -1){
    cout << "Nao foi encontrado esse valor no array.\n";
  } else{
    cout << "O valor buscado esta  na " << result+1 << "posicao do array.\n";
  }


}

int busca(int pos, int vet[], int tam){
  int n;
  for(n = 0; n < tam; n++){
    if(pos == vet[n]) return n;
  }
  return -1;
}