
#include<iostream>
#include<cstdlib>
using namespace std;
struct result {

	int totals() {
		int f;
		int h;
		cout << "Enter first total score" << endl;
		cin >> f;
		cout << "Enter second total score" << endl;
		cin >> h;


		if (f > h) {
			cout << "Team one wins";
		}
		else {
			cout << "Team second wins";
		}
	}
};




class pakistan {


public:
	pakistan()
	{
		cout << "                         PAKISTAN" << endl;
		cout << "  BABER AZAM   -  BATSMAN" << endl;
		cout << "  FAKHAR ZAMAN -  BATSMAN" << endl;
		cout << "  HAFEEZ       -  BATSMAN" << endl;
		cout << "  HUSSAIN TALAT-  BATSMAN" << endl;
		cout << "  MOHD ASIF    -  BATSMAN" << endl;
		cout << "  SARFARZ      -  BATSMAN" << endl;
		cout << "  SOHIAB MALIK -  BATSMAN" << endl;
		cout << "  FAHEEM       -  ALL-ROUNDER" << endl;
		cout << "  SHADAB KHAN  -  ALL-ROUNDER" << endl;
		cout << "  HASSAN ALI   -  BOWLER" << endl;
		cout << "  SHAHEEN KHAN -  BOWLER" << endl;



	}


};






class windies {


public:
	windies()
	{
		cout << "                         WINDIES" << endl;
		cout << "  CHRIS GAYLE  -  BATSMAN" << endl;
		cout << "  LEWIS        -  BATSMAN" << endl;
		cout << "  JASEN        -  BATSMAN" << endl;
		cout << "  D.SMITH      -  BATSMAN" << endl;
		cout << "  C.POLLAD     -  BATSMAN" << endl;
		cout << "  RAMDIN       -  BATSMAN" << endl;
		cout << "  RUSSEL       -  ALL-ROUNDER" << endl;
		cout << "  BRAVO        -  ALL-ROUNDER" << endl;
		cout << "  HOLDER       -  ALL-ROUNDER" << endl;
		cout << "  BRATWATE     -  BOWLER" << endl;
		cout << "  WILLIAMS     -  BOWLER" << endl;
	}

};





class india {


public:
	india()
	{
		cout << "                         INDIA" << endl;
		cout << "  ROHIT SHARMA  -  BATSMAN" << endl;
		cout << "  SHAKHAR       -  BATSMAN" << endl;
		cout << "  V.KHOLI       -  BATSMAN" << endl;
		cout << "  S.RANIA       -  BATSMAN" << endl;
		cout << "  Y.SINGH       -  BATSMAN" << endl;
		cout << "  MS.DHONI      -  BATSMAN" << endl;
		cout << "  PANDYA        -  ALL-ROUNDER" << endl;
		cout << "  MISHRA        -  ALL-ROUNDER" << endl;
		cout << "  YADAV         -  ALL-ROUNDER" << endl;
		cout << "  B.KUMAR       -  BOWLER" << endl;
		cout << "  BHUMRA        -  BOWLER" << endl;
	}

};





class africa {


public:
	africa()
	{
		cout << "                         SOUTH AFRICA" << endl;
		cout << "  D.COCK       -  BATSMAN" << endl;
		cout << "  S.AMLA       -  BATSMAN" << endl;
		cout << "  DU.PLUSSES   -  BATSMAN" << endl;
		cout << "  AB.DEVILEERS -  BATSMAN" << endl;
		cout << "  DUMNY        -  BATSMAN" << endl;
		cout << "  MARKAM       -  BATSMAN" << endl;
		cout << "  AB.MORKEL    -  ALL-ROUNDER" << endl;
		cout << "  IMRAN TAHIR  -  ALL-ROUNDER" << endl;
		cout << "  MILLER       -  ALL-ROUNDER" << endl;
		cout << "  MORKAL       -  BOWLER" << endl;
		cout << "  STYEN        -  BOWLER" << endl;
	}

};




class england {


public:
	england()
	{
		cout << "                         ENGLAND" << endl;
		cout << "  JASEN ROY    -  BATSMAN" << endl;
		cout << "  HALES        -  BATSMAN" << endl;
		cout << "  ROOT         -  BATSMAN" << endl;
		cout << "  MORGAN       -  BATSMAN" << endl;
		cout << "  B.SHAW       -  BATSMAN" << endl;
		cout << "  MOEEN ALI    -  BATSMAN" << endl;
		cout << "  B.STOCK      -  ALL-ROUNDER" << endl;
		cout << "  JORDAN       -  ALL-ROUNDER" << endl;
		cout << "  BALL         -  ALL-ROUNDER" << endl;
		cout << "  C.WOAKES     -  BOWLER" << endl;
		cout << "  ANDRESON     -  BOWLER" << endl;
	}

};

