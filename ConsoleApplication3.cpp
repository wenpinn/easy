/*********
 * author wwen-pinn fang
 * version 1.0
*********/
#include "stdafx.h"

#include <iostream>
#include <string>
#include <io.h>
#include <fcntl.h>
#define SPADE L"\u2660"
#define CLUB L"\u2663"
#define HEART L"\u2665"
#define DIAMOND L"\u2666"
enum SUIT { spade = 1, club, heart, diamond };
using namespace std;
void show(int suitToSelect) {
	_setmode(_fileno(stdout), _O_U16TEXT);
	switch (suitToSelect) {
	case spade:
		wcout << SPADE;
		break;
	case club:
		wcout << CLUB;
		break;
	case heart:
		wcout << HEART;
		break;
	case diamond:
		wcout << DIAMOND;
		break;
	}
	_setmode(_fileno(stdout), _O_TEXT);
}
void main()
{
	int i;
	for (i = 1; i < 5; i++)
		show(i);
	cout << endl;
	show(club);
}
