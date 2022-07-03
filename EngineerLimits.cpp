#include<iostream>
#define UNDERLINE "\033[4m"		  //found online
#define CLOSEUNDERLINE "\033[0m"  //found online
#include"structsHolder.h"
#include"limits.h"
using namespace std;

void limits::engineerLimits()
{
	//classes clas; //located inside limits.h
	cout << UNDERLINE << clas.Engineer << CLOSEUNDERLINE << endl;

	specialist spec;
	cout << UNDERLINE << "Usable Specialists:" << CLOSEUNDERLINE << endl;
	cout << '-' << spec.Irish << endl;
	cout << '-' << spec.Boris << endl;
	cout << '-' << spec.Lis << endl;

	weapons::lmg guns;
	cout << UNDERLINE << "Usable Primary Weapons:" << CLOSEUNDERLINE << endl;
	cout << '-' << guns.lcmg << endl;
	cout << '-' << guns.pkp << endl;
	weapons::utility UTLguns;
	cout << '-' << UTLguns.mcs << endl;
	cout << '-' << UTLguns.autoSG << endl;

	weapons::secondaries sec;
	cout << UNDERLINE << "Usable Secondary Weapons:" << CLOSEUNDERLINE << endl;
	cout << '-' << sec.g57 << endl;
	cout << '-' << sec.m44 << endl;
	cout << '-' << sec.mp28 << endl;

	gadgets gad;
	cout << UNDERLINE << "Usable Gadgets:" << CLOSEUNDERLINE << endl;
	cout << '-' << gad.ammoCrate << endl;
	cout << '-' << gad.repTool << endl;
	cout << '-' << gad.c5 << endl;
	cout << '-' << gad.ATMine << endl;

	throwable fling;
	cout << UNDERLINE << "Usable Throwables:" << CLOSEUNDERLINE << endl;
	cout << '-' << fling.frag << endl;
	cout << '-' << fling.smoke << endl;
	cout << '-' << fling.prox << endl;
	cout << '-' << fling.emp << endl;
	cout << '-' << fling.incend << endl;
}
