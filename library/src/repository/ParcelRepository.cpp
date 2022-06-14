//
// Created by Piotr on 13/06/2022.
//

#include "repository/ParcelRepository.h"

void ParcelRepository::load(const std::string& filePath) {
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

void ParcelRepository::save(const std::string& filePath) {
    std::ofstream f(filePath);
    std::string sep = ",";
    for(auto parcel : vector){
        f << parcel->getId() << sep << parcel->getCode() << parcel->getWeight() << sep << parcel->getSizeX() << sep << parcel->getSizeY() << sep << parcel->getSizeZ() << sep << parcel->getStatus() << std::endl;
    }
    f.close();
}