// Copyright 2023
// Author: David Amoah

#ifndef INSTRUMENT_STRINGINSTRUMENT_H
#define INSTRUMENT_STRINGINSTRUMENT_H


#include "Instrument.h"

class StringInstrument : public Instrument {
    // TODO: Declare private data members: numStrings, numFrets, isBowed
private:
    int numStrings;
    int numFrets;
    bool isBowed;

public:
    void SetNumOfStrings(int strings);
    void SetNumOfFrets(int frets);
    void SetIsBowed(bool bowed);
    int GetNumOfStrings() const;
    int GetNumOfFrets() const;
    bool GetIsBowed() const;
    // TODO: Declar()e mutator functions -
    //      SetNumOfStrings(), SetNumOfFrets(), SetIsBowed()


    // TODO: Declare accessor functions -
    //      GetNumOfStrings(), GetNumOfFrets(), GetIsBowed()


};

#endif //INSTRUMENT_STRINGINSTRUMENT_H
