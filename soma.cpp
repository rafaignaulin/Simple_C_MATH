#include <iostream>

using namespace std;


int soma(int pos, int vet1[], int vet2[], int tam);

int main() {
  int tam;
  int elem;
  int result;

  cout << "Digite o tamanho dos vetores \n";
  cin >> tam;
  int vetor1[tam];
  int vetor2[tam];

  cout << "Tudo bem, agora digite os valores do vetor 1.\n";

  for(int x = 0; x < tam; x++){
    cout << "Digite o valor:" << x+1 << endl;
    cin >> vetor1[x];
  }


  cout << "Agora digite os valores do vetor 2.\n";

  for(int x = 0; x < tam; x++){
    cout << "Digite o valor:" << x+1 << endl;
    cin >> vetor2[x];
  }



  cout << "O proximo passo é escolher o elemento desejado para a soma nos vetores.\n";

  cin >> elem;

  result = soma(elem-1, vetor1, vetor2, tam);

  if(result == -1){
    cout << "Nao foi possivel realizar essa soma.\n";
  } else{
    cout << "O valor da soma dos dois vetores na posicao " << elem << " resulta em : " << result << endl;
  }


}

int soma(int pos, int vet1[], int vet2[], int tam){
  int sum=0;

  if(pos <= tam){

    sum = vet1[pos] + vet2[pos];

    return sum;

  }
  return -1;

}