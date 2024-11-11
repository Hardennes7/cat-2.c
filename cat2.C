quetion 1:
. Using a for loop with a C program that output the following pattern on the screen. (10 marks)
* * * *
* * * 
* *
*

              #include <stdio.h>

     int main() {
    int a, b;

    
    for (a = 10; a >= 1; a--) {
        
        for (b = 1; b <= a; b++) {
            printf("* ") ;
            }
             printf("\n");  
            }
       
    return 0;
}

2. Using a while loop, write a program that calculates the sum of squares of all integers between 
1 and 40. (10 marks)

  
#include <stdio.h>

int main() {
    int i = 1;        
    int a = 0;   
    int b=0;
    while (i <= 40)
    {
       b=i*i;
       a=b+a;
        i++;          
    }

    printf("The sum of squares of integers from 1 to 40 is: %d\n", a );

    return 0;
}
 a += i * i;








3. Draw a flowchart to explain the program that returns the sum and product of three numbers.
