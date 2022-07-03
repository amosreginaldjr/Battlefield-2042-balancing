#include<iostream>
#define UNDERLINE "\033[4m"		  //found online
#define CLOSEUNDERLINE "\033[0m"  //found online
#include"structsHolder.h"
#include"limits.h"
using namespace std;

void limits::supportLimits()
{
	//classes clas; //located inside limits.h
	cout << UNDERLINE << clas.Support << CLOSEUNDERLINE << endl;

	specialist spec;
	cout << UNDERLINE << "Usable Specialists:" << CLOSEUNDERLINE << endl;
	cout << '-' << spec.Angel << endl;
	cout << '-' << spec.Falck << endl;
	
	weapons::sub guns;
	cout << UNDERLINE << "Usable Primary Weapons:" << CLOSEUNDERLINE << endl;
	cout << '-' << guns.k30 << endl;
	cout << '-' << guns.mp9 << endl;
	cout << '-' << guns.pbx45 << endl;
	cout << '-' << guns.pp29 << endl;

	weapons::secondaries sec;
	cout << UNDERLINE << "Usable Secondary Weapons:" << CLOSEUNDERLINE << endl;
	cout << '-' << sec.g57 << endl;
	cout << '-' << sec.m44 << endl;
	cout << '-' << sec.mp28 << endl;

	gadgets gad;
	cout << UNDERLINE << "Usable Gadgets:" << CLOSEUNDERLINE << endl;
	cout << '-' << gad.medCrate << endl;
	cout << '-' << gad.medPen << endl;
	cout << '-' << gad.smokeLauncher << endl;

	throwable fling;
	cout << UNDERLINE << "Usable Throwables:" << CLOSEUNDERLINE << endl;
	cout << '-' << fling.frag << endl;
	cout << '-' << fling.smoke << endl;
	cout << '-' << fling.prox << endl;
	cout << '-' << fling.emp << endl;
	cout << '-' << fling.incend << endl;
}
