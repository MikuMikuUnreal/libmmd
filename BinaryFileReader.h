#pragma once

#include <fstream>

class BinaryFileReader : public std::ifstream {
public:
    BinaryFileReader(std::string path);
    std::string ReadStr(int length);
    std::string ReadStr();
    double ReadDouble();
    float ReadFloat();
    int32_t ReadInt();
    uint32_t ReadUInt();
    int16_t ReadShort();
    uint16_t ReadUShort();
    int8_t ReadByte();
    uint8_t ReadUByte();
    uint8_t* ReadBytes(int length);
    float* ReadVector(int length);
    template<typename T> T ReadValue();
    template<typename T> T* ReadValues(int length);
};
