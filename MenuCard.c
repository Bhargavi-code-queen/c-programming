/*Program for Menu Card*/
#include<stdio.h>

int main()
{
    int ch,qty,rate,total;
    printf("\nMENU CARD \nSelect your drink  \n1.Coffee - Rs 15 \n2.Tea - Rs 20 \n3.Cold Coffee - Rs 25 \n4.Milk Shake - Rs 30 \n5.STALC - Rs 35\n");
    printf("\nEnter your choice :");
    scanf("%d", &ch);
    
    switch (ch)
    {
    case 1:
        printf("\nYou have selected Coffee.\nEnter the quantity :");
        scanf("%d", &qty);
        rate=15;
        total=qty*rate;
        printf("\nTotal amount :%d",total);
        break;
    case 2:
         printf("\nYou have selected Tea.\nEnter the quantity :");
         scanf("%d", &qty);
         rate=20;
         total=qty*rate;
         printf("\nTotal amount :%d",total);
         break;
    case 3:
         printf("\nYou have Cold coffee.\nEnter the quantity :");
         scanf("%d", &qty);
         rate=25;
         total=qty*rate;
         printf("\nTotal amount :%d",total);
         break;
    case 4:
         printf("\nYou have selected Milk Shak.\nEnter the quantity :");
         scanf("%d", &qty);
         rate=30;
         total=qty*rate;
         printf("\nTotal amount :%d",total);
         break;
    case 5:
          printf("\nYou have selected STALC.\nEnter the quantity :");
          scanf("%d", &qty);
          rate=35;
          total=qty*rate;
          printf("\nTotal amount :%d",total);
          break;

    default:
          printf("\nSorry Unavailable %d",ch);
        break;
    }
    return 0;
}

