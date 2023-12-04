//Yugo Imanishi
//ID: 106008457

#include<iostream>
#include<cctype>
#include<string>
#include<cassert>
using namespace std;


int locateMaximum(const  string  array[], int  n)
{
    string max = array[0];
    int maxLocation = 0;
    //checks is n is an positive integer
    if (n <= 0)
    {
        return -1;
    }
    else
    {
        //checks if each item is bigger than the next until end of declared int n
        for (int i = 0; i < n; i++)
        {
            if (max < array[i])
            {
                //sets max as the maximum array and the location of max as i
                max = array[i];
                maxLocation = i;
            }
        }
        return maxLocation;
    }
}

int countFloatingPointValues(const string array[], int  n)
{
    int floatingPointValues = 0;
    //checks if n is an positive integer
    if (n <= 0)
    {
        return -1;
    }
    else
    {
        //goes through entire string to find number of floating values
        for (int i = 0; i < n; i++)
        {

            //sets parameter at 0
            int digitCount = 0;
            int periodCount = 0;

            //sets each element in array as its own independent string
            string arrayElement = array[i];

            //checks each element for digit
            int j = 0;
            for (j = 0; j <= arrayElement.size(); j++)
            {
                //checks for digit or period or breaks if violated
                if (isdigit(arrayElement[j]))
                {
                    digitCount++;
                }
                else if (arrayElement[j] == '.')
                {
                    periodCount++;
                }
                else
                {
                    break;
                }
            }

            //checks if there is an number and 1 or 0 period
            if (digitCount > 0 && periodCount <= 1 && j == arrayElement.size())
            {
                floatingPointValues++;
            } 
        }
        return floatingPointValues;
    }
}

bool hasNoCapitals(const string array[], int n)
{
    //checks if n is positive integer. If not, it should return true because technically its true.
    if (n <= 0)
    {
        return true;
    }
    else
    {
        //repeats for each element
        for (int i = 0; i < n; i++)
        {
            //sets each element as its own individual string
            string arrayElement = array[i];
            int j;
            for (j = 0; j <= arrayElement.size(); j++)
            {
                //check the entire line if the element has capital letters. Returns false if it does.
                if (isupper(arrayElement[j]))
                {
                    return false;
                }
            }
        }
        return true;
    }
}

int shiftLeft(string array[], int n, int amount, string placeholder)
{
    int placeholderAmount=0;
    //checks if n is a positive integer
    if (n <= 0 || amount < 0)
    {
        return -1;
    }
    else
    {
        //goes thorugh the array until possible shiftable abount ("n-amount" because array(n+1) doesn't exist) and sets each array as the new shifted value. 
        if (amount >= n)
        {
            for (int i = 0; i < n; i++)
            {
                array[i] = placeholder;
            }
        }
        else
        {
            for (int i = 0; i < n - amount; i++)
            {
                array[i] = array[i + amount];
            }
            for (int j = 0; j < amount; j++)
            {
                array[(n + j) - amount] = placeholder;
            }
        }

        //checks for amount of placeholder
        for (int i = 0; i < n; i++)
        {
            if (array[i] == placeholder)
            {
                placeholderAmount++;
            }
        }
        return placeholderAmount;
    }
}

int main()
{
    string a[6] = { "123", "456", "789", "gamma", "beta", "delta" };
    string b[5] = { "1","2", "3", "4", "Hello"};
    string c[6] = { "1.0","0.1", "001", "0.0.1", "1", "he110"};

    assert(locateMaximum(b, 2) == 1);
    assert(locateMaximum(a, 2) == 1);
    assert(locateMaximum(b, 5) == 4);

    assert(countFloatingPointValues(a, 6) == 3);
    assert(countFloatingPointValues(b, 3) == 3);
    assert(countFloatingPointValues(c, 6) == 4);

    assert(hasNoCapitals(a, 6) == true);
    assert(hasNoCapitals(b, 4) == true);
    assert(hasNoCapitals(b, 5) == false);
   
    assert(shiftLeft(a, 3, 1, "hello") == 1);
    assert(shiftLeft(b, 3, 10, "Yugo Was Here") == 3);
    assert(shiftLeft(c, 6, 10, "CS31") == 6);

    cout << "All tests succeeded" << endl;
    return(0);
}