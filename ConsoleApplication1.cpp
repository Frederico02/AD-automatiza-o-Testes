#include <iostream>
#include <string>
#include "busca_nome.hpp"
#include "mudar_nome.hpp"
#include "adicionar_maquina_ad.hpp"

using namespace std;
int main(){
	wstring nome;
    nome = busca_nome();
	mudar_nome();
	nome = busca_nome();
	adicionar_maquina_ad(nome);

	return 0;
}