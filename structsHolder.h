#include<iostream>
using namespace std;

struct classes
{
	string Assult = "Assult Class:";
	string Engineer = "Engineer Class:";
	string Recon = "Recon Class:";
	string Support = "Support Class:";
};

struct specialist
{
	string Angel = "Angel";          //sup
	string Dozer = "Dozer";         //aslt
	string Irish = "Irish";        //Eng
	string Falck = "Falck";           //sup
	string Paik = "Paik";           //rec
	string Boris = "Boris";        //Eng
	string Rao = "Rao";           //rec
	string Sundance = "Sundance"; //aslt
	string Mackay = "Mackay";     //aslt
	string Casper = "Casper";     //Rec
	string Lis = "Lis";           //Eng
};

struct gadgets
{
	string medCrate = "Medic Crate";           //med
	string ammoCrate = "Ammo Crate";          //eng
	string M5 = "Recoilless M5";              //aslt
	string repTool = "Repair Tool";           //eng
	string antiAir = "FXM-33 AA Missile";      //aslt
	string plate = "IBA Armor Plate";		  //aslt
	string c5 = "C5";			              //eng
	string beacon = "Insertion Beacon";		  //rec
	string medPen = "Med Pen";		          //med
	string ATMine = "Anti-Tank Mine";		  //eng
	string soflam = "SOFLAM";		          //rec
	string smokeLauncher = "Smoke Launcher"; //med
};

struct throwable
{
	string frag = "Frag Grenade";
	string smoke = "Smoke Grenade";
	string prox = "Prox Sensor";
	string emp = "EMP Grenade";
	string incend = "Incendiary Grenade";
};

struct weapons
{
	struct secondaries
	{
		string g57 = "G57";
		string mp28 = "MP28";
		string m44 = "M44";
	};

	struct sub
	{
		string pbx45 = "PBX45";
		string pp29 = "PP29";
		string mp9 = "MP9";
		string k30 = "K30";
	};

	struct ar
	{
		string m5a3 = "M5A3";
		string ak24 = "AK24";
		string sfar = "SFAR-M GL";
		string ac42 = "AC42";
	};

	struct lmg
	{
		string lcmg = "LCMG";
		string pkp = "PKPBP";
	};

	struct marks
	{
		string dm7 = "DM7";
		string svk = "SVK";
		string vcar = "VCAR";
		string bsvm = "BSVM";
	};

	struct sniper
	{
		string sws = "SWS10";
		string dxr = "DXR1";
		string ntw = "NTW50";
	};

	struct utility
	{
		string mcs = "MCS880";
		string gvt = "GVT4570";
		string autoSG = "12MAuto";
		string crossbow = "CROSSBOW";
	};

};