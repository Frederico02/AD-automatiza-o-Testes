#include <iostream>
#include <Windows.h>
#include <string>



std::wstring busca_nome() {

    WCHAR szComputerName[MAX_COMPUTERNAME_LENGTH + 1];
    DWORD nSize = MAX_COMPUTERNAME_LENGTH + 1;

    if (GetComputerNameW(szComputerName, &nSize)) {
    std::wstring nome = szComputerName;
    return(nome);
    }
    else {
        std::cout << "Erro ao obter o nome da maquina." << std::endl;
    }
}
