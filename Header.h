#pragma once

#include <string>
class BinaryFileReader;

class Header {
    const std::string PMD_SIGN = "Pmd";
    const float SUPPORTED_VERSION = 1.0f;
    std::string sign;
    float version;
    std::string model_name;
    std::string comment;

public:
    void load(BinaryFileReader& ifs);
    void setSign(std::string value) { this->sign = value; }
    std::string getSign() { return sign; }
    void setModelName(std::string value) { this->model_name = value; }
    std::string getModelName() { return model_name; }
    void setVersion(float value) { this->version = value; }
    float getVersion() { return version; }
    void setComment(std::string value) { this->comment = value; }
    std::string getComment() { return comment; }
};
