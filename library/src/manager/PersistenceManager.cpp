//
// Created by Mateusz Ostrowski on 14/06/2022.
//

#include "manager/PersistenceManager.h"

#include <utility>

void PersistenceManager::loadFromDisk() {
    parcelRepository->load(saveDirectory+""+parcelFileName);
    parcelLockerManager->load(saveDirectory+""+parcelLockerFileName);
    clientRepository->load(saveDirectory+""+clientFileName);

}

void PersistenceManager::saveToDisk() {
    parcelRepository->save(saveDirectory+""+parcelFileName);
    parcelLockerManager->save(saveDirectory+""+parcelLockerFileName);
    clientRepository->save(saveDirectory+""+clientFileName);
}

PersistenceManager::PersistenceManager(std::string parcelFileName, std::string clientFileName,
                                       std::string parcelLockerFileName, std::string saveDirectory,
                                       ParcelRepository *parcelRepository, ClientRepository *clientRepository,
                                       ParcelLockerRepository *parcelLockerManager) : parcelFileName(std::move(parcelFileName)),
                                                                                      clientFileName(std::move(clientFileName)),
                                                                                      parcelLockerFileName(std::move(
                                                                                              parcelLockerFileName)),
                                                                                      saveDirectory(std::move(saveDirectory)),
                                                                                      parcelRepository(
                                                                                              parcelRepository),
                                                                                      clientRepository(
                                                                                              clientRepository),
                                                                                      parcelLockerManager(
                                                                                              parcelLockerManager) {}
