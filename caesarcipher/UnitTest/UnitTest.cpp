#include "pch.h"
#include "CppUnitTest.h"
#include "../CaesarCipher.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
    TEST_CLASS(UnitTest)
    {
    public:
        
        TEST_METHOD(TestMethod1)
        {
            std::string enc = CaesarCipher::Encrypt("abcde");
            Assert::AreEqual(enc.c_str(), "klmno");
        }
        TEST_METHOD(TestMethod2)
        {
            std::string enc = CaesarCipher::Encrypt("あいうえお");
            Assert::AreEqual(enc.c_str(), "謙軒鍵顕鹸");
        }
        TEST_METHOD(TestMethod3)
        {
            std::string dec = CaesarCipher::Decrypt("謙軒鍵顕鹸");
            Assert::AreEqual(dec.c_str(), "あいうえお");
        }
    };
}
