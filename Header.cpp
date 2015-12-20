#include <iostream>
#include "BinaryFileReader.h"
#include "InvalidFileError.h"
#include "InvalidVersionError.h"
#include "Header.h"

void Header::load(BinaryFileReader& ifs) {
    this->setSign(ifs.ReadStr(3));

    if (this->getSign() != this->PMD_SIGN)
        throw InvalidFileError(); {
    }

    this->setVersion(ifs.ReadFloat());

    if (this->getVersion() != this->SUPPORTED_VERSION) {
        throw InvalidVersionError();
    }

    this->setModelName(ifs.ReadStr(20));
    this->setComment(ifs.ReadStr(256));

#ifdef _DEBUG
    std::cout << this->getSign() << std::endl;
    std::cout << this->getVersion() << std::endl;
    std::cout << this->getModelName() << std::endl;
    std::cout << this->getComment() << std::endl;
#endif
}
