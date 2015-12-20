#include "BinaryFileReader.h"

BinaryFileReader::BinaryFileReader(std::string path) : std::ifstream(path, std::ios::binary) { }

std::string BinaryFileReader::ReadStr(int length) {
    std::string output;
    char* tmp = new char[length];
    read(tmp, length);

    for (int i = 0; i < length; i++) {
        if (tmp[i] == 0x00) break;
        output += tmp[i];
    }

    delete tmp;
    return output;
}

std::string BinaryFileReader::ReadStr() {
    std::string output;
    uint8_t tmp = (uint8_t)0xFF;

    while (tmp != 0x00) {
        read((char*)&tmp, sizeof(tmp));
        output += tmp;
    }

    return output;
}

double BinaryFileReader::ReadDouble() {
    return ReadValue<double>();
}

float BinaryFileReader::ReadFloat() {
    return ReadValue<float>();
}

int32_t BinaryFileReader::ReadInt() {
    return ReadValue<int32_t>();
}

uint32_t BinaryFileReader::ReadUInt() {
    return ReadValue<uint32_t>();
}

int16_t BinaryFileReader::ReadShort() {
    return ReadValue<int16_t>();
}

uint16_t BinaryFileReader::ReadUShort() {
    return ReadValue<uint16_t>();
}

int8_t BinaryFileReader::ReadByte() {
    return ReadValue<int8_t>();
}

uint8_t BinaryFileReader::ReadUByte() {
    return ReadValue<uint8_t>();
}

uint8_t* BinaryFileReader::ReadBytes(int length) {
    return ReadValues<uint8_t>(length);
}

float* BinaryFileReader::ReadVector(int length) {
    return ReadValues<float>(length);
}

template<typename T>
T* BinaryFileReader::ReadValues(int length) {
    T* values = new T[length];
    read((char*)&values, sizeof(T)*length);
    return values;
}

template<typename T>
T BinaryFileReader::ReadValue() {
    T value;
    read((char*)&value, sizeof(value));
    return value;
}