class values {
private:

protected:

public:
	int r, s, t, u, j = 0, v, w, z, i, x = 0, k = 0;

	int setdata()
	{

		for (i = 0; i <= 3; i++)
		{

			cout << "                    Enter Score From Keyboard As You Like But BTW 0-6" << endl;
			cin >> r;
			cin >> s;
			cin >> t;
			cin >> u;
			cin >> v;
			cin >> w;




			j = r + s + t + u + v + w;
			cout << " SCORE " << j << "    " << "AND OUT" << "  " << x << endl;
			k = k + j;

			x++;

		}
		cout << "                                     Score Per 4 Overs And Outs" << endl;
		cout << "TOTAL SCORE " << k << "    " << "AND OUTS" << "  " << x - 1
			<< endl;
		cout << "Run Rate Required Per Over Is     " << k / 4 << endl;

	}




};




class values2 {
private:

protected:

public:

	int r, s, t, u, v, w, z, i, x = 0, j = 0, y = 0;
	int setdata()
	{

		for (i = 0; i <= 3; i++)
		{

			cout << "                    Enter Score From Keyboard As You Like But BTW 0-6" << endl;
			cin >> r;
			cin >> s;
			cin >> t;
			cin >> u;
			cin >> v;
			cin >> w;


			j = r + s + t + u + v + w;
			cout << " SCORE " << j << "    " << "AND OUT" << "  " << x << endl;
			y = y + j;

			x = x + 2;

		}
		cout << "                                     Score Per 4 Over And Outs" << endl;
		cout << "TOTAL SCORE " << y << "    " << "AND OUTS" << "  " << x - 2
			<< endl;
		cout << "Run Rate Scored By Team Per Over Is     " << y / 4 << endl;
	}
};


int main()

