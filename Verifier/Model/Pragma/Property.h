//
// Created by wqy on 19-11-26.
//

#ifndef VERIFIER_PROPERTY_H
#define VERIFIER_PROPERTY_H
#include "../Process/Process.h"

namespace esc {
    class Property {
    private:
    };

    class ConfidentialProperty : public Property {
    private:
        Process* process;
        Attribute* attribute;
    };

    class AuthenticityProperty : public Property {
    private:
        struct Value {
            Process* process;
            //Vertex* vertex;
            Attribute* attribute;
        };
        Value* value1;
        Value* value2;
    };
}

#endif //VERIFIER_PROPERTY_H
