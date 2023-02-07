#include <iostream>
#include <Windows.h>
#include <string>
#include <lm.h>
#include "mudar_nome.hpp"


void mudar_nome(){

    std::wstring nome_novo;
    std::wstring padrao = L"MLTBRMG";

    std::wcout << L"POR FAVOR, INSIRA O SETOR E O ATIVO :  ";
    std::wcin >> nome_novo;

    std::wstring result = padrao + nome_novo;

    if (SetComputerNameEx(ComputerNamePhysicalDnsHostname, result.c_str())){
        std::wcout << L"Nome da máquina alterado com sucesso para: " << result << std::endl;
    }else{
        std::cout << "Erro ao alterar o nome da máquina." << std::endl;
    }
}
