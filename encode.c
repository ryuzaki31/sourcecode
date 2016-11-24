// The Pikachu encryption
// This program enables user to encrypt a text using a the algorithm and also decodes it
#include <stdio.h>
#include <conio.h>
#include <string.h>
void enc();
void decr();
void main()
{
    system("cls");
    int j,k;
    printf("Enter 1 to encrypt and 2 to decrypt a code:  ");
    scanf("%d",&j);
    if(j==1)
        enc();
    else if(j==2)
        decr();
    printf("\npress 1 to go to main menu: ");
    scanf("%d",&k);
    if(k==1)
        main();
    else
        exit(0);
    getch();
}
void enc()
{
    char A[100];
    char X[100];
    printf("Enter code to encrypt:  ");
    getchar();
    gets(A);
    printf("\n");
    int l=strlen(A);
    int i;
    for(i=0;i<l;i++)
    {
        A[i]=toupper(A[i]);
        if(A[i]>='A' && A[i]<='Z')
        {
            if(i%2==0)
            {
                X[i]=A[i]+(l+(i%4));
                while(X[i] > 'Z')
                    X[i] = X[i] - 26;
            }
            else
            {
                X[i]=A[i]+(l-(i%4));
                while(X[i] > 'Z')
                    X[i] = X[i] - 26;
            }
        }
        else
            X[i]=A[i];
    }
    for(i=0;i<l;i++)
        printf("%c",X[i]);
}
void decr()
{
    char A[100];
    char X[100];
    printf("Enter code to decrypt:  ");
    getchar();
    gets(A);
    printf("\n");
    int l=strlen(A);
    int i;
    for(i = 0; i < l; i++)
    {
        A[i]=toupper(A[i]);
        if(A[i]>='A' && A[i]<='Z')
        {
            if(i%2==0)
            {
                X[i]=A[i]-(l+(i%4));
                while(X[i] < 'A')
                    X[i] = X[i] + 26;
            }
            else
            {
                X[i]=A[i]-(l-(i%4));
                while(X[i] < 'A')
                    X[i] = X[i] + 26;
            }
        }
        else
            X[i]=A[i];
    }
    for(i=0;i<l;i++)
        printf("%c",X[i]);
}

