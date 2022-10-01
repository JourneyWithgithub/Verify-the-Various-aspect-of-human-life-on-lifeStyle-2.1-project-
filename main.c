#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
#include<windows.h>
#include<time.h>
#include "Horoscopes.h"
#include "Human_Quality_w.r.t.Age.h"
void setcolor(int ForgC);
void gotoxy(int ,int);
void Sign_IN();
char email [50];
char password[33];
char Echeck[100][50];
char Pcheck[100][50];
int count=0;
int main()
{



        printf("\nTime Stamp :  ");
             time_t t;
            time(&t);
            printf("%s\n",ctime(&t));
    printf("\n\t\t\tPlease Enter the following choice\n");


    printf("\n\t\t\t1.Sign in\n");

    printf("\n\t\t\t2.Create New Accounts\n");

    int choice ;



        scanf("%d",&choice);

    switch(choice)
    {
    case 1:
        Sign_IN();
        break;
    case 2:
        CreateAc();
        break;
    default:

         system("cls");
        printf("\nInvalid choice\n");
        printf("\nplease try again\n");

        main();


            }


    return 0;
}
void Sign_IN()
{


    char gmail[100];
    char PIN[33];




    printf("\n\nEnter your Email to sign in\n\n");
    scanf("%s",gmail);

    printf("\n\nEnter your password\n\n");
    scanf("%s",PIN);

    FILE *outfile,*infile;
    outfile=fopen("Oops.txt","r");

   char ch;
   int i=0,j=0;
   while((ch=fgetc(outfile))!=EOF)
   {
         if(ch=='\n')
        {
            i++;
            j=0;
        }


       else
       {
           Echeck[i][j++]=ch;
       }

   }
    fclose(outfile);



    infile=fopen("Oops1.txt","r");

       char ch1;
   int k=0,l=0;
   while((ch1=fgetc(infile))!=EOF)
   {
         if(ch1=='\n')
        {
            k++;
            l=0;
        }


       else
       {
           Pcheck[k][l++]=ch1;
       }

   }

         fclose(infile);




        for(j=0; j<=k; j++)

        {


        if(strcmp(gmail,Echeck[j])==0 && strcmp(PIN,Pcheck[j])==0)
        {


            Introduction();
            return ;
        }
    }

        printf("\nInformation didn't match \n\n");
    printf("\nIf you are new here ,please press 2 for Creating  an account first.\n\n");
    printf("\nif you forget password ,please enter 1\n\n");

    int flag;
    scanf("%d",&flag);

    if(flag==1)
    {
        printf("\nplease enter your email address\n\n");
        scanf("%s",gmail);
        for(j=0; j<=k; j++)
        {


            if(strcmp(gmail,Echeck[j])==0)
            {

                printf("\nYou password is ---------\n\n");

                printf("%s\n",Pcheck[j]);

                main();


            }
            else
            {
                printf("Oops !!! information didn't match");
                Sign_IN();

            }
        }
    }
    else if(flag==2)
        CreateAc();

}
void CreateAc()
{




    printf("\nEnter your email. e.g  \***@gmail.com \t\***@yahoo.com\***@icloud.com \***@outlook.com\***@mbstu.ac.bd\n\n");
    scanf("%s",email);


    int len,okey=0;



    len=strlen(email);

        for(int i=0;email[i]!='@' ;i++)
        {
            if((email[i]>='0' && email[i]<='9') ||(email[i]>='a' && email[i]<='z')|| email[i]=='.' || email[i]=='_' || email[i]=='-' || email[i]=='+')
            {
                    okey++;
                continue;
            }
            else
            {
                printf("\nInvalid email\n\n");
                printf("\nplease try again.   you are allowed only to use small letter ,hyphen(-),plus(+), underscore(_) ,period(.)\n\n");
                CreateAc();
            }
        }
    if((email[len-1]=='m' && email[len-2]=='o' && email[len-3]=='c' && email[len-4]=='.' &&email[len-5]=='l' && email[len-6]=='i' && email[len-7]=='a' && email[len-8]=='m' && email[len-9]=='g' && email[len-10]=='@')
        || (email[len-1]=='m' && email[len-2]=='o' && email[len-3]=='c' && email[len-4]=='.' &&email[len-5]=='o' && email[len-6]=='o' && email[len-7]=='h' && email[len-8]=='a' && email[len-9]=='y' && email[len-10]=='@') || (email[len-1]=='d' && email[len-2]=='b' && email[len-3]=='.' && email[len-4]=='c' && email[len-5]=='a' && email[len-6]=='.' && email[len-7]=='u' && email[len-8]=='t' && email[len-9]=='s' && email[len-10]=='b' && email[len-11]=='m' && email[len-12]=='@') || (email[len-1]=='m' && email[len-2]=='o' && email[len-3]=='c' &&  email[len-4]=='.' && email[len-5]=='d' && email[len-6]=='u' && email[len-7]=='o' && email[len-8]=='l' && email[len-9]=='c' && email[len-10]=='i' && email[len-11]=='@') || (email[len-1]=='m' && email[len-2]=='o' && email[len-3]=='c' && email[len-4]=='.' && email[len-5]=='k' && email[len-6]=='o' && email[len-7]=='o' && email[len-8]=='l' && email[len-9]=='t' && email[len-10]=='u' && email[len-11]=='o' && email[len-12]=='@'))
    {
        if(!okey)
        {
            printf("Invalid email\n");
            CreateAc();

        }



        printf("\nEnter your password.\n use letter ,digit , special sign. your password should be at least 8 character\n\n");
        scanf("%s",password);


        int sp=0,dig=0,letter=0;
        if(strlen(password)<8)
        {
            while(strlen(password)<8)
            {


            printf("\nOops !!! your passsword doesn't comply with our requirement\n");
            printf("Please try agin\n");

                      scanf("%s",password);

            }


        }
         if(strlen(password)>=8)
        {
            for(int i=0; i<strlen(password); i++)
            {
                if(password[i]=='*' || password[i]=='&' || password[i]=='#' || password[i]=='@' ||password[i]=='!' || password[i]=='_' || password[i]=='-' )
                    sp++;
                else if(password[i]>='0' && password[i]<='9')
                    dig++;
                else if((password[i]>='a' && password[i]<='z') || (password[i]>='A' && password[i]<='Z'))
                    letter++;
            }

            while( !dig || !sp || !letter)
            {
                printf("Invalid Password\n");
                printf("Please try again\n");

                scanf("%s",password[count]);
                    dig=0;
                    letter=0;
                    sp=0;

                    if(strlen(password)<8)
                    {
                        continue;
                    }
                    else
                    {


                for(int i=0; i<strlen(password); i++)
            {
                if(password[i]=='*' || password[i]=='&' || password[i]=='#' || password[i]=='@' ||password[i]=='!' || password[i]=='_' || password[i]=='-' )
                    sp++;
                else if(password[i]>='0' && password[i]<='9')
                    dig++;
                else if((password[i]>='a' && password[i]<='z') || (password[i]>='A' && password[i]<='Z'))
                    letter++;
            }

            }
            }

        }
        if(dig && sp&& letter)
        {


            FILE *outfile,*infile;
    outfile=fopen("Oops.txt","r");

   char ch;
   int i=0,j=0;
   while((ch=fgetc(outfile))!=EOF)
   {
         if(ch=='\n')
        {
            i++;
            j=0;
        }
       else
       {
           Echeck[i][j++]=ch;
       }

   }
    fclose(outfile);

    for(j=0;j<i;j++)
    {
        if(strcmp(email,Echeck[j])==0)
        {
            printf("This email already exist\n\n");
            printf("Try with a different email\n\n");
            CreateAc();
        }
    }


                system("cls");
            printf("\n\n\n\n\t\t\tYou have successfully registered \n\n\n");

            count++;
            dig=0;sp=0;letter=0;


        }




    }
    else
    {
        printf("Invalid Email\n");

        printf("please enter a valid email \****@gmail.com\t /****@yahoo.com\***@icloud.com \***@outlook.com\***@mbstu.ac.bd\n\n");

        CreateAc();

    }

    FILE *outfile,*infile;
    outfile=fopen("Oops.txt","a");
    fprintf(outfile,"%s\n",email);
    fclose(outfile);

     infile=fopen("Oops1.txt","a");
    fprintf(infile,"%s\n",password);
    fclose(infile);

    Introduction();

}
void Introduction()
{


    printf("\t\t\tVerify the various aspect of human life and recommend on lifeStyle\n\n"  );

    printf("\t\t\tWELCOME TO MAIN MANU\n");;





      int choice ;

    printf("\n\n\nEnter your choice for seeing more or else any key to exit\n\n");
    printf("\t\t1. Sign in/Sign up\n");
    printf("\t\t2. Home page\n");
    printf("\t\t3. Life style\n");
    printf("\t\t4. Sleeping hour\n");
     printf("\t\t5. Study hour\n");
    printf("\t\t6. Spend_time_on_Technology\n");
    printf("\t\t7. Recreation\n");
    printf("\t\t8. Food Habit \n");
     printf("\t\t9. BMI (Body mass index) \n");
      printf("\t\t10. Spend_Time_on_Ritual_Activities\n");
        printf("\t\t11. LifeStyle quizz and general info\n");
       printf("\t\t12. Childcare\n\n");


    printf("\t\t13. Human Zodiac Sign\n\n");
      printf("\t\tany key for exit\n\n");


    scanf("%d",&choice);
       system("cls");
    switch(choice)
    {
    case 1:
         system("cls");
        main();
        break;
    case 2:
        Introduction();
        break;
    case 3:
        LifeStyle();
        break;
           case 4:
        SleepHour();
        break;
           case 5:
            StudyHour();
            break;
           case 6:
            Spend_time_on_Technology();
            break;
           case 7:
           Recreation();
            break;
           case 8:
            FoodHabit();
            break;
           case 9:
            BMI();
            break;
           case 10:
             Spend_Time_on_Ritual_Activities();
             break;
            case 11:
        Human_Age_Scale();
        system("color 8A");
            break;


                   case 12:
        ChildCare();
        break;
        case 13:
        Human_Zodiac_Sign();
        break;

    default :

       return ;

    }





}
void setcolor(int ForgC) //function to change setcolor
 {
 WORD wColor;

  HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
  CONSOLE_SCREEN_BUFFER_INFO csbi;

                       //We use csbi for the wAttributes word.
 if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
 {
                 //Mask out all but the background attribute, and add in the forgournd color
      wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);
      SetConsoleTextAttribute(hStdOut, wColor);
 }
 return;
 }

 void gotoxy(int x,int y)  // For cursor position
{
    COORD crd;
    crd.X=x;
    crd.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),crd);
}




