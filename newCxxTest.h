// Copyright 2023
// Author: David Amoah

#ifndef INSTRUMENT_NEWCXXTEST_H
#define INSTRUMENT_NEWCXXTEST_H


// Copyright 2023
// Author: David Amoah

#ifndef BOOKINFO_NEWCXXTEST_H
#define BOOKINFO_NEWCXXTEST_H




#ifndef NEWCXXTEST_H
#define NEWCXXTEST_H



#include "Instrument.h"
#include "StringInstrument.h"
#include <iostream>

using std::cout;
using std::endl;

#include <cxxtest/TestSuite.h>

class newCxxTest : public CxxTest::TestSuite {
public:


    void testMyInstrumentClass() {   ///test for the NameNode class
        Instrument newIns;

        newIns.SetName("Piano");
        newIns.SetManufacturer("Yamaha");
        newIns.SetYearBuilt(1990);
        newIns.SetCost(15000);

        TS_ASSERT_EQUALS(newIns.GetName(), "Piano");
        TS_ASSERT_EQUALS(newIns.GetManufacturer(), "Yamaha");
        TS_ASSERT_EQUALS(newIns.GetYearBuilt(), 1990);
        TS_ASSERT_EQUALS(newIns.GetCost(), 15000);

        newIns.PrintInfo();

    }

    void testMyStringInstrumentClass() {   ///test for the NameNode class
        StringInstrument newString;

        newString.SetName("Violin");
        newString.SetManufacturer("Eastman");
        newString.SetYearBuilt(1980);
        newString.SetCost(75000);


        newString.SetNumOfStrings(4);
        newString.SetNumOfFrets(0);
        newString.SetIsBowed(true);

        TS_ASSERT_EQUALS(newString.GetName(), "Violin");
        TS_ASSERT_EQUALS(newString.GetManufacturer(), "Eastman");
        TS_ASSERT_EQUALS(newString.GetYearBuilt(), 1980);
        TS_ASSERT_EQUALS(newString.GetCost(), 75000);

        TS_ASSERT_EQUALS(newString.GetNumOfStrings(), 4);
        TS_ASSERT_EQUALS(newString.GetNumOfFrets(), 0);
        TS_ASSERT(newString.GetIsBowed());

        newString.PrintInfo();



    }


};
#endif /* NEWCXXTEST_H */


#endif //BOOKINFO_NEWCXXTEST_H










#endif //INSTRUMENT_NEWCXXTEST_H
