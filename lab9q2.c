#include <stdio.h>
int main()

{
    int n = 15;
    int bitsat[14],boards_phy[n],boards_chem[n],boards_math[n],appln[n];
    int passyr[n],result[n];
    int seats[] = {3,3,3};
    int pref[3*n];
    int eligibilty[15]={};
    for(int i =0;i<15;i++)
    {
        printf("Plase Enter student %d's application number ",i + 1);
        scanf("%d", &appln[i]);
        printf("Please Enter Student %d's Physics score in boards:",i+1);
        scanf("%d", &boards_phy[i]);
        printf("Please Enter Student %d's Math score in boards:",i+1);
        scanf("%d", &boards_math[i]);
        printf("Please Enter Student %d's Chemistry score in boards:",i+1);
        scanf("%d", &boards_chem[i]);
        printf("Please Enter %d's Board passing year:",i+1);
        scanf("%d", &passyr[i]);
        printf("Please Enter Student %d's BITSAT score:",i+1);
        scanf("%d", &bitsat[2*i]);
        bitsat[2*i+1] = i;
        printf("Please Enter Student %d's Preference",i+1);
             for (int j = 3*i;j<3*(i+1);j++){
                 scanf(%d,&prefence[j]);
                 printf("\n");
             }
        for (int i =0; i<7;i++){
            printf("\n");
                  if (boards_phy[i]>=60 && boards_chem[i]>=60 && boards_math[i]>=60)
                  {
                      if (boards_phy[i]+boards_chem+boards_math>=60){
                          if(bitsat[2*i]>=240){
                              if (passyr == 2021 ||passyr[i] == 2020)
                              eligibilty[i]=1;
                          }
                      }
                  }
        }
        for (int i =0;i <15;i+=2){
            for (int j =i+2;i<14;j+=2){
            if (bitsat[i]< bitsat[j]){
                int tempMark= bitsat[i],tempIndex = bitsat[i+1];
                bitsat[i]= bitsat[j];
                bitsat[i+1]= bitsat [j+1];
                bitsat[j]= tempMark;
                bitsat[j+1]=tempIndex;
            }
            }
        }
        for(int i =0;i<15;i++){
            int index = bitsat[2*i+1];
            if(eligibilty[index] == 0)
            result[index]=3;
            else{
                int pref1 = preference[3*index];
                int pref2 = preference[3*index+1];
                int pref3 = preference[3*index+2];
                if (seats[pref1] != 0){
                    result[index] = pref1;
                    seats[pref1] = seats[pref1]-1;
                }
                else if (seats[pref2] != 0){
                    result[index] = pref2;
                    seats[pref2] = seats[pref2]-1;
                }
                 else if (seats[pref3] != 0){
                    result[index] = pref3;
                    seats[pref3] = seats[pref3]-1;
                }
                else
                result[index]= 3;
                }
            }
        }
    printf("Allotment: \n");
     for (int i =0;i < 7;i++){
         printf("Student %d: Application no.:%d", i+1,appln[i]);
         switch(result[i]){
             case 0;
             printf("CS");
             break;
             case 1:
             printf("Civil");
             break;
             case 2:
             printf("EEE");
             break;
            case 3:
            printf("-");
            break;}
        printf("\n");
         }
     }
        
    }
}