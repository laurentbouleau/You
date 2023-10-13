﻿#pragma once

#define Cinema_afficher_Date_1_              1


#include "Utils.h"
#include "titre.h"
#include "You.h"
#include "you_txt.h"
#include "serie.h"
#include "console.h"
#include "erreur_ok.h"

#include <windows.h>
#include <cassert>
//#include <climits>
#include <algorithm>
#include <string>
#include <iostream>
//#include <sstream>
//#include <ctime>
#include <codecvt>
#include <vector>

#include <filesystem> // C++17 standard header file name
#include <experimental/filesystem> // Header file for pre-standard implementation

extern class Erreur E;

extern const std::vector<std::wstring> Genre;
extern const std::vector<std::wstring> Sous_Genre;
extern const std::vector<std::wstring> Sur;
extern const std::vector<std::wstring> Nationalite;
extern const std::vector<std::wstring> Soundtrack;

class Titre;
//class Console;
class Cinema
{
	friend class Titre;
public:
	Cinema(void);
	~Cinema();

	const int afficher_dossier(std::wstring const& t);
	const int afficher_fichier(std::wstring const& t, int const& _T_);
	//const int afficher_Date(std::wstring& d, const std::wstring& nomFichier);
	const void afficher_Date(std::wstring& d);
	const void afficher_Date_de_reprise_ou_de_sortie(std::wstring& d, const std::wstring& nomFichier);
	//void afficherDateRepriseOuSortie();
	void afficherDateRepriseOuSortie(std::wstring& d, const std::wstring& nomFichier);
	//void afficherDate(const& myDate date);

	void afficher_De(std::wstring& d, std::wstring const& nomFichier, std::vector<std::wstring>& de) const;
	const void afficher_Distributeur(std::wstring&, std::wstring const&);
	void afficher_Par(std::wstring& p, const std::wstring& nomFichier, std::vector<std::wstring>&par) const;
	const void afficher_Note(std::wstring&, std::wstring const&);
	const void afficher_Soundtrack(std::wstring& s, const std::wstring& nomFichier);
	const void afficher_Titre(std::wstring& t, std::wstring const& nomFichier);
	const int afficher_pas_de_OK() const;
	const int afficher(void);
	const int Ok_C(bool C_Espace1, wchar_t C_H, bool C_Espace2, bool C_Espace3, std::wstring  C_MIN, std::wstring C_T, std::wstring C_t, std::wstring C_W, std::wstring C_w);

protected:
	//std::wstring ad = L"";
	//bool ad_ = false;

private:
	const int afficher_Date_1(std::wstring& d, std::wstring const& nomFichier);
	const wstring afficher_Temps_OK();

	const void PrintAvec(std::vector<std::pair<std::wstring, std::wstring>>& avec);
	const void PrintAvec();
	const void PrintDatedeReprise();
	const void PrintDatedeSortie();
	const void PrintDe(const std::vector<std::wstring>&);
	const void PrintDistributeur();
	const void PrintPar(const std::vector<std::wstring>&);
	const wstring PrintNote();
    const void PrintSoundtracks();
	const void PrintTitre();
	const void PrintTitre_sur_4();

    std::wstring Titre__;

	bool C_Espace1;
	wchar_t C_H;
	bool C_Espace2;
	bool C_Espace3;
	std::wstring C_MIN;
	std::vector<std::wstring>keyColor; // keyColor[0] (bleu) et keyColor[1] (vert)
	std::wstring valuesColor; // Blanc

	std::wstring audiodescription;
	std::vector<std::pair<std::wstring, std::wstring>> avec;
 	std::vector<std::wstring> de;
	std::tm date{ 0 }, date_de_reprise{ 0 }, date_de_sortie{ 0 }, temps{ 0 };
	std::wstring distributeur;
	std::vector<std::wstring> image;
	std::vector<std::wstring> genre{};
	std::vector<std::wstring> par;
	std::vector<std::wstring> nationalite;
	std::wstring netflix_sj;
	double note = 0.0;
	std::wstring sj;
	std::vector<std::pair<std::wstring, std::wstring>> m_soundtrack;
	std::wstring sous_genre;
	std::wstring sur;
	std::vector<std::wstring> titre{};
	std::wstring titre_ok = L"";
	std::vector<std::wstring> titre_original{};

	//bool Date_ = false;

	bool affichage_audiodescription_actif = true;// false;
	bool affichage_avec_actif = true;
	bool affichage_de_actif = true;
	bool affichage_date_actif = true;
	bool affichage_date_de_reprise_actif = true;
	bool affichage_date_de_sortie_actif = true;
	bool affichage_distributeur_actif = true;
	bool affichage_image_actif = true;
	bool affichage_genres_actif = true;
	bool affichage_nationalite_actif = true;
	bool affichage_netflix_sj_actif = true;
	bool affichage_note_actif = true;
	bool affichage_par_actif = true;
	bool affichage_sj_actif = true;
	bool affichage_soundtraks_actif = true;
	bool affichage_sous_genre_actif = true;
	bool affichage_sur_actif = true;
	bool affichage_temps_actif = true;
	bool affichage_titre_actif = true;
	bool affichage_titre_original_actif = true;

	bool netflix_ok_ou_non = false;

	bool Titre_ = false;
	std::wstring Titre_1 = L"";
	bool Titre_1_ = false;

	std::tm Date_1[_X_][_X_];
	std::wstring Date_1_t[_X_];

	std::wstring D[_X_];
	std::wstring D_t[_X_][_X_] = { L"" };
	int D_I = 0;
	int D_J[_X_] = { -1 };
	bool D_1_[_X_] = { false };
	std::wstring X[_X_];
	std::wstring X_T[_X_];
};
