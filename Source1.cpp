//Chad Clark

//This program calculates the likelihood of any two people in groups of 2-50 people 
//having their birthday on the same day, also known as the Birthday Paradox.

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cmath>
using namespace std;

int main()
{
int people, trial, count = 0, birthdays[50], numMatches, NUM_TRIALS = 5000;
double total;
int sameBirthday;

//function call
sameBirthday(birthdays, people);
numMatches = 0;

for (people = 2; people <= 50; people++)
{
			//Run trials to see if people have the same birthday
			//Reset number of matches		numMatches = 0;
	for (trial = 0; trial < NUM_TRIALS; trial++)	
	{
		//Randomly generate up to "people" birthdays
		for (int i = 0; i < people; i++)
		{
			birthdays[people] = (rand() % 365) + 1;
			//Check to see if any two people have the same birthday
			for (i = 1; i < people; i++)
			{
				//birthday one
				for (int j = 0; j < i-1; j++)
				{
					//birthday two
					for (int k = j + 1; k < i; k++);
				}
			}
		}
	}
}

bool sameBirthday(int birthdays[], int people)
{
    //if the two birthdays are the same, add one to the count 
    if (birthdays[j] == birthdays[k])
    {
        people++;
    }

    total = (numMatches / 5000.0);
    cout << "For " << people << " people, the probability of two birthdays is about " << total << endl;

}

return 0;