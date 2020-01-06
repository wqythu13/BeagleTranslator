//
// Created by wqy on 20-1-6.
//

#ifndef VERIFIER_PROVERIFTRANSLATOR_H
#define VERIFIER_PROVERIFTRANSLATOR_H
#include "Translator.h"
#include "../ProverifModel/ProverifModel.h"
#include <string>
using std::string;

namespace esc {
    class ProverifTranslator : public Translator {
    private:
        ProverifModel* proverifModel;

    public:
        void makingStartingProcess();
        void makeHeader();
        void makeBlocks();
        bool saveInFile(string path);
    };
}

#endif //VERIFIER_PROVERIFTRANSLATOR_H
