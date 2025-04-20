#include <cppunit/TestFixture.h>
#include <cppunit/extensions/HelperMacros.h>
#include <cppunit/ui/text/TestRunner.h>

class TestHelloWorld : public CppUnit::TestFixture {
    CPPUNIT_TEST_SUITE(TestHelloWorld);
    CPPUNIT_TEST(testOutput);
    CPPUNIT_TEST_SUITE_END();

public:
    void testOutput() {
        // Exemple de test (à adapter selon votre logique)
        CPPUNIT_ASSERT_EQUAL(1 + 1, 2);
    }
};

CPPUNIT_TEST_SUITE_REGISTRATION(TestHelloWorld);

int main() {
    CppUnit::TextUi::TestRunner runner;
    runner.addTest(CppUnit::TestFactoryRegistry::getRegistry().makeTest());
    runner.run();
    return 0;
}
