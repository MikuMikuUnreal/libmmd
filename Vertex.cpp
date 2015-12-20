#include "Vertex.h"
#include "BinaryFileReader.h"

void Vertex::load(BinaryFileReader& ifs) {
    this->position[0] = ifs.ReadFloat();
    this->position[1] = ifs.ReadFloat();
    this->position[2] = ifs.ReadFloat();
    this->normal[0] = ifs.ReadFloat();
    this->normal[1] = ifs.ReadFloat();
    this->normal[2] = ifs.ReadFloat();
    this->uv[0] = ifs.ReadFloat();
    this->uv[1] = ifs.ReadFloat();
    this->bones[0] = ifs.ReadUShort();
    this->bones[1] = ifs.ReadUShort();
    this->weight = ifs.ReadByte();
    this->enable_edge = ifs.ReadByte();
}
