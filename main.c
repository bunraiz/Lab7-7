#include <stdio.h>
int main(void) {
  int temp[7][2];
  int Max, Min;
  float SumH, SumL;
  int midH,midL;
  char name[100];
  int index,check = 1;
  printf("Enter Your Name : ");
  scanf("%s",&name[0]);
  printf("Hello %s\n",name);
  printf("********************************\n");
 char text[7][20] ={"Monday   ",
                    "Tuesday  ",
                    "Wednesday", 
                    "Thursday ", 
                    "Friday   ", 
                    "Saturday ", 
                    "Sunday   "};
 char status[2][5] = {"High","Low "};
  for(int j = 0 ; j < 7; j++){
    for(int i = 0 ; i < 2 ; i++){
      printf("%s Temp %s  : ",status[i],text[j]);
      scanf("%d",&temp[j][i]);
      if (check == 1) {
        Max = temp[j][i];
        Min = temp[j][i];
        check = 0;
      }
      if (temp[j][i] > Max) Max = temp[j][i];
      else if(temp[j][i] < Min) Min = temp[j][i];

      if (i==0){
        SumH = SumH + temp[j][i]; 
      }
      else if (i==1){
        SumL = SumL + temp[j][i];
      }
    }
  }
  int x, y, z;
  for(x = 0 ; x < 2  ; x++){
    for(y = 0 ; y < 7 ; y++){
      for(z = y + 1 ; z < 7 ; z++){
        if(temp[y][x] > temp[z][x]){
          index = temp[y][x];
          temp[y][x] = temp[z][x];
          temp[z][x] = index;
        }
      } 
    }
  }
  midH = temp[3][0];
  midL = temp[3][1];
  printf("********************************\n");
  printf("Max Temperature is %d C\n",Max);
  printf("Min Temperature is %d C\n",Min);
  printf("Avarage Max Temperature is %.2f C\n",SumH/7);
  printf("Avarage Min Temperature is %.2f C\n",SumL/7);
  printf("Median Max Temperature is %d C\n",midH);
  printf("Median Min Temperature is %d C\n",midL);
  return 0;
}