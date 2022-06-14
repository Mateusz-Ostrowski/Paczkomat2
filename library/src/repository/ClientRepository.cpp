//
// Created by Piotr on 13/06/2022.
//

#include <repository/ClientRepository.h>

#include "repository/ClientRepository.h"

void ClientRepository::load(const std::string& filePath) {
    std::string line;
    std::ifstream myfile(filePath);
    if (myfile.is_open())
    {
        while ( getline (myfile,line) )
        {
            std::cout << line << '\n';
        }
        myfile.close();
    }

    else std::cout << "Unable to open file";

}

void ClientRepository::save(const std::string& filePath) {
    std::ofstream f(filePath);
    for(auto client : vector){
        f << client->getId() << "," << client->getFirstName() << "," << client->getLastName() << "," << client->getPhoneNumber() << std::endl;
    }
    f.close();
}

