//Student Name: Bryslin Chavous

//Teacher: Dr. Tyson McMillan

//Date: 11/29/2020

//A program to practice working with multi-dimensional arrays

#include <iostream>

using namespace std;

/*

Research Input data: go to http://www.weather.com

Pick two cities of your choice. Fill in the temperature for the 7 days of this week of both cities. Fill in this text data table, which will be used in your program.

//City_One = 1, City_Two = 2  Replace City_One and City_Two with the names of your cities

//Data Table

//City X, Day X: Temp

Fort Worth, Day 1: 53

Fort Worth, Day 2: 60

Fort Worth, Day 3: 55

Fort Worth, Day 4: 49

Fort Worth, Day 5: 54

Fort Worth, Day 6: 59

Fort Worth, Day 7: 62

Santa Monica, Day 1: 69

Santa Monica, Day 2: 73

Santa Monica, Day 3: 71

Santa Monica, Day 4: 67

Santa Monica, Day 5: 67

Santa Monica, Day 6: 68

Santa Monica, Day 7: 69

*/

 

int main()

{

      const int CITY = 2;

      const int WEEK = 7;

 

    int temperature[CITY][WEEK];

    int cityOne[7] = {53, 60, 55, 49, 54, 59, 62}; //preset data
    int cityTwo[7] = {69, 73, 71, 67, 67, 68, 69};

    for (int i = 0; i < CITY; ++i)

    {

        for(int j = 0; j < WEEK; ++j)

        {
           temperature[i][j] = cityOne[j]; //inject data into tempurature array

            cout << "City " << i + 1 << ", Day " << j + 1 << " : " << temperature[i][j] << endl;


        }

    }

    //Note your input data from the above
    cout << "\n" << endl;
    cout << "Enter all temperature for a week of first city and then second city. \n";

 

    // Inserting the values into the temperature array

    //note for every dimension of the array you need a for loop 2 dimensions = 2 for loops

    for (int i = 0; i < CITY; ++i)

    {

        for(int j = 0; j < WEEK; ++j)

        {

            cout << "City " << i + 1 << ", Day " << j + 1 << " : ";

            cin >> temperature[i][j];

        }

    }

 

    cout << "\n\nDisplaying Values:\n";

 

    // Accessing the values from the temperature array

    for (int i = 0; i < CITY; ++i)

    {

        for(int j = 0; j < WEEK; ++j)

        {

            cout << "City " << i + 1 << ", Day " << j + 1 << " = " << temperature[i][j] << endl;

        }

    }

   /*For up to 5 Points Extra Credit

      Expand this program:

      1. Create a one dimensional array, cityOne[7] to store the 7 temperatures of city 1, assume that value 0 represents day 1, 1 represents day 2....

      2. Create a on dimensional array, cityTwo[7] to store the 7 temperatures of city 2 , assume that value 0 represents day 1, 1 represents day 2....

      3. Using a for loop (or nested for loop), feed the data of CityOne[] and CityTwo[] into temperature[i][j], where i is index of the City Number, and j is the index of the temp for the day.

      4. print the results of temperature[i][j]; to the screen.

    */

 

    return 0;

}

//Source