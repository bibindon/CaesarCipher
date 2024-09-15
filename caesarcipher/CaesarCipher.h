#include <string>

class CaesarCipher
{
public:
    static std::string Encrypt(const std::string& text)
    {
        std::string result;
        char* work = nullptr;
        work = new char[text.size()+1];
        strcpy_s(work, text.size()+1, text.c_str());
        for (std::size_t i = 0; i < text.size(); ++i)
        {
            work[i] = work[i] + 10;
        }
        result = std::string(work);
        delete[] work;
        return result;
    }

    static std::string Decrypt(const std::string& text)
    {
        std::string result;
        char* work = nullptr;
        work = new char[text.size()+1];
        strcpy_s(work, text.size()+1, text.c_str());
        for (std::size_t i = 0; i < text.size(); ++i)
        {
            work[i] = work[i] - 10;
        }
        result = std::string(work);
        delete[] work;
        return result;
    }
};