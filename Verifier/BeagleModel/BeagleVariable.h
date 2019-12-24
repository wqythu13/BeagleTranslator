//
// Created by wqy on 19-12-3.
//

#ifndef VERIFIER_BEAGLEVARIABLE_H
#define VERIFIER_BEAGLEVARIABLE_H
#include <string>
using std::string;

namespace esc {
    class BeagleVariable {
    private:
        string name;
        //Type type;
        int len;

    public:
        void setName(string _name);
        void setLen(int _len);
        string getName() {return this->name;}
    };
}

#endif //VERIFIER_BEAGLEVARIABLE_H
