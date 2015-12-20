#include <string>
#include <iostream>
#include "PMDError.h"
#include "Model.h"

int main(int argc, char** argv) {
    try {
        std::string path = "D:/hexProjects/pmd/model.pmd";
        Model* model = new Model();
        model->load(path);
        delete model;
    }
    catch (PMDError& e) {
        std::cout << e.what() << std::endl;
    }
}
