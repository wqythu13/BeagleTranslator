#include <iostream>
#include "Translator/Translator.h"
#include "Translator/BeagleTranslator.h"
using namespace esc;

int main() {
    //std::cout << "Hello, World!" << std::endl;
    //BeagleTranslator* beagleTranslator = new BeagleTranslator();
    //beagleTranslator->generateBeagle();
    BeagleTranslator beagleTranslator;
    beagleTranslator.generateBeagle();
    const char *filePath = "./Beagle/beagle.elt";
    //std::cout << beagleTranslator.saveInFile(filePath);
    return 0;
}