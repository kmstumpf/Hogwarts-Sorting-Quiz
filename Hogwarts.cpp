#include <iostream>
#include <cmath>
#include "stdafx.h"
using namespace std;

int main()
{
	//Display message: 

	bool repeat = true;

	cout << "Let the sorting begin!";

	while (repeat == true)
	{

		cout << "\n Choose one of the following:\n\n a. fire \n b. water\n c. earth\n d. air \n \n Answer:   ";

		char answer;  //declaration
		int Slytherin = 0; //declaration and initialization
		int Gryffindor = 0, Hufflepuff = 0; //if same data type, it can be delcared/initialized on the same line, seperated by a comma. 
		int Ravenclaw(0);	//round bracket can also used for initialization


		cin >> answer;		 //never use endl on a cin command because endl is an ostream object while cin is an istream object. 

		while (!(answer == 'a' || answer == 'b' || answer == 'c' || answer == 'd'))
		{
			cout << "\n Invalid answer. \n Please enter the letter which corresponds to your choice. \n \n Choose one of the following:\n\n a. fire \n b. water\n c. earth\n d. air \n \n Answer:   ";
			cin >> answer;
		}

		if (answer == 'a')
		{
			Gryffindor = Gryffindor + 1;
		}
		else if (answer == 'b')
		{
			Slytherin = Slytherin + 1;
		}
		else if (answer == 'c')
		{
			Hufflepuff++;
		}
		else if (answer == 'd')
		{
			Ravenclaw++;
		}
		else
		{
			(answer != 'a' || 'b' || 'c' || 'd');

			cout << "\n \n Invalid answer.\n";
		}


		do
		{
			cout << "\n\n Due to scheduling conflicts you are only able to enroll in one of the following classes. Do you choose... \n\n a. Care of Magical Creatures \n b. Defense Against the Dark Arts \n c. Ancient Runes \n d. Divination \n e. Potions \n\n Answer:  ";
			cin >> answer;

			switch (answer)
			{
			case('a') :
				Hufflepuff++;
				break;
			case('b') :
				Gryffindor++;
				break;
			case('c') :
				Ravenclaw++;			// ALL ADVANCE
				break;
			case('d') :
				Ravenclaw--;
				break;
			case('e') :
				Slytherin++;
				break;
			default:
				cout << "Invalid answer. Please enter the letter which corresponds to your choice.";

			}
		} while (!(answer == 'a' || answer == 'b' || answer == 'c' || answer == 'd' || answer == 'e'));



		do
		{
			cout << "\n You'd rather be a...\n\n a. Squib\n b. Muggle \n\n Answer: ";
			cin >> answer;

			switch (answer)
			{
			case('a') :
				Ravenclaw++;
				Slytherin++;
				break;
			case('b') :
				Gryffindor++;			//ALL ADVANCE
				Hufflepuff++;
				break;
			default:
				cout << "Invalid answer. Please enter the letter which corresponds to your choice.";
			}
		} while (!(answer == 'a' || answer == 'b'));




		//cout << "\n\n Which dark creature would you rather encounter, a(n)...\n a. Dementor\n b. Inferi\n c. Acromantula \n d. B "

		cout << "\n \n Which house do you want to be in?\n \n a. Ravenclaw \n b. Hufflepuff \n c. Slytherin \n d. Gryffindor \n \n Answer:  ";
		while (true)
		{
			cin >> answer;

			if (answer == 'a')
			{
				Ravenclaw++;
				break;
			}
			else if (answer == 'b')
			{
				Hufflepuff++;
				break;
			}
			else if (answer == 'c')
			{
				Slytherin++;
				break;
			}
			else if (answer == 'd')
			{
				Gryffindor++;
				break;
			}
			else
			{
				cout << "\n \n Invalid answer. \n \n";
			}
		}

		cout << "\n Given the choice, you would be a...\n\n a. Merperson \n b. Centaur \n c. Ghost \n d. Veela \n \n Answer: ";
		int correctanswer(0);
		while (correctanswer == 0)

		{
			cin >> answer;

			switch (answer)
			{
			case('a') :
				correctanswer++;
				break;
			case('b') :
				Ravenclaw++;
				correctanswer++;		//SANS GRYFFINDOR
				break;
			case('c') :
				Hufflepuff++;
				correctanswer++;
				break;
			case('d') :
				Slytherin++;
				correctanswer++;
				break;
			}
		}
		do
		{
			cout << "\n\n In an unknown situation, you are able to use only one spell. You choose... \n\n a. Stupefy \n b. Legilimens \n c. Disillusionment Charm \n d. Lumos \n e. Repello Muggletum \n f. Protego \n g. Expecto Patronum \n h. Obliviate \n i. Portus \n j. Incendio \n\n Answer:  ";
			cin >> answer;
			if (answer != 'a' && answer != 'b' && answer != 'c' && answer != 'd' && answer != 'e' && answer != 'f' && answer != 'g' && answer != 'h' && answer != 'i' && answer != 'j')
				cout << "\n\n Invalid Answer.\n Please enter the letter which corresponds to your choice.";
		} while (answer != 'a' && answer != 'b' && answer != 'c' && answer != 'd' && answer != 'e' && answer != 'f' && answer != 'g' && answer != 'h' && answer != 'i' && answer != 'j');
		switch (answer)
		{												// is there another Hufflepuff spell?
		case('a') :
			Gryffindor += 2; // Gryffindor + 2;
			break;
		case('b') :
			Slytherin++; //this operator can only be used on declared variables
			Ravenclaw++;
			break;
		case('c') :
			Slytherin++;
			break;
		case('d') :
			Ravenclaw++;
			break;
		case('e') :
			Hufflepuff--;
			break;
		case('f') :
			Hufflepuff = 2 + Hufflepuff;
			break;
		case('g') :
			Ravenclaw++;
			break;
		case('h') :
			Slytherin++;
			break;
		case('i') :
			Slytherin++;
			Ravenclaw++;
			Gryffindor--;
			break;
		case('j') :
			Gryffindor++;
			break;
		}

		do
		{
			cout << "\n You'd rather play... \n\n a. Wizard's Chess\n b. Exploding Snap \n c. Quidditch \n \n Answer:   ";
			cin >> answer;
			if (answer != 'a' && answer != 'b' && answer != 'c')
				cout << "\n Invalid Answer. Please enter the letter which corresponds to your choice.";
		} while (answer != 'a' && answer != 'b' && answer != 'c');
		switch (answer)
		{
		case('a') :
			Ravenclaw++;
			break;
		case('b') :
			break;
		case('c') :
			break;
		}

		do
		{
			cout << "\n\n Who would you rather be... \n a. Voldemort \n b. Herpo the Foul \n c. Grindelwald \n d. Umbridge \n\n Answer: ";
			cin >> answer;
			if (answer != 'a' && answer != 'b' && answer != 'c' && answer != 'd')
				cout << "\n Invalid Answer. Please enter the letter which corresponds to your choice.";
		} while (answer != 'a' && answer != 'b' && answer != 'c' && answer != 'd');
		switch (answer)
		{
		case('a') :
			Slytherin++;
			break;
		case('b') :
			Ravenclaw++;
			break;
		case('c') :
			Gryffindor++;
			break;
		case('d') :

			break;
		}



		do
		{
			cout << "\n\n Pick a potion...\n\n a. Amortentia\n b. Essence of Dittany \n c. Veritaserum\n d. Felix Felicis \n e. Polyjuice Potion\n\n Answer: ";
			cin >> answer;
			if (answer != 'a' && answer != 'b' && answer != 'c' && answer != 'd' && answer != 'e')
				cout << "\n\nInvalid Answer.";
		} while (answer != 'a' && answer != 'b' && answer != 'c' && answer != 'd' && answer != 'e');
		switch (answer)
		{
		case('a') :
			Slytherin++;
			Gryffindor--;
			Hufflepuff--;
			break;
		case('b') :
			Hufflepuff++;
			//Gryffindor--;
			break;
		case('c') :
			Slytherin++;
			Ravenclaw++;
			Gryffindor--;
			break;
		case('d') :
			Gryffindor++;
			break;
		case('e') :
			
			break;  
		}

		//cout << "\n\n You are in Flourish and Blotts on Diagon Alley. You buy... \n"



		do
		{
			cout << "\n\n Your favourite magical creature is a...\n\n a. Dragon \n b. Basilisk \n c. Niffler\n d. Flesh-Eating Slug\n e. Hippogriff\n f. Unicorn \n g. Phoenix\n h. Flobberworm\n i. Pygmy Puff\n j. Thestral\n\n Answer:  ";
			cin >> answer;
			if (answer != 'a' && answer != 'b' && answer != 'c' && answer != 'd' && answer != 'e' && answer != 'f' && answer != 'g' && answer != 'h' && answer != 'i' && answer != 'j')
				cout << "\n\nInvalid Answer.";
		}

		while (answer != 'a' && answer != 'b' && answer != 'c' && answer != 'd' && answer != 'e' && answer != 'f' && answer != 'g' && answer != 'h' && answer != 'i' && answer != 'j');
		switch (answer)
		{
		case('a') :
			Gryffindor++;
			Slytherin++;
			break;
		case('b') :
			Slytherin++;
			break;
		case('c') :
			Hufflepuff++;
			break;
		case('e') :
			Ravenclaw++;
			break;
		case('f') :
			Hufflepuff++;
			break;
		case('g') :
			Gryffindor++;
			break;
		case('i') :
			Hufflepuff++;
			break;
		case('j') :
			Ravenclaw++;
			break;
		}
		do
		{
			cout << "\n\n Would you rather know your... \n\n a. Patronus \n b. Animagus \n c. Boggart \n d. Reflection in the Mirror of Erised\n\n Answer: ";
			cin >> answer;
			if (answer != 'a' && answer != 'b' && answer != 'c' && answer != 'd')
				cout << "\n\nInvalid Answer.";
		} while (answer != 'a' && answer != 'b' && answer != 'c' && answer != 'd');
		switch (answer)
		{
		case('a') :
			Hufflepuff++;
			break;
		case('b') :		//should I put Ravenclaw as Animagus? I dunno. SANS RAVENCLAW
			break;
		case('c') :
			Slytherin++;
			break;
		case('d') :
			Gryffindor++;
			break;
		}

		do
		{
			cout << "\n You would choose the... \n\n a. Wand\n b. Stone\n c. Cloak\n\n Answer:  ";
			cin >> answer;
			if (answer != 'a' && answer != 'b' && answer != 'c')
				cout << "Invalid answer.";
		} while (answer != 'a' && answer != 'b' && answer != 'c');
		switch (answer)
		{
		case('a') :
			Gryffindor++;
			Slytherin++;
			break;					//SANS RAVENCLAW
		case('b') :
			Hufflepuff++; //should Hufflepuff get points here?
			Slytherin--;
			break;
		case('c') :
			break;
		}

		do
		{
			cout << "\n\n Deprived of your wand, you'd reach for your... \n\n a. Quill\n b. Potion\n c. Friend\n d. Shield \n e. Broom\n f. Sword\n\n Answer: ";
			cin >> answer;
			if (answer != 'a' && answer != 'b' && answer != 'c' && answer != 'd' && answer != 'e' && answer != 'f')
				cout << "\n\nInvalid entry. Enter the letter which corresponds to your choice.\n";
		} while (answer != 'a' && answer != 'b' && answer != 'c' && answer != 'd' && answer != 'e' && answer != 'f');
		switch (answer)
		{
		case('a') :
			Ravenclaw++;
			break;
		case('b') :
			Ravenclaw++;
			break;
		case('c') :
			Hufflepuff++;
			break;
		case('d') :
			Hufflepuff++;
			break;
		case('e') :
			Slytherin++;
			break;
		case('f') :
			//Slytherin++;
			Gryffindor++;
			break;
		}


		/*cout << "\n Your pet of choice at Hogwarts would be a... \n\n a. Cat\n b. Rat\n c. Toad\n d. Owl\n\n Answer: ";
		cin >> answer;
		if (answer == 'd')
		{
		//Slytherin = Slytherin + 1;
		//Ravenclaw++;
		//Gryffindor++;		//second opinions on these would be good. Perhaps only Slytherin should get a plus one... or even a minus one (for anything else) with no pluses. And the rest of the houses will not be affected.
		}
		else if (answer == 'a'|'b'|'c')
		{
		;//Slytherin--;
		}
		else
		{
		cout << "\n Invalid Answer.";
		}*/

		if (Slytherin > Gryffindor && Slytherin > Hufflepuff && Slytherin == Ravenclaw || Slytherin == Hufflepuff && Slytherin > Ravenclaw && Slytherin > Gryffindor || Slytherin == Gryffindor && Ravenclaw < Slytherin && Slytherin > Hufflepuff || Ravenclaw == Gryffindor && Ravenclaw > Slytherin && Ravenclaw > Hufflepuff || Ravenclaw == Slytherin && Ravenclaw > Gryffindor && Ravenclaw > Hufflepuff || Ravenclaw == Hufflepuff && Ravenclaw > Gryffindor && Ravenclaw > Slytherin || Hufflepuff == Gryffindor && Hufflepuff > Ravenclaw && Hufflepuff > Slytherin || Hufflepuff == Slytherin && Hufflepuff > Gryffindor && Hufflepuff > Ravenclaw || Hufflepuff == Ravenclaw && Hufflepuff > Slytherin && Hufflepuff > Gryffindor || Gryffindor == Slytherin && Gryffindor > Hufflepuff && Gryffindor > Ravenclaw || Gryffindor == Hufflepuff && Gryffindor > Ravenclaw && Gryffindor > Slytherin || Gryffindor == Ravenclaw && Gryffindor > Hufflepuff && Gryffindor > Slytherin)
		{
			cout << "\n\n Your preferred method of travel is... \n\n a. Floo \n b. Apparation \n c. Flying \n d. Portkey  \n\n Answer: ";
			cin >> answer;
			switch (answer)
			{
			case('a') :
				Hufflepuff++;
				break;
			case('b') :
				Ravenclaw++;
				break;
			case('c') :
				Gryffindor++;
				break;
			case('d') :
				Ravenclaw++;
				break;
			case('e') :
				break;
			}

			//cout << "\n\n When you arrive in Diagon Alley you head straight for...\n\n a. Flourish and Blotts \n b. Gringotts \n c. Quality Quidditch Supplies \n d. Eeylops Owl Emporium ";

			/*cout << "\n\n After graduating from Hogwarts you'd like to be a(n)... \n a. Auror \n b. Professor \n c. Healer \n d. Entrepreneur \n e. Quidditch player \n f. Cursebreaker\n Answer: ";
			cin >> answer;
			switch (answer)
			{
			case('a') :
			Gryffindor++;
			break;
			case('b') :
			Ravenclaw++;
			break;
			case('c') :
			Hufflepuff++;
			break;
			case('d') :
			Slytherin++;
			break;
			case('e') :
			break;
			case('f') :
			Gryffindor++;
			break;
			}
			}

			cout << "\n\n			You belong in the noble house of...\n\n\n";



			if (Gryffindor > Slytherin && Gryffindor > Hufflepuff && Gryffindor > Ravenclaw)
			{
			cout << "\n				G R Y F F I N D O R \n";
			}

			else if (Ravenclaw > Gryffindor && Ravenclaw > Slytherin && Ravenclaw > Hufflepuff)
			{
			cout << "\n				R A V E N C L A W \n";
			}

			else if (Hufflepuff > Gryffindor && Hufflepuff > Ravenclaw && Hufflepuff > Slytherin)
			{
			cout << "\n				H U F F L E P U F F \n";
			}
			else if (Slytherin > Gryffindor && Slytherin > Hufflepuff && Slytherin > Ravenclaw)
			{
			cout << "\n				S L Y T H E R I N \n \n";
			}
			else
			{


			cout << "\n\n\n		    I regret to inform you that you are a squib.\n\n";

			}*/

		}




		if (Gryffindor > Slytherin && Gryffindor > Hufflepuff && Gryffindor > Ravenclaw)
		{
			cout << "\n\n			You belong in the noble house of...\n\n\n";
			cout << "\n				G R Y F F I N D O R \n";
		}

		else if (Ravenclaw > Gryffindor && Ravenclaw > Slytherin && Ravenclaw > Hufflepuff)
		{
			cout << "\n\n			You belong in the noble house of...\n\n\n";
			cout << "\n				R A V E N C L A W \n";
		}

		else if (Hufflepuff > Gryffindor && Hufflepuff > Ravenclaw && Hufflepuff > Slytherin)
		{

			cout << "\n\n			You belong in the noble house of...\n\n\n";
			cout << "\n				H U F F L E P U F F \n";
		}
		else if (Slytherin > Gryffindor && Slytherin > Hufflepuff && Slytherin > Ravenclaw)
		{
			cout << "\n\n			You belong in the noble house of...\n\n\n";
			cout << "\n				S L Y T H E R I N \n \n";
		}
		//else
		//	{




		//cout << "\n\n\n		    I regret to inform you that you are a squib.\n\n";
		//}




		/*cout << "\n\n\n Would you like to see how you scored in each house? \n\n a. Yes \n b. No \n\n Answer:  ";
		cin >> answer;
		if (answer == 'a')
		{
		cout << "\n Gryffindor:";
		cout << Gryffindor;
		cout << "\n Slytherin:";
		cout << Slytherin;
		cout << "\n Ravenclaw:";
		cout << Ravenclaw;
		cout << "\n Hufflepuff:";
		cout << Hufflepuff;
		}*/

		cout << "\n\n\n Would you like to see how you scored in each house? \n\n a. Yes \n b. No \n\n Answer:  ";
		cin >> answer;
		if (answer == 'a')
		{
			cout << "\n Gryffindor:";
			cout << Gryffindor;
			cout << "\n Slytherin:";
			cout << Slytherin;
			cout << "\n Ravenclaw:";
			cout << Ravenclaw;
			cout << "\n Hufflepuff:";
			cout << Hufflepuff;
		}
		if (answer != 'a' && answer !='b')
				cout << "Invalid answer. Please enter the letter which corresponds to your choice.";

		/*cout << "\n\n You would prefer to fall ill with... \n a. Amnesia \n b. Dragonpox \n c. Vanishing Sickness \n d. Spattergroit \n\n Answer:  ";
		cin >> answer;
		switch (answer)
		{
		case('a') :
		Ravenclaw--;
		break;

		}*/


		cout << "\n\n Sort next student? \n\n a. Yes \n b. No \n\n Answer:";
		cin >> answer;
		if (answer == 'a')
			repeat = 1;
		if (answer == 'b')
			repeat = 0;
		else
			cout << "Invalid answer. Please enter the letter corresponding to your choice.";

	}
		return 0;

}