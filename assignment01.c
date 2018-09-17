
#include <stdio.h>

int
main (void)
{

// Our first challange here, according to the problem description, is to create space
// for the string to be stored. We can do this with an array. An array is a special
// term for a series of boxes (spaces) in memory to store a certain type of data.
// Think of it like a stack of boxes - each box must be similar but can contain
// different things. For instance, you can have 10 boxes stacked on top of each
// as long as they are similar in size.

// Since we are storing a collection of single letters, we want to have a box that 
// would fit! The data type for a single letter in c is called a char. Not everything
// we ever would want to store has a datatype, so in more advanced problems we may have
// to use more creative solutions to store what we want.

// So, for our first proble, we must create a string of characters. That is done below.
// The syntax for this is dataType nameOfArray[sizeOfArray]; The nameOfArray should be
// anything that describes what we are storing. In this case, we get a list from the user.

  char userInput[1000];

// Now, we have 1000 boxes that can hold a letter in memory. We can reference these "boxes"
// with nameOfArray[boxIWant] - with counting starting at zero! So, the 1st letter is 0, and
// the 3rd is 2, with the last being 999. For instance, if I want the last one, it's userInput[999];

// Our next step is to STORE what the user wants into our array. In order to do this, we must use scanf().

// But before we store anything, we should tell the user to type something in. We accomplish this with printf.

  printf ("Please enter in a sentence.\n");

// Read more about scanf here: https://www.dummies.com/programming/c/basics-of-the-scanf-function-in-c-programming/
  scanf ("%s", &userInput);

// So now it's stored! Easy as that. The last step of the problem is to count up every time the letter 'e' happens.
// Before we start counting, let's tell the computer that we want a space for a number to count that.
// We should start at zero.

  int howManyE = 0;

// So now, we want to go through the sentance and start counting. The only (practical) way to do this is a loop.
// A loop is something that allows us to repeat a number of statements (lines of code). The assignment mentions a while loop.
// So we will use that.

// The simplest loop is the WHILE loop. The while loop essentially says while (this is true)
// {
// do this.
// }
// Now that your done doing this, go up to the top and see if this is still true.
// So, we are counting up letters. The most letters there can be is 1000. So, we should create a space to store
// the NUMBER of the letter we are currently on.

  int numberOfLetter = 0;

// So, once the loop happens, we increase it by one. Now, all we do is a check to see if the current letter is
// an 'e' or 'E' and count up by one. And, per the instructions, we end if we hit a '\0'. Let's write the loop now.

  while (numberOfLetter < 1000)
    {
// the || means OR. So if one side is true or the other side is true, we evaluate to true.
      if (userInput[numberOfLetter] == 'e'
	  || userInput[numberOfLetter] == 'E')
	{
	  howManyE = howManyE + 1;
	}

      // If we hit '\0', we should stop.

      if (userInput[numberOfLetter] == '\0')
	{
	  // break means exit out of the nearest loop.
	  break;
	}
      // Increment our counter.
      numberOfLetter++;

    }
  // How many Es did we find?
  printf ("I found %d occurances of the letter e.\n", howManyE);

  // Now to calculate the frequency. The frequency is calculated by the 
  // numberOfEs / totalLengthOfString.
  printf ("The frequency of e is %f percent.\n",
	  ((howManyE * 1.0 / numberOfLetter) * 100.0));

}

