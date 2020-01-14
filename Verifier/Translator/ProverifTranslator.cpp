//
// Created by wqy on 20-1-6.
//

#include "ProverifTranslator.h"
#include "../ProverifModel/ProverifComment.h"
#include "../ProverifModel/ProverifConst.h"
#include "../ProverifModel/ProverifEquation.h"

namespace esc {
void ProverifTranslator::makingStartingProcess() {

}

void ProverifTranslator::makeHeader() {
    string bitstring = "bitstring";
    ProverifModel* pModel = this->proverifModel;
    pModel->addDeclaration(new ProverifCommet ("Boolean return types"));
    pModel->addDeclaration(new ProverifConst("TRUE", bitstring));
    pModel->addDeclaration(new ProverifConst("FALSE", bitstring));

    pModel->addDeclaration(new ProverifCommet("Functions data"));
    pModel->addDeclaration(new ProverifConst("UNKNOWN", bitstring));

    pModel->addDeclaration(new ProverifCommet("Public key cryptography"));
    pModel->addDeclaration(new ProverifFunc("pk", list<string>{bitstring}, bitstring));
    pModel->addDeclaration(new ProverifFunc("aencrypt", list<string>{bitstring, bitstring}, bitstring));
    pModel->addDeclaration(new ProverifReduc(list<ProverifVar*>{new ProverifVar("x", bitstring), new ProverifVar("y", bitstring)}, "adecrypt (aencrypt (x, pk (y)), y) = x"));

    pModel->addDeclaration(new ProverifFunc("sign", list<string>{bitstring, bitstring}, bitstring));
    pModel->addDeclaration(new ProverifFunc("verifySign", list<string>{bitstring, bitstring, bitstring}, bitstring,
            new ProverifReduc(list<ProverifVar*>{new ProverifVar("m", bitstring), new ProverifVar("sk", bitstring)}, "verifySign (m, sign (m, sk), pk (sk)) = TRUE",
                    new ProverifReduc(list<ProverifVar*>{new ProverifVar("m", bitstring), new ProverifVar("m2", bitstring), new ProverifVar("ppk", bitstring)}, "verifySign (m, m2, ppk) = FALSE"))));

    pModel->addDeclaration(new ProverifCommet("Certificates"));
    pModel->addDeclaration(new ProverifFunc("cert", list<string>{bitstring, bitstring}, bitstring));
    pModel->addDeclaration(new ProverifFunc("verifyCert", list<string>{bitstring, bitstring}, bitstring,
            new ProverifReduc(list<ProverifVar*>{new ProverifVar("epk", bitstring), new ProverifVar("sk", bitstring)}, "verifyCert (cert (epk, sign (epk, sk)), pk (sk)) = TRUE",
                    new ProverifReduc(list<ProverifVar*>{new ProverifVar("m", bitstring), new ProverifVar("ppk", bitstring)}, "verifyCert (m, ppk) = FALSE"))));
    pModel->addDeclaration(new ProverifReduc(list<ProverifVar*>{new ProverifVar("epk", bitstring), new ProverifVar("sk", bitstring)}, "getpk (cert (epk, sign (epk,sk))) = epk"));

    pModel->addDeclaration(new ProverifCommet("Symmetric key cryptography"));
    pModel->addDeclaration(new ProverifFunc("sencrypt", list<string>{bitstring, bitstring}, bitstring));
    pModel->addDeclaration(new ProverifReduc(list<ProverifVar*>{new ProverifVar("x", bitstring), new ProverifVar("k", bitstring)}, "sdecrypt (sencrypt (x, k), k) = x"));

    pModel->addDeclaration(new ProverifCommet("Diffie-Hellman"));
    pModel->addDeclaration(new ProverifEquation(list<ProverifVar*>{new ProverifVar("x", bitstring), new ProverifVar("y", bitstring)}, "DH (pk (x), y) = DH (pk (y), x)"));

    pModel->addDeclaration(new ProverifCommet("MAC"));
    pModel->addDeclaration(new ProverifFunc("MAC", list<string>{bitstring, bitstring}, bitstring));
    pModel->addDeclaration(new ProverifFunc("verifyMAC", list<string>{bitstring, bitstring, bitstring}, bitstring,
            new ProverifReduc(list<ProverifVar*>{new ProverifVar("m", bitstring), new ProverifVar("k", bitstring)}, "verifyMAC (m, k, MAC (m, k)) = TRUE",
                    new ProverifReduc(list<ProverifVar*>{new ProverifVar("m", bitstring), new ProverifVar("m2", bitstring), new ProverifVar("k", bitstring)}, "verifyMAC (m, k, m2) = FALSE"))));

    pModel->addDeclaration(new ProverifCommet("HASH"));
    pModel->addDeclaration(new ProverifFunc("hash", list<string>{bitstring}, bitstring));
    // TODO add user defined function

    // TODO add channel&query defintion
}

void ProverifTranslator::makeBlocks() {

}

void ProverifTranslator::generateProverif() {
    //TODO add ProverifTranslator
    makingStartingProcess();
    makeHeader();
    makeBlocks();
}

void ProverifTranslator::setModel(esc::Model *_model) {
    this->model = _model;
}
}