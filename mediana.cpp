#include <iostream>

using namespace std;


int mediana(int tam);

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


  result = mediana(tam);

  if(tam%2 == 1){
    cout << "A mediana possui um valor: " << vetor[result-1] << endl;
  } else{
    cout << "A mediana possui dois valores: " << vetor[result-2] << " e " << vetor[result-1] << endl;
  }


}

int mediana(int tam){
    return tam/2+1;
}