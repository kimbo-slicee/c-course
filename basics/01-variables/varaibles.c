#include <stdio.h>
int main(void){
     /**syntax of declaring Variables in C:
     * Variable Type + Variable Name = Variable Value
     * Example: int x =3;
     * */
/**
   int Integers are whole numbers that can have both zero, positive and negative values but no decimal values.
   For example: , 0, -5, 10
 */
   int x=10;
   int y=5;
   int z;
   int r;
   /**
    float and double float and double are used to hold real numbers.
    * */
    double f=12.05;
    double num= 22.442e2;
    printf("size of short = %llu bytes\n", sizeof(num));
    printf("size of short = %llu bytes\n", sizeof(f));
      /**
      * char Keyword char is used for declaring character type variables.The size of the character variable is 1 byte.
      * */
    char m='M';
    char s,b;
    b='b';
    /**
     * void
        void is an incomplete type. It means "nothing" or "no type". You can think of void as absent.
        For example, if a function is not returning anything, its return type should be void.
        Note that, you cannot create variables of void type.
     * */
        void *name;
        /**
         * short and long
         * If you need to use a large number, you can use a type specifier long. Here's how:
         * Here variables a and b can store integer values. And, c can store a floating-point number.
         * If you are sure, only a small integer ([−32,767, +32,767] range) will be used, you can use short.
         * */
         long xy=100;
         long long xxl=2025;
         short h=32;

         /**
          * signed and unsigned
                In C, signed and unsigned are type modifiers. You can alter the data storage of a data type by using them:
                signed - allows for storage of both positive and negative numbers
                unsigned - allows for storage of only positive numbers
          * */
          unsigned int  counetr_One=-20;
          unsigned int counter_Two=20;
          signed counetr_Three=20;
         printf("counter One %u\n",counetr_One);
         printf_s("counter Two %u \n ",counter_Two);

         /**
          * Here, the variables counter_One and Counter_Two can hold only zero and positive values because we have used the unsigned modifier.Considering the size of int is 4 bytes, variable Counter_three can hold values from -231 to 231-1, whereas variable x can hold values from 0 to 232-1.
          * */
    return 0;
}
