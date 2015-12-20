#include <iostream>
#include "BinaryFileReader.h"
#include "Model.h"

void Model::load(std::string path) {
    BinaryFileReader ifs(path);
    header.load(ifs);
    this->setModelName(header.getModelName());
    this->setComment(header.getComment());

#ifdef _DEBUG
    std::cout << this->getModelName() << std::endl;
    std::cout << this->getComment() << std::endl;
#endif
    this->setVertexCount(ifs.ReadUInt());
    for (uint32_t i = 0; i < this->getVertexCount(); i++) {
        Vertex v;
        v.load(ifs);
        this->vertices.push_back(v);
    }
    std::cout << "lol" << std::endl;
}
