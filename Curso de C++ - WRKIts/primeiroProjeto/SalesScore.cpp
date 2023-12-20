#include <string>
using std::string;

#include <iostream>
using std::cout;
using std::endl;

#include "SalesScore.hpp"

SalesScore::SalesScore(string title) {
    setStoreTitle(title);
}

void SalesScore::setStoreTitle(string title) {
    storeTitle = title;
}

string SalesScore::getStoreTitle() {
    return storeTitle;
}

void SalesScore::bootSystem() {
    cout << "Score de vendas! " << storeTitle << endl;
}