//
// Created by wqy on 19-11-17.
//

#ifndef VERIFIER_TRANSLATOR_H
#define VERIFIER_TRANSLATOR_H

#include "../Model/Model.h"

namespace esc {
    class Translator {
    protected:
        Model* model;

    public:
        Translator() {};
        virtual void setModel(Model* _model) = 0;
    };
}

#endif //VERIFIER_TRANSLATOR_H
