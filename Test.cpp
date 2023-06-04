#include "doctest.h"
#include "sources/MagicalContainer.hpp"

#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include <stdexcept>

using namespace std;

namespace ariel{

    TEST_CASE("container regular opertions"){
        MagicalContainer contr;
        CHECK(contr.size()==0);

        contr.addElem(11);
        contr.addElem(22);
        contr.addElem(33);
        contr.addElem(44);
        contr.addElem(55);
        CHECK(contr.size()==5);
        contr.addElem(66);
        CHECK(contr.size()==6);


        contr.removeElem(55);
        contr.removeElem(66);
        CHECK(contr.size()==4);
        CHECK_THROWS(contr.removeElem(99));

        CHECK(contr.getElem(1) == 44);
    }

    TEST_CASE("prime iterator opertions and fuctions "){
        MagicalContainer contr;        
        MagicalContainer::PrimeIterator prime(contr);


        CHECK(contr.size()==0);

        contr.addElem(9);
        contr.addElem(84);
        contr.addElem(17);
        CHECK(*prime == 17);
        ++prime;

        contr.addElem(7);
        CHECK(*prime == 7);
        ++prime;

        contr.addElem(  8);
        contr.addElem( 888);
        contr.addElem(88888);
        contr.addElem(5);
        CHECK(*prime == 5);
        ++prime;

        contr.addElem(11);
        CHECK(*prime == 11);
        ++prime;

        CHECK(contr.size()==4);



        contr.removeElem(5);
        CHECK(contr.size()==3);

    }

    TEST_CASE("ascending iterator opertions and fuctions "){
        MagicalContainer contr;
        MagicalContainer::AscendingIterator asce(contr);

        CHECK(asce == asce.begin());
        CHECK(asce == asce.end());

        contr.addElem(11);
        CHECK(*asce == 11);
        ++asce;

        contr.addElem(55);
        CHECK(*asce == 22);
        ++asce;

        contr.addElem(33);
        CHECK(*asce == 33);
        ++asce;

        contr.addElem(44);
        CHECK(*asce == 44);
        ++asce;

        contr.addElem(22);
        CHECK(*asce == 55);
        ++asce;

    }

    TEST_CASE("sideCross iterator opertions and fuctions "){
        MagicalContainer contr;
        MagicalContainer::SideCrossIterator side(contr);

        CHECK(contr.size()==0);

        contr.addElem(11);
        CHECK(*side == 11);
        ++side;

        contr.addElem(33);
        CHECK(*side == 22);
        ++side;

        contr.addElem(22);
        CHECK(*side == 33);
        ++side;

        CHECK(contr.size()==3);


        contr.removeElem(22);
        CHECK(contr.size()==2);

    }




}