{
	system("color 1a");
	int a, b;

	char c;




	cout << "                               " << "OOP FINAL PROJECT" << endl;
	cout << "                               " << "CRICKET MATCH GAME" << endl;
	cout << "           " << "GROUP MEMEBERS" << endl;
	cout << "           " << "UMAIS RASHID" << endl;
	cout << "           " << "SHAHEER AHMED" << endl;
	cout << "           " << "ABDUL REHMAN BUTT" << endl;
	cout << "           " << "RABIYA TARIQ" << endl;
	cout << "           " << "HAFIZA SHAZMA SHAHID" << endl;
	cout << "           " << "MALEEHA SAEED" << endl;
	cout << endl;

	cout << "              Here We Have A Game In Which We Play 4 Over Match Between Two Team Selected By User" << endl;

	cout << "                        5 Teams Are Avaiable In That Format Of Game" << endl;

	cout << "  1-  PAKISTAN" << endl;
	cout << "  2-  WINDIES" << endl;
	cout << "  3-  INDIA" << endl;
	cout << "  4-  SOUTH AFRICA" << endl;
	cout << "  5-  ENGLAND" << endl;
	cout << "                        Enter That Number Present Before The Team Firstly You Like To Select" << endl;

	cin >> a;
	cout << "                        Enter That Number Present Before The Team Secondly You Like To Select" << endl;
	cin >> b;
	system("color 6a");
	if (a == 1) {
		pakistan obj;
	}
	else if (a == 2) {
		windies obj2;
	}
	else if (a == 3) {
		india obj3;

	}
	else if (a == 4) {
		africa obj4;
	}
	else if (a == 5) {
		england obj5;

	}
	else {
		cout << "Enter Number Is Not In Given List" << endl;
	}



	if (b == 1) {
		pakistan obj;
	}
	else if (b == 2) {
		windies obj2;
	}
	else if (b == 3) {
		india obj3;

	}
	else if (b == 4) {
		africa obj4;
	}
	else if (b == 5) {
		england obj5;

	}
	else {
		cout << "Enter Number Is Not In Given List" << endl;
	}

	cout << "                                     TOSS" << endl;
	cout << "                   Enter H For Heads ----- Enter T For Tails" << endl;
	cin >> c;
	if (c == 'h')
	{
		cout << a << "    " << "Bat First" << endl;
	}
	else if (c == 't')
	{
		cout << b << "    " << "Bat First" << endl;
	}



	values v12;
	system("color 2a");
	v12.setdata();
	if (a == 1) {
		cout << "_____PAKISTAN TEAM_____" << endl;
		cout << "Babar Azam - 14" << endl;
		cout << "Mohammad asif - 08" << endl;
		cout << "Fakhar Zaman - 33" << endl;
		cout << "Hafeez - 05" << endl;
		cout << "Hussain Talat - 6" << endl;
		cout << "Sohaib malik - 10" << endl;
		cout << "Faheem- 19 " << endl;
	}
	else 	if (a == 2) {
		cout << "_____WINDIES TEAM_____" << endl;
		cout << "  CHRIS GAYLE  -  23" << endl;
		cout << "  LEWIS        -  11" << endl;
		cout << "  JASEN        -  19" << endl;
		cout << "  D.SMITH      -  05" << endl;
		cout << "  C.POLLAD     -  55" << endl;
		cout << "  RAMDIN       -  21" << endl;
	}
	else if (a == 3) {
		cout << "_____INDIA TEAM_____" << endl;
		cout << "  ROHIT SHARMA  -  21" << endl;
		cout << "  SHAKHAR       -  23" << endl;
		cout << "  V.KHOLI       -  11" << endl;
		cout << "  S.RANIA       -  09" << endl;
		cout << "  Y.SINGH       -  31" << endl;
		cout << "  MS.DHONI      -  02" << endl;
	}
	else if (a == 4) {
		cout << "_____AFRICA TEAM_____" << endl;
		cout << "  D.COCK       -  21" << endl;
		cout << "  S.AMLA       -  31" << endl;
		cout << "  DU.PLUSSES   -  16" << endl;
		cout << "  AB.DEVILEERS -  06" << endl;
		cout << "  DUMNY        -  12" << endl;
		cout << "  MARKAM       -  21" << endl;

	}
	else {
		cout << "_____ENGLAND TEAM_____" << endl;
		cout << "  JASEN ROY    -  11" << endl;
		cout << "  HALES        -  08" << endl;
		cout << "  ROOT         -  05" << endl;
		cout << "  MORGAN       -  23" << endl;
		cout << "  B.SHAW       -  12" << endl;
		cout << "  MOEEN ALI    -  12" << endl;
	}

	cout << endl;
	cout << "                          NOW SECOND TEAM BAT " << endl;
	values2 v21;
	system("color 3a");
	v21.setdata();
	if (b == 1) {
		cout << "_____PAKISTAN TEAM_____" << endl;
		cout << "Babar Azam - 14" << endl;
		cout << "Mohammad asif - 08" << endl;
		cout << "Fakhar Zaman - 33" << endl;
		cout << "Hafeez - 05" << endl;
		cout << "Hussain Talat - 6" << endl;
		cout << "Sohaib malik - 10" << endl;
		cout << "Faheem- 19 " << endl;
	}
	else 	if (b == 2) {
		cout << "_____WINDIES TEAM_____" << endl;
		cout << "  CHRIS GAYLE  -  23" << endl;
		cout << "  LEWIS        -  11" << endl;
		cout << "  JASEN        -  19" << endl;
		cout << "  D.SMITH      -  05" << endl;
		cout << "  C.POLLAD     -  15" << endl;
		cout << "  RAMDIN       -  21" << endl;
	}
	else if (b == 3) {
		cout << "_____INDIA TEAM_____" << endl;
		cout << "  ROHIT SHARMA  -  21" << endl;
		cout << "  SHAKHAR       -  23" << endl;
		cout << "  V.KHOLI       -  11" << endl;
		cout << "  S.RANIA       -  09" << endl;
		cout << "  Y.SINGH       -  31" << endl;
		cout << "  MS.DHONI      -  02" << endl;
	}
	else if (b == 4) {
		cout << "_____AFRICA TEAM_____" << endl;
		cout << "  D.COCK       -  21" << endl;
		cout << "  S.AMLA       -  31" << endl;
		cout << "  DU.PLUSSES   -  16" << endl;
		cout << "  AB.DEVILEERS -  06" << endl;
		cout << "  DUMNY        -  12" << endl;
		cout << "  MARKAM       -  21" << endl;

	}
	else {
		cout << "_____ENGLAND TEAM_____" << endl;
		cout << "  JASEN ROY    -  11" << endl;
		cout << "  HALES        -  08" << endl;
		cout << "  ROOT         -  05" << endl;
		cout << "  MORGAN       -  23" << endl;
		cout << "  B.SHAW       -  12" << endl;
		cout << "  MOEEN ALI    -  12" << endl;
	}
	cout << endl;
	if (v12.k < v21.y) {
		cout << "                                                 Second Team Wins";
	}
	else {
		cout << "                                                 First Team Wins";
	}
	cout << endl;
	cout << endl;
	cout << "                                                 CONGRATULATION" << endl;
	cout << "                                              Thank you for play game";
	//	result r1;
	//	r1.totals();
	//	man m1;
	//	m1.totals();


}
