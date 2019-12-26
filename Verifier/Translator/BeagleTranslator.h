//
// Created by wqy on 19-11-17.
//

#ifndef VERIFIER_BEAGLETRANSLATOR_H
#define VERIFIER_BEAGLETRANSLATOR_H

#include "Translator.h"
#include "../BeagleModel/BeagleModel.h"
#include <stdio.h>
#include <string>
#include <vector>
using std::string;
using std::vector;

namespace esc {
    class BeagleTranslator : public Translator {
    private:
        BeagleModel* beagleModel;
        vector<string> beagleModelFile;
    public:
        BeagleTranslator();
        void generateBeagle();
        void makeHeader();
        void makeModules();
        void makeProperties();
        void generateBeagleModelFile();
        void setModel(Model* _model);
        bool saveInFile(string path);
    };
}

#endif //VERIFIER_BEAGLETRANSLATOR_H
