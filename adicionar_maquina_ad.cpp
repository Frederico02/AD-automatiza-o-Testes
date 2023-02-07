
#include <iostream>
#include <Windows.h>
#include <string>
#include <lm.h>
#include "adicionar_maquina_ad.hpp"

void adicionar_maquina_ad(std::wstring& nome) {

    NET_API_STATUS nStatus;
 
    //LOCALGROUP_MEMBERS_INFO_0 AGUARDANDO_F1;

    wchar_t wszDomain[] = L"MLTBR.LOCAL";
    LPWSTR pwszDomain = wszDomain;

    LPWSTR pwszMachine = const_cast<LPWSTR>(nome.c_str());

    wchar_t wszUser[] = L"frederico.almeida";
    LPWSTR pwszUser = wszUser;
    wchar_t wszPassword[] = L"*Fred0202*";
    LPWSTR pwszPassword = wszPassword;

    NETSETUP_JOIN_STATUS joinStatus;
    memset(&joinStatus, 0, sizeof(NETSETUP_JOIN_STATUS));
    nStatus = NetJoinDomain(NULL, pwszDomain, pwszMachine, pwszUser, pwszPassword, NULL);

    if (nStatus == NERR_Success) {
        std::cout << "Maquina adicionada ao dominio com sucesso!" << std::endl;
    }
    else {
        std::cout << "Erro ao adicionar maquina ao dominio. Codigo de erro: " << nStatus << std::endl;
    }
}

