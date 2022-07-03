#include<iostream>
#define UNDERLINE "\033[4m"		  //found online
#define CLOSEUNDERLINE "\033[0m"  //found online
#include"structsHolder.h"
#include"limits.h"
using namespace std;

void limits::reconLimits()
{
	//classes clas; //located inside limits.h
	cout << UNDERLINE << clas.Recon << CLOSEUNDERLINE << endl;

	specialist spec;
	cout << UNDERLINE << "Usable Specialists:" << CLOSEUNDERLINE << endl;
	cout << '-' << spec.Paik << endl;
	cout << '-' << spec.Rao << endl;
	cout << '-' << spec.Casper << endl;

	weapons::sniper SNIPguns;
	cout << UNDERLINE << "Usable Primary Weapons:" << CLOSEUNDERLINE << endl;
	cout << '-' << SNIPguns.dxr << endl;
	cout << '-' << SNIPguns.ntw << endl;
	cout << '-' << SNIPguns.sws << endl;
	weapons::marks MARguns;
	cout << '-' << MARguns.dm7 << endl;
	cout << '-' << MARguns.svk << endl;
	cout << '-' << MARguns.vcar << endl;
	cout << '-' << MARguns.bsvm << endl;
	weapons::utility UTLguns;
	cout << '-' << UTLguns.gvt << endl;
	cout << '-' << UTLguns.crossbow << endl;

	weapons::secondaries sec;
	cout << UNDERLINE << "Usable Secondary Weapons:" << CLOSEUNDERLINE << endl;
	cout << '-' << sec.g57 << endl;
	cout << '-' << sec.m44 << endl;
	cout << '-' << sec.mp28 << endl;

	gadgets gad;
	cout << UNDERLINE << "Usable Gadgets:" << CLOSEUNDERLINE << endl;
	cout << '-' << gad.beacon << endl;
	cout << '-' << gad.soflam << endl;

	throwable fling;
	cout << UNDERLINE << "Usable Throwables:" << CLOSEUNDERLINE << endl;
	cout << '-' << fling.frag << endl;
	cout << '-' << fling.smoke << endl;
	cout << '-' << fling.prox << endl;
	cout << '-' << fling.emp << endl;
	cout << '-' << fling.incend << endl;
}
