// Copyright 2023
// Author: David Amoah

#include "StringInstrument.h"

// TODO: Define mutator functions -
//      SetNumOfStrings(), SetNumOfFrets(), SetIsBowed()


// TODO: Define accessor functions -
//      GetNumOfStrings(), GetNumOfFrets(), GetIsBowed()


void StringInstrument::SetNumOfStrings(int strings) {
    this -> numStrings = strings;
}

void StringInstrument::SetNumOfFrets(int frets) {
    this -> numFrets = frets;
}

void StringInstrument::SetIsBowed(bool bowed) {
    this -> isBowed = bowed;
}

int StringInstrument::GetNumOfStrings() const {
    return numStrings;
}

int StringInstrument::GetNumOfFrets() const {
    return numFrets;
}

bool StringInstrument::GetIsBowed() const {
    return isBowed;
}
