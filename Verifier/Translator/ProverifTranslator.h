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
        void generateProverif();
        bool saveInFile(string path);
        void setModel(Model* _model);
    };
}

#endif //VERIFIER_PROVERIFTRANSLATOR_H
