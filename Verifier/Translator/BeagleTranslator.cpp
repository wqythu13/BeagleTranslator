//
// Created by wqy on 19-11-17.
//

#include "BeagleTranslator.h"
#include <iostream>
#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
using namespace esc;
using namespace std;

void BeagleTranslator::makeHeader() {
    list<Process*> mProcesses;
    mProcesses = this->model->getProcesses();
    for (auto process : mProcesses)
    {
        
    }
}

void BeagleTranslator::makeModules() {

}

void BeagleTranslator::makeProperties() {

}

/// \brief save the beagleModelFile into the file in path.
bool BeagleTranslator::saveInFile(string path) {
    //fopen(path, "w");
    FILE* beagleFile;
    beagleFile = fopen(path.c_str(), "w");

    //int fd = open(path.c_str(), O_WRONLY|O_CREAT);
    //if (beagleFile == NULL)
    //    return false;
    //if (!fd) return false;
    //for (string col : beagleModelFile) {
    //    fwrite(col.c_str(), 1, col.size()+1, beagleFile);
        //cout << col.c_str() << endl;
    //}
    //fclose(beagleFile);
    //close(fd);
    //fd=open(path.c_str(), O_RDONLY);
    char buffer[80];
    //int size=read(fd,buffer,sizeof(buffer));
    //close(fd);
    //printf("%s", buffer);
    return true;
}

BeagleTranslator::BeagleTranslator()
{
    this->beagleModel = new BeagleModel();
    this->beagleModelFile = vector<string>{"system", "end"};
}

/// \brief generate beaglemModel from Model* model
void BeagleTranslator::generateBeagle() {
    //string modelName = model->getName();
    makeHeader();
    makeModules();
    makeProperties();
    //cout << "This is BeagleTransltor::generateBeagle()" << endl;
}