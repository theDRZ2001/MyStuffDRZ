#include <stdio.h>
#include <cs50.h>

long get_CCnumber(void);
int getSum(int a);


int main (void)
{

    //get card number
    //build in some way to test if it's
    //credit card numbers have 16 digits

    //long ccnumber = get_CCnumber();

    long ccnumber = get_long("Credit Card Number: ");

    if (ccnumber < 1000000000000 || ccnumber > 9999999999999999) {
        printf("INVALID\n");
    }

    else {







    //acquire each digit of the ccnumber counting from the last digit

    int one = ccnumber % 10;
    //printf("%i\n", one);

    ccnumber /= 10;
    //printf("%ld\n", ccnumber);


    int two = ccnumber % 10;
    //printf("%i\n", two);

    ccnumber /= 10;
    //printf("%ld\n", ccnumber);

    int three = ccnumber % 10;
    //printf("%i\n", three);

    ccnumber /= 10;
    //printf("%ld\n", ccnumber);

    int four = ccnumber % 10;
    //printf("%i\n", four);

    ccnumber /= 10;
    //printf("%ld\n", ccnumber);

    int five = ccnumber % 10;
    //printf("%i\n", five);

    ccnumber /= 10;
    //printf("%ld\n", ccnumber);

    int six = ccnumber % 10;
    //printf("%i\n", six);

    ccnumber /= 10;
    //printf("%ld\n", ccnumber);

    int seven = ccnumber % 10;
    //printf("%i\n", seven);

    ccnumber /= 10;
    //printf("%ld\n", ccnumber);

    int eight = ccnumber % 10;
    //printf("%i\n", eight);

    ccnumber /= 10;
    //printf("%ld\n", ccnumber);


    int nine = ccnumber % 10;
    //printf("%i\n", nine);

    ccnumber /= 10;
    //printf("%ld\n", ccnumber);

    int ten = ccnumber % 10;
    //printf("%i\n", ten);

    ccnumber /= 10;
    //printf("%ld\n", ccnumber);

    int eleven = ccnumber % 10;
    //printf("%i\n", eleven);

    ccnumber /= 10;
    //printf("%ld\n", ccnumber);

    int twelve = ccnumber % 10;
    //printf("%i\n", twelve);

    ccnumber /= 10;
    //printf("%ld\n", ccnumber);

    int thirteen = ccnumber % 10;
    //printf("%i\n", thirteen);

    ccnumber /= 10;
    //printf("%ld\n", ccnumber);

    int fourteen = ccnumber % 10;
    //printf("%i\n", fourteen);

    ccnumber /= 10;
    //printf("%ld\n", ccnumber);

    int fifteen = ccnumber % 10;
    //printf("%i\n", fifteen);

    ccnumber /= 10;
    //printf("%ld\n", ccnumber);

    int sixteen = ccnumber % 10;
    //printf("%i\n", sixteen);

    ccnumber /= 10;
    //printf("%ld\n", ccnumber);



    //take even digits, multiply by 2, get sum of digits
    int sumTwo = getSum(two);
    int sumFour = getSum(four);
    int sumSix = getSum(six);
    int sumEight = getSum(eight);
    int sumTen = getSum(ten);
    int sumTwelve = getSum(twelve);
    int sumFourteen = getSum(fourteen);
    int sumSixteen = getSum(sixteen);

/*

    printf("\n \n \n");

    printf("%i\n", sumTwo);
    printf("%i\n", sumFour);
    printf("%i\n", sumSix);
    printf("%i\n", sumEight);
    printf("%i\n", sumTen);
    printf("%i\n", sumTwelve);
    printf("%i\n", sumFourteen);
    printf("%i\n", sumSixteen);

    */

    int evenSum = sumTwo + sumFour + sumSix + sumEight + sumTen + sumTwelve + sumFourteen + sumSixteen;

    //printf("%i\n", evenSum);

    int totalSum = evenSum + one + three + five + seven + nine + eleven + thirteen + fifteen;

    int checkSum = totalSum % 10;

    //printf("%i\n", checkSum);

    string creditCard = "INVALID";

    if (checkSum == 0) {
        if (sixteen == 4 || thirteen == 4) {
            //printf("VISA\n");
            creditCard = "VISA";
        }
        if (fifteen == 3)
        {
            if (fourteen == 4 || fourteen == 7)
            {
                //printf("AMEX\n");
                creditCard = "AMEX";
            }
        }
        if (sixteen == 5) {
            if (fifteen < 6) {
                //printf("MASTERCARD\n");
                creditCard = "MASTERCARD";
            }

        }

    }


    printf("%s\n", creditCard);

    }


}




int getSum(int a)
{
    int c = a*2;
    int i = c % 10;
    c /= 10;
    int j = c % 10;
    int k = i + j;
    return k;
}






long get_CCnumber(void)
{
    long n;
    do
    {
        n = get_long("Credit Card Number: ");

        if (n < 1000000000000 || n > 9999999999999999) {
            printf("INVALID\n");
        }
    }
    while (n < 1000000000000 || n > 9999999999999999);
    return n;
}



/*

int set_digits(long a)
{

    one = a % 10;
    printf("%i\n", one);
    printf("%ld\n", a);
    a /= 10;

}

*/

