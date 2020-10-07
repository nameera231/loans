#include <stdio.h>

int main(void) {

        /*declare variables*/

        double initial;
        /*this is the total payments made*/
        double totalp;
        int a=1;
        double b,c,d;
        /*a is month number, b is balance, c is the interest rate and d is the payment*/
          



          printf("Enter Initial Balance-Interest Rate-Payment per month(separate each value with '-'):\n");
          scanf("%lf-%lf-%lf",&b,&c,&d);

          /*save initial balance separately because we will be changing the value of b and we will need the initial balance in later calculation*/
          initial = b;



          /*table headers*/
        printf("      Month    Balance    \n");
        printf("        00  %10.2lf    \n",initial);

        /*Initial Balance will also have some interest*/
         b = b+b*(c/100);


        /*If payment greater than balance then stop the loop*/
        while (d<b)
        {
          /*new balance after payment*/
        b = b-d;
        /*print balance and month number each time the loop runs*/
        printf("%10.2d  %10.2lf\n",a,b);
        /*new month*/
        b = b+b*(c/100);
        a++;
        }



        /*partial calculation of total payment*/
        totalp = (a - 1) * d ;
        printf("         %d          0    \n",a);
        printf("Final payment in month %d: %10.2lf\n",a,b);
        /*complete calculation of total payment*/
        totalp = totalp + b;
        /*computing cost of loan*/
        double cost = totalp - initial;
        printf("Total payment:%25.2lf \nCost of loan: %25.2lf\n",totalp,cost );

      return 0;
}
