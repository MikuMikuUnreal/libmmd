#pragma once

#include <string>
#include <vector>
#include "Header.h"
#include "Vertex.h"

class Model {
    Header header;
    std::string model_name;
    std::string comment;
    uint32_t vertex_count;
    std::vector<Vertex> vertices;

public:
    void load(std::string path);
    void setModelName(std::string value) { this->model_name = value; }
    std::string getModelName() { return this->model_name; }
    void setComment(std::string value) { this->comment = value; }
    std::string getComment() { return this->comment; }
    void setVertexCount(uint32_t value) { this->vertex_count = value; }
    uint32_t getVertexCount() { return this->vertex_count; }
};
