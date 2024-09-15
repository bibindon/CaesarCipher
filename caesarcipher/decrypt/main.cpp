#include <iostream>
#include <fstream>
#include <Windows.h>
#include "../CaesarCipher.h"

int main(int argc, char* argv[])
{
    if (argc != 2)
    {
        MessageBox(NULL, "�t�@�C����������h���b�v���Ă�������", "�G���[", MB_OKCANCEL);
        return -1;
    }
    std::string filepath(argv[1]);
    std::string filepath2(filepath + ".dec");

    std::ifstream ifs(argv[1]);
    if (!ifs)
    {
        MessageBox(NULL, "�t�@�C�����Ȃ�", "�G���[", MB_OKCANCEL);
        return -1;
    }
    std::istreambuf_iterator<char> itBegin(ifs);
    std::istreambuf_iterator<char> itEnd;
    std::string work(itBegin, itEnd);

    work = CaesarCipher::Decrypt(work);

    std::ofstream ofs(filepath2);
    if (!ofs)
    {
        MessageBox(NULL, "�t�@�C�����o�͂ł��Ȃ�", "�G���[", MB_OKCANCEL);
        return -1;
    }
    ofs << work;

    return 0;
}

