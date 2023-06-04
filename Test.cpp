#include "doctest.h"
#include "sources/MagicalContainer.hpp"
#include <stdexcept>

using namespace std;

namespace ariel{

    TEST_CASE("container opertions and fuctions"){
        MagicalContainer contr;
        CHECK(contr.size()==0);

        contr.addElement(11);
        contr.addElement(22);
        contr.addElement(33);
        contr.addElement(44);
        contr.addElement(55);
        CHECK(contr.size()==5);
        contr.addElement(66);
        CHECK(contr.size()==6);


        contr.removeElement(55);
        CHECK(contr.size()==5);
        contr.removeElement(66);
        CHECK(contr.size()==4);
        CHECK_THROWS(contr.removeElement(99));

        CHECK(contr.getElement(1) == 44);
        CHECK_NOTHROW(contr.getElement(1));

    }

    TEST_CASE("prime iterator opertions and fuctions "){
        MagicalContainer contr;        
        MagicalContainer::PrimeIterator prime(contr);
        CHECK_EQ(prime.begin() , prime);
        CHECK(contr.size()==0);

        contr.addElement(9);
        contr.addElement(84);
        contr.addElement(17);
        CHECK(*prime == 17);
        ++prime;

        contr.addElement(7);
        CHECK(*prime == 7);
        ++prime;

        contr.addElement(  8);
        contr.addElement( 888);
        contr.addElement(88888);
        contr.addElement(5);
        CHECK(*prime == 5);
        ++prime;

        contr.addElement(11);
        CHECK(*prime == 11);
        ++prime;

        CHECK(contr.size()==4);



        contr.removeElement(17);
        CHECK(contr.size()==3);
        contr.removeElement(5);
        CHECK(contr.size()==2);

        CHECK_NOTHROW(contr.getElement(1));

    }

    TEST_CASE("ascending iterator opertions and fuctions "){
        MagicalContainer contr;
        MagicalContainer::AscendingIterator asce(contr);
        CHECK_EQ(asce.begin(), asce);
        CHECK(asce == asce.begin());
        CHECK(asce == asce.end());

        contr.addElement(11);
        CHECK(*asce == 11);
        ++asce;

        contr.addElement(55);
        CHECK(*asce == 22);
        ++asce;

        contr.addElement(33);
        CHECK(*asce == 33);
        ++asce;

        contr.addElement(44);
        CHECK(*asce == 44);
        ++asce;

        contr.addElement(22);
        CHECK(*asce == 55);
        ++asce;

        contr.removeElement(11);
        CHECK(contr.size()==4);
        contr.removeElement(55);
        CHECK(contr.size()==3);

        CHECK_NOTHROW(contr.getElement(1));


    }

    TEST_CASE("sideCross iterator opertions and fuctions "){
        MagicalContainer contr;
        MagicalContainer::SideCrossIterator side(contr);
        CHECK_EQ(side.begin(), side);
        CHECK(contr.size()==0);

        contr.addElement(11);
        CHECK(*side == 11);
        ++side;

        contr.addElement(33);
        CHECK(*side == 22);
        ++side;

        contr.addElement(22);
        CHECK(*side == 33);
        ++side;

        CHECK(contr.size()==3);


        contr.removeElement(22);
        CHECK(contr.size()==2);
        contr.removeElement(11);
        CHECK(contr.size()==1);

        CHECK_NOTHROW(contr.getElement(0));


    }




}