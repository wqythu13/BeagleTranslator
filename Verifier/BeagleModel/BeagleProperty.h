//
// Created by wqy on 19-12-3.
//

#ifndef VERIFIER_BEAGLEPROPERTY_H
#define VERIFIER_BEAGLEPROPERTY_H
#include <string>
using std::string;

namespace esc {
    class BeagleProperty {
    private:
        string property;

    public:
        string getProperty() {return this->property;}
        void setProperty(string _property);
    };
}

#endif //VERIFIER_BEAGLEPROPERTY_H
