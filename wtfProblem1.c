#include <stdio.h>

int main()
{
int i = 6;
printf("%d %d %d", i++, i++, i++);
return 0;
}

//Output is : 8 7 6. WHY ?
/* Make some sense of this :
https://stackoverflow.com/questions/949433/why-are-these-constructs-using-pre-and-post-increment-undefined-behavior
https://en.wikipedia.org/wiki/Sequence_point

EXAMPLES OF AMBIGUITY 

Consider two functions f() and g(). In C and C++, the + operator is not associated with a sequence point, and therefore in the 
expression f()+g() it is possible that either f() or g() will be executed first. The comma operator introduces a sequence point, and 
therefore in the code f(),g() the order of evaluation is defined: first f() is called, and then g() is called.

Sequence points also come into play when the same variable is modified more than once within a single expression. An often-cited example
is the C expression i=i++, which apparently both assigns i its previous value and increments i. The final value of i is ambiguous, because, 
depending on the order of expression evaluation, the increment may occur before, after, or interleaved with the assignment. The definition 
of a particular language might specify one of the possible behaviors or simply say the behavior is undefined. In C and C++, evaluating such 
an expression yields undefined behavior.[4] Other languages, such as C#, define the precedence of the assignment and increment operator in 
such a way that the result of the expression i=i++ is guaranteed.

*/
