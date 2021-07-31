/*
Use of typedef for function pointers in C/C++

typedef is a language construct that associates a name to a type.
You use it the same way you would use the original type, for instance

  typedef int myinteger;
  typedef char *mystring;
  typedef void (*myfunc)();
  
using them like

  myinteger i;   // is equivalent to    int i;
  mystring s;    // is the same as      char *s;
  myfunc f;      // compile equally as  void (*f)();
*/

//GLOBAL FUNCTION POINTERS


typedef void(*CALLBACK_FUNCTION)(int); // define the function pointer

void Bark(int nRepeat) // actual function to be passed to the pointer
{
	for (int i = 0; i < nRepeat; i++)
		printf("Bark!\n");
}

void Cry(int nRepeat) // actual function to be passed to thepointer
{
	for (int i = 0; i < nRepeat; i++)
		printf("Woooo!\n");
}

void Server(CALLBACK_FUNCTION m, int nRepeat)
{
	(*m)(nRepeat); // Invoking through function pointer
	printf("\n");
}

int main(int argc, char* argv[])
{
	Server(&Bark, 2); // passing function pointer
	Server(&Cry, 3);
	return 0;
}

/* 
OUTPUT :
Bark!
Bark!

Woooo!
Woooo!
Woooo!
*/
