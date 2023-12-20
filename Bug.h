#pragma once

#include "Utils.h"
#include "titre.h"
#include "you.h"
#include "you_txt.h"
#include "film.h"
#include "serie.h"
#include "Erreur_ok.h"

#include <windows.h>
#include <cassert>
#include <iostream>
//#include <fstream>
#include <string>
#include <vector>
//#include <stdio.h>
//#include <locale>
#include <codecvt>
#include <filesystem> // C++17 standard header file name
#include <experimental/filesystem> // Header file for pre-standard implementation

extern int X;

//extern const int Console_Lire_txt(std::wstring, int, int);
extern void Console_Lire(HANDLE hOut, const std::wstring& wstr, int taille_indentation, wchar_t);

class exception_test_sp_et_npos_ou_pas_isblank;
extern void test_sp_et_npos_ou_pas_isblank(wchar_t sp, bool t);

class exception_date_year;
extern bool checkyear(int y);

class exception_date_month;
extern bool checkmonth(int m);

class exception_date_day;
extern bool checkday(int m, int d, int y);


class Bug
{
public:
    Bug(void);
    ~Bug();
    /*const*/ void Ok_T(std::wstring);
    /*const*/ void Ok_W(std::wstring);
private:
    int OK = 0; // 0;
    bool Ok_ = false;
    const std::wstring B_T = L"\x1b[38;2;200;200;0m";
    const std::wstring B_t = L"\x1b[38;2;255;255;255m";
    const std::wstring B_W = L"\x1b[38;2;155;155;155m";
    const std::wstring B_w = L"\x1b[38;2;255;255;255m";

    const int x1 = 0;
    const int x2 = 4;
    const int x3 = 4;
    const int x4 = 8;

};

