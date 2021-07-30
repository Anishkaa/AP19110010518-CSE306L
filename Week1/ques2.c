/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void
main ()
{
  int state = 0, i = 0;
  char language, input[50];
  printf ("Enter input string \t :");
  scanf ("%s", input);


  while ((language = input[i++]) != '\0')
    {

      switch (state)
	{
	case 0:
	  if (language == '0')
	    state = 1;
	  else if (language == '1')
	    state = 2;
	  else
	    {
	      printf ("Invalid token");
	      exit (0);
	    }
	  break;
	case 1:
	  if (language == '0')
	    state = 3;
	  else if (language == '1')
	    state = 2;
	  else
	    {
	      printf ("Invalid token");
	      exit (0);
	    }

	  break;
	case 2:
	  if (language == '0')
	    state = 1;
	  else if (language == '1')
	    state = 4;
	  else
	    {
	      printf ("Invalid token");
	      exit (0);
	    }
	  break;
	case 3:
	  if (language == '0')
	    state = 3;
	  else if (language == '1')
	    state = 2;
	  else
	    {
	      printf ("Invalid token");
	      exit (0);
	    }
	  break;
	case 4:
	  if (language == '0')
	    state = 1;
	  else if (language == '1')
	    state = 4;
	  else
	    {
	      printf ("Invalid token");
	      exit (0);
	    }
	  break;
	}

    }
  if (state == 3 || state == 4)
    printf ("\n\nString accepted\n\n");


  else
    printf ("\n\nString not accepted\n\n");
}
