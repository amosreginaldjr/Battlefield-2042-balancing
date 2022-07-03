#include<iostream>
#define UNDERLINE "\033[4m"		  //found online
#define CLOSEUNDERLINE "\033[0m"  //found online
#include"structsHolder.h"
#include"limits.h"
using namespace std;

void limits::assultLimits()
{
	//classes clas; //located inside limits.h
	cout << UNDERLINE << clas.Assult << CLOSEUNDERLINE << endl;

	specialist spec;
	cout << UNDERLINE << "Usable Specialists:" << CLOSEUNDERLINE << endl;
	cout << '-' << spec.Dozer << endl;
	cout << '-' << spec.Sundance << endl;
	cout << '-' << spec.Mackay << endl;

	weapons::ar guns;
	cout << UNDERLINE << "Usable Primary Weapons:" << CLOSEUNDERLINE << endl;
	cout << '-' << guns.ac42 << endl;
	cout << '-' << guns.ak24 << endl;
	cout << '-' << guns.m5a3 << endl;
	cout << '-' << guns.sfar << endl;

	weapons::secondaries sec;
	cout << UNDERLINE << "Usable Secondary Weapons:" << CLOSEUNDERLINE << endl;
	cout << '-' << sec.g57 << endl;
	cout << '-' << sec.m44 << endl;
	cout << '-' << sec.mp28 << endl;

	gadgets gad;
	cout << UNDERLINE << "Usable Gadgets:" << CLOSEUNDERLINE << endl;
	cout << '-' << gad.M5 << endl;
	cout << '-' << gad.antiAir << endl;
	cout << '-' << gad.plate << endl;

	throwable fling;
	cout << UNDERLINE << "Usable Throwables:" << CLOSEUNDERLINE << endl;
	cout << '-' << fling.frag << endl;
	cout << '-' << fling.smoke << endl;
	cout << '-' << fling.prox << endl;
	cout << '-' << fling.emp << endl;
	cout << '-' << fling.incend << endl;
}