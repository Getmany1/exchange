#ifndef DECODER_WGRAPH_CPPUNIT
#define DECODER_WGRAPH_CPPUNIT

#define private public
#include "Exchange.hh"
#undef private

#include <set>
#include <string>

#include <cppunit/TestFixture.h>
#include <cppunit/extensions/HelperMacros.h>

class exchangetest : public CPPUNIT_NS :: TestFixture
{
    CPPUNIT_TEST_SUITE (exchangetest);
    CPPUNIT_TEST (ExchangeTest1);
    CPPUNIT_TEST_SUITE_END ();

public:
    void setUp(void);
    void tearDown(void);

protected:
    void ExchangeTest1(void);

private:

    void read_fixtures();

};

#endif
