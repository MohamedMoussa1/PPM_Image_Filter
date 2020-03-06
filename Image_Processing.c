#include <stdio.h>

/*
 * Read an image from the standard input and set the red value of each pixel to
 * zero.
 */
   char magicNum[2];
   int cols;
   int rows;
   int maxColor;
   int R;
   int G;
   int B;

void remove_red()
{
   scanf("%s", magicNum);
   scanf("%d %d %d", &cols, &rows, &maxColor);

   printf("%s\n", magicNum);
   printf("%d %d\n%d\n", cols, rows, maxColor);

   while (scanf("%d %d %d", &R, &G, &B) != EOF) {
       if (R !=0) {
           R = 0;
       }
       printf("%d %d %d\n", R, G, B);
   }
}

/*
 * Read an image from the standard input and convert it from colour to black and white.
 */
void convert_to_black_and_white()
{
   int avg;

   scanf("%s", magicNum);
   scanf("%d %d %d", &cols, &rows, &maxColor);

   printf("%s\n", magicNum);
   printf("%d %d\n%d\n", cols, rows, maxColor);

   while (scanf("%d %d %d", &R, &G, &B) != EOF) {
       avg = (R+G+B)/3;
       R = avg;
       G = avg;
       B = avg; 
       printf("%d %d %d\n", R, G, B);
   }


  
}

/*
 * Read an image from the standard input and convert it to a square image.
 */
void instagram_square()
{
   int inputCounter = 0;
   int rowCounter = 1;
   int origCols;
   
   scanf("%s", magicNum);
   scanf("%d %d %d", &cols, &rows, &maxColor);

   origCols = cols;

   if (cols > rows) {
       cols = rows;
       printf("%s\n", magicNum);
       printf("%d %d\n%d\n", cols, rows, maxColor);

       while (scanf("%d %d %d", &R, &G, &B) != EOF) {
           inputCounter++;
           if (inputCounter <= rows) {
           printf("%d %d %d\n", R, G, B);
           } else if (inputCounter == origCols) {
               inputCounter = 0;
           }
       }
   } else if (rows > cols) {
       rows = cols;
       printf("%s\n", magicNum);
       printf("%d %d\n%d\n", cols, rows, maxColor);

       while (scanf("%d %d %d", &R, &G, &B) != EOF) {
           inputCounter++;
           if (rowCounter <= origCols) {
               printf("%d %d %d\n", R, G, B);
           }
           if (inputCounter == origCols) {
               inputCounter = 0;
               rowCounter++;
           }
       }
   } else {
    
   printf("%s\n", magicNum);
   printf("%d %d\n%d\n", cols, rows, maxColor);

   while (scanf("%d %d %d", &R, &G, &B) != EOF) {
       printf("%d %d %d\n", R, G, B);
   }

   }
 
}

