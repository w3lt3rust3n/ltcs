#include <iostream>
#include "elcheats.h"

using namespace std;

ElCheats::ElCheats()
{
}

ElCheats::~ElCheats()
{
}

void ElCheats::echoes_cheatsheet_display()
{
    cout << "\033[1;30m | Linux Terminal Cheat Sheets \033[0m\n"    
        "\033[1;30m |\033[0m\033[1;33m Echoes Package Manager :\033[0m\n"
        "\033[1;30m |\033[0m\033[1;30m -------------------------------------\033[0m\n"
        "\033[1;30m |\033[0m Show informations \t\t\t\t\033[31m info \033[0m\n"
        "\033[1;30m |\033[0m Show help screen \t\t\t\t\033[31m help \033[0m\n"
        "\033[1;30m |\033[0m Install fresh core packages \t\t\t\033[31m installcore \033[0m\n"
        "\033[1;30m |\033[0m Install a package \t\t\t\t\033[31m install \033[32mpkg \033[0m\n"
        "\033[1;30m |\033[0m Search a package in repositories \t\t\033[31m search \033[32mpkg\033[0m\n"
        "\033[1;30m |\033[0m Install a package \t\t\t\t\033[31m install \033[32mpkg\033[0m\n"
        "\033[1;30m |\033[0m Check an Echoes package \t\t\t\033[31m check-pkg \033[32mpkg\033[0m\n";
}

void ElCheats::npk_cheatsheet_display()
{
    cout << "\033[1;30m | Linux Terminal Cheat Sheets \033[0m\n"    
        "\033[1;30m |\033[0m\033[1;33m Entropyx Packager Kit :\033[0m\n"
        "\033[1;30m |\033[0m\033[1;30m -------------------------------------\033[0m\n"
        "\033[1;30m |\033[1;30m Usage:\t\033[0;31m\033[0m \033[33m-s\033[0m (one of the sheet bellow)\033[0m \n"
        "\033[1;30m |\033[0m Edit your packager informations \t\t\t\t\033[31m packager-info \033[0m\n"
        "\033[1;30m |\033[0m Create an echoes package \t\t\t\t\033[31m new-pkg \033[0m\n"
        "\033[1;30m |\033[0m Start Entropyx Linux in sandbox mode \t\t\t\033[31m sandbox \033[0m\n"
        "\033[1;30m |\033[0m Clean npk working directory \t\t\t\t\033[31m clean\n"
        "\033[1;30m +--------------------------------------------------------------------------------------------------------------------------+"
        "\033[1;30m |\033[0m Search a package in repositories \t\t\033[31m search \033[32mpkg\033[0m\n"
        "\033[1;30m |\033[0m Install a package \t\t\t\t\033[31m install \033[32mpkg\033[0m\n"
        "\033[1;30m |\033[0m Check an Echoes package \t\t\t\033[31m check-pkg \033[32mpkg\033[0m\n";
}
