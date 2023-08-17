#include <stdio.h>

int main(void) {
  printf("%-4.2f\n",3456.78);
  printf("%-3.2f\n",3456.78);
  printf("%-3.1f\n",3456.78);
  printf("%10.3f\n",3456.78);
  printf("%c  \n", 3393);

  printf("\n\n\n");
  printf("\n \xDC\xDC\xDB\xDB\xDB\xDB\xDC\xDC");
  printf("\n \xDFO\xDf\xDf\xDf\xDFO\xDF");
  printf("\n\n\n");
  printf("\n \xDC\xDC\xDB \xDB\xDB\xDB\xDB\xDB\xDB");
  printf("\n \xDFO\xDf\xDf\xDF\xDF\xDFOO\xDF");
  printf("\n\n\n");

  
}