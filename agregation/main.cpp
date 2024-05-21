#include <iostream>
#include <vector>
using namespace std;

#include "anak.h"
#include "ibu.h"

int main() {
    ibu* varIbu = new ibu("dini");
    ibu* varIbu2 = new ibu("novi");
    anak* varanak1 = new anak("tono");
    anak* varanak2 = new anak("rini");
    anak* varanak3 = new anak("Dewi");

    varIbu->tambahAnak(varanak1);
    varIbu->tambahAnak(varanak2);
    varIbu2->tambahAnak(varanak3);
    varIbu2->tambahAnak(varanak1);

    varIbu->cetakanak();
    varIbu2->cetakanak();
}