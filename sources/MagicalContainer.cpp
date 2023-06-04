#include "MagicalContainer.hpp"
#include <cstddef>
#include <stdexcept>
#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <vector>



using namespace std;

namespace ariel{


    MagicalContainer::MagicalContainer(){}
    MagicalContainer::MagicalContainer(MagicalContainer& other){}

    void MagicalContainer::addElement(int element){}
    void MagicalContainer::removeElement(int element){}
    int MagicalContainer::size() const{return conElems.size();  }
    int MagicalContainer::getElement(int index){return 1;}


    class AscendingIterator;
    class SideCrossIterator;
    class PrimeIterator;


    MagicalContainer::AscendingIterator::AscendingIterator(const MagicalContainer& container):contr(container), index(0){}
    MagicalContainer::AscendingIterator::AscendingIterator(const AscendingIterator& other):contr(other.contr),index(other.index){}
    MagicalContainer::AscendingIterator::~AscendingIterator(){}
    MagicalContainer::AscendingIterator& MagicalContainer::AscendingIterator::operator=(const AscendingIterator& other){return *this;}
    bool MagicalContainer::AscendingIterator::operator==(const AscendingIterator& other) const{return false;}
    bool MagicalContainer::AscendingIterator::operator!=(const AscendingIterator& other) const{return false;}
    bool MagicalContainer::AscendingIterator::operator>(const AscendingIterator& other) const{return false;}
    bool MagicalContainer::AscendingIterator::operator<(const AscendingIterator& other) const{return false;}
    int MagicalContainer::AscendingIterator::operator*(){return 1;}
    MagicalContainer::AscendingIterator& MagicalContainer::AscendingIterator::operator++(){return *this;}
    MagicalContainer::AscendingIterator MagicalContainer::AscendingIterator::begin(){
        AscendingIterator *answer = new AscendingIterator(contr);
        return *answer;}
    MagicalContainer::AscendingIterator MagicalContainer::AscendingIterator::end(){
        AscendingIterator *answer = new AscendingIterator(contr);
        return *answer;}










    MagicalContainer::SideCrossIterator::SideCrossIterator(const MagicalContainer& container):contr(container), lIndex(0), rIndex(container.size()), TorF(false){}
    MagicalContainer::SideCrossIterator::SideCrossIterator(const SideCrossIterator& other):contr(other.contr), lIndex(0), rIndex(contr.size()), TorF(false){}
    MagicalContainer::SideCrossIterator::~SideCrossIterator(){}
    MagicalContainer::SideCrossIterator& MagicalContainer::SideCrossIterator::operator=(const SideCrossIterator& other){return *this;}
    bool MagicalContainer::SideCrossIterator::operator==(const SideCrossIterator& other) const{return false;}
    bool MagicalContainer::SideCrossIterator::operator!=(const SideCrossIterator& other) const{return false;}
    bool MagicalContainer::SideCrossIterator::operator>(const SideCrossIterator& other) const{return false;}
    bool MagicalContainer::SideCrossIterator::operator<(const SideCrossIterator& other) const{return false;}
    int MagicalContainer::SideCrossIterator::operator*(){return 1;}
    MagicalContainer::SideCrossIterator& MagicalContainer::SideCrossIterator::operator++(){return *this;}
    MagicalContainer::SideCrossIterator MagicalContainer::SideCrossIterator::begin(){
        SideCrossIterator *answer = new SideCrossIterator(contr);
        return *answer;}
    MagicalContainer::SideCrossIterator MagicalContainer::SideCrossIterator::end(){
        SideCrossIterator *answer = new SideCrossIterator(contr);
        return *answer;}










    MagicalContainer::PrimeIterator::PrimeIterator(const MagicalContainer& container):contr(container){}
    MagicalContainer::PrimeIterator::PrimeIterator(const PrimeIterator& other):contr(other.contr){}
    MagicalContainer::PrimeIterator::~PrimeIterator(){}
    MagicalContainer::PrimeIterator& MagicalContainer::PrimeIterator::operator=(const PrimeIterator& other){return *this;}
    bool MagicalContainer::PrimeIterator::operator==(const PrimeIterator& other) const{return false;}
    bool MagicalContainer::PrimeIterator::operator!=(const PrimeIterator& other) const{return false;}
    bool MagicalContainer::PrimeIterator::operator>(const PrimeIterator& other) const{return false;}
    bool MagicalContainer::PrimeIterator::operator<(const PrimeIterator& other) const{return false;}
    int MagicalContainer::PrimeIterator::operator*(){return 0;}
    MagicalContainer::PrimeIterator& MagicalContainer::PrimeIterator::operator++(){return *this;}
    MagicalContainer::PrimeIterator MagicalContainer::PrimeIterator::begin(){return *this;}
    MagicalContainer::PrimeIterator MagicalContainer::PrimeIterator::end(){return *this;}
}