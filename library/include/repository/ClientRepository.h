//
// Created by Piotr on 13/06/2022.
//

#ifndef CARRENTAL_CLIENTREPOSITORY_H
#define CARRENTAL_CLIENTREPOSITORY_H
#include "Repository.h"
#include "model/Client.h"

class ClientRepository: public Repository<Client> {
public:
    void load(const std::string &filePath) override;

    void save(const std::string &filePath) override;

};


#endif //CARRENTAL_CLIENTREPOSITORY_H
