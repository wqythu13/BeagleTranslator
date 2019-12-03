cmake_minimum_required(VERSION 3.12)
project(Verifier)

set(CMAKE_CXX_STANDARD 17)

add_executable(Verifier main.cpp Translator/BeagleTranslator.cpp Model/Process/Process.cpp Model/Process/Process.h Model/Pragma/InitialKnowledge.cpp Model/Pragma/InitialKnowledge.h Model/Pragma/Property.cpp Model/Pragma/Property.h Model/Process/Attribute.cpp Model/Process/Attribute.h Model/Process/Type.cpp Model/Process/Type.h Model/Process/Method.cpp Model/Process/Method.h Model/Process/Signal.cpp Model/Process/Signal.h Model/FiniteStateMachine/FiniteStateMachine.cpp Model/FiniteStateMachine/FiniteStateMachine.h Model/FiniteStateMachine/Vertex.cpp Model/FiniteStateMachine/Vertex.h Model/FiniteStateMachine/Edge.cpp Model/FiniteStateMachine/Edge.h BeagleModel/BeagleModule.cpp BeagleModel/BeagleModule.h BeagleModel/BeagleProperty.cpp BeagleModel/BeagleProperty.h BeagleModel/BeagleVariable.cpp BeagleModel/BeagleVariable.h)