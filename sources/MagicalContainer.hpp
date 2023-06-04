#ifndef MACO
#define MACO


#include <stdio.h>
#include <vector>


using namespace std;

namespace ariel{

    class MagicalContainer{

        vector<int> conElems;

        public:
            MagicalContainer();
            MagicalContainer(MagicalContainer& other);

            void addElem(int element);
            void removeElem(int element);
            int size() const;
            int getElem(int index);

            class AscendingIterator;
            class SideCrossIterator;
            class PrimeIterator;
  
    };

    class MagicalContainer::AscendingIterator{

        private:
            const MagicalContainer& contr;
            int index;
        
        public:
            AscendingIterator(const MagicalContainer& contr);
            AscendingIterator(const AscendingIterator& other);
            
            ~AscendingIterator();

            AscendingIterator& operator=(const AscendingIterator& other);
            bool operator==(const AscendingIterator& other) const;
            bool operator!=(const AscendingIterator& other) const;
            bool operator>(const AscendingIterator& other) const;
            bool operator<(const AscendingIterator& other) const;
            int operator*();
            AscendingIterator& operator++();
            AscendingIterator begin();
            AscendingIterator end();

    };

    class MagicalContainer::SideCrossIterator{

        private:
            const MagicalContainer& contr;
            int rIndex;
            int lIndex;
            bool lefty;

        
        public:
            SideCrossIterator(const MagicalContainer& contr);
            SideCrossIterator(const SideCrossIterator& other);
            ~SideCrossIterator();

            SideCrossIterator& operator=(const SideCrossIterator& other);
            bool operator==(const SideCrossIterator& other) const;
            bool operator!=(const SideCrossIterator& other) const;
            bool operator>(const SideCrossIterator& other) const;
            bool operator<(const SideCrossIterator& other) const;
            int operator*();
            SideCrossIterator& operator++();
            SideCrossIterator begin();
            SideCrossIterator end();

    };

    class MagicalContainer::PrimeIterator{

        private:
            const MagicalContainer& contr;
        
        public:
            PrimeIterator(const MagicalContainer& contr);
            PrimeIterator(const PrimeIterator& other);
            ~PrimeIterator();

            PrimeIterator& operator=(const PrimeIterator& other);
            bool operator==(const PrimeIterator& other) const;
            bool operator!=(const PrimeIterator& other) const;
            bool operator>(const PrimeIterator& other) const;
            bool operator<(const PrimeIterator& other) const;
            int operator*();
            PrimeIterator& operator++();
            PrimeIterator begin();
            PrimeIterator end();

    };

    
}


#endif