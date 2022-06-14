//
// Created by Piotr on 13/06/2022.
//

#include "repository/ParcelLockerRepository.h"

void ParcelLockerRepository::load(const std::string& filePath) {
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

void ParcelLockerRepository::save(const std::string& filePath) {
    std::ofstream f(filePath);
    std::string sep = ",";
    for(auto locker : vector){
        f << locker->getId() << sep << locker->getAddress()->getCity() << sep << locker->getAddress()->getStreet() << locker->getAddress()->getNumber() << sep << std::endl;
    }
    f.close();
}
