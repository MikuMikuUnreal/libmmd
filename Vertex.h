#pragma once

#include <cstdint>
class BinaryFileReader;

class Vertex {
    float position[3] = { 0.0f, 0.0f, 0.0f };
    float normal[3] = { 0.0f, 0.0f, 0.0f };
    float uv[2] = { 0.0f, 0.0f };
    uint16_t bones[2] = { (uint16_t) -1, (uint16_t) -1 };
    int8_t weight = 0;
    int8_t enable_edge = 0;

public:
    void load(BinaryFileReader& ifs);
};
