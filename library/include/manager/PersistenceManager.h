//
// Created by Mateusz Ostrowski on 14/06/2022.
//

#ifndef PACZKOMAT_PERSISTENCEMANAGER_H
#define PACZKOMAT_PERSISTENCEMANAGER_H

#include <string>
#include <manager/ParcelLockerManager.h>
#include <manager/ParcelManager.h>
#include <manager/ClientManager.h>


class PersistenceManager {
private:
    std::string parcelFileName;
    std::string clientFileName;
    std::string parcelLockerFileName;
    std::string saveDirectory;
    ParcelRepository *parcelRepository;
    ClientRepository *clientRepository;
    ParcelLockerRepository *parcelLockerManager;
public:
    PersistenceManager(std::string parcelFileName, std::string clientFileName,
                       std::string parcelLockerFileName, std::string saveDirectory,
                       ParcelRepository *parcelRepository, ClientRepository *clientRepository,
                       ParcelLockerRepository *parcelLockerManager);

    void loadFromDisk();

    void saveToDisk();
};


#endif //PACZKOMAT_PERSISTENCEMANAGER_H
