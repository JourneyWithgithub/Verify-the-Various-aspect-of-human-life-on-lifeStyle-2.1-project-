#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void Human_Zodiac_Sign()
{

    char month[20];

    int date;




    printf("Enter your birth month\n");
    scanf("%s",month);


    for(int i=0; i<strlen(month); i++)
    {



        if(month[0]>='a' && month[0]<='z')
            month[0]=month[0]-32;
        else
        {
            if(month[i]>='A' && month[i]<='Z')
                month[i]=month[i]+32;
        }


    }

    printf("Enter your birth data\n");
    scanf("%d",&date);

    if((strcmp(month,"January")==0 &&  date >=20) || ( strcmp(month,"Febuary")==0 && date <=18))

    {


        system("cls");

        system("color 00");
        char *filename = "flag1.txt";

        FILE *AQUARIUS=fopen(filename,"r");
        char ch;
        while ((ch = fgetc(AQUARIUS)) != EOF)
            putchar(ch);




        fclose(AQUARIUS);

    }
    else if((strcmp(month,"February")==0 &&  date >=19) || ( strcmp(month,"March")==0 && date <=20))


    {
        system("cls");

        system("color 00");

        char *filename = "flag2.txt";

        FILE *PISCES=fopen(filename,"r");
        char ch;
        while ((ch = fgetc(PISCES)) != EOF)
            putchar(ch);




        fclose(PISCES);
    }
    else if((strcmp(month,"March")==0 &&  date >=21) || ( strcmp(month,"April")==0 && date <=19))


    {
        system("cls");

        system("color 00");
        char *filename = "flag3.txt";

        FILE *ARIES=fopen(filename,"r");
        char ch;
        while ((ch = fgetc(ARIES)) != EOF)
            putchar(ch);




        fclose(ARIES);
    }
    else if((strcmp(month,"April")==0 &&  date >=20) || ( strcmp(month,"May")==0 && date <=20))

    {
        system("cls");

        system("color 00");

        char *filename = "flag4.txt";

        FILE *TAURUS=fopen(filename,"r");
        char ch;
        while ((ch = fgetc(TAURUS)) != EOF)
            putchar(ch);




        fclose(TAURUS);
    }
    else if((strcmp(month,"May")==0 &&  date >=21) || ( strcmp(month,"June")==0 && date <=20))
    {
        system("cls");

        system("color 00");

        char *filename = "flag5.txt";

        FILE *GEMINI =fopen(filename,"r");
        char ch;
        while ((ch = fgetc(GEMINI )) != EOF)
            putchar(ch);




        fclose(GEMINI );
    }



    else if((strcmp(month,"June")==0 &&  date >=21) || ( strcmp(month,"July")==0 && date <=22))

    {
        system("cls");

        system("color 00");

        char *filename = "flag6.txt";

        FILE *CANCER  =fopen(filename,"r");
        char ch;
        while ((ch = fgetc(CANCER  )) != EOF)
            putchar(ch);




        fclose(CANCER  );
    }

    else if((strcmp(month,"July")==0 &&  date >=23) || ( strcmp(month,"August")==0 && date <=22))

    {
        system("cls");

        system("color 00");

        char *filename = "flag7.txt";

        FILE *LEO   =fopen(filename,"r");
        char ch;
        while ((ch = fgetc(LEO   )) != EOF)
            putchar(ch);

        fclose(LEO   );
    }
    else if((strcmp(month,"August")==0 &&  date >=23) || ( strcmp(month,"September")==0 && date <=22))

    {
        system("cls");

        system("color 00");

        char *filename = "flag8.txt";

        FILE *VIRGO  =fopen(filename,"r");
        char ch;
        while ((ch = fgetc(VIRGO)) != EOF)
            putchar(ch);


        fclose(VIRGO);
    }
    else if((strcmp(month,"September")==0 &&  date >=23) || ( strcmp(month,"October")==0 && date <=22))

    {
        system("cls");

        system("color 00");

        char *filename = "flag9.txt";

        FILE *LIBRA  =fopen(filename,"r");
        char ch;
        while ((ch = fgetc(LIBRA)) != EOF)
            putchar(ch);




        fclose(LIBRA);
    }

    else if((strcmp(month,"October")==0 &&  date >=23) || ( strcmp(month,"November")==0 && date <=21))

    {
        system("cls");

        system("color 00");

        char *filename = "flag10.txt";

        FILE *SCORPIO  =fopen(filename,"r");
        char ch;
        while ((ch = fgetc(SCORPIO)) != EOF)
            putchar(ch);




        fclose(SCORPIO);
    }
    else if((strcmp(month,"November")==0 &&  date >=22) || ( strcmp(month,"December")==0 && date <=21))

    {
        system("cls");
        system("color 00");

        char *filename = "flag11.txt";

        FILE *SAGITTARIUS  =fopen(filename,"r");
        char ch;
        while ((ch = fgetc(SAGITTARIUS)) != EOF)
            putchar(ch);




        fclose(SAGITTARIUS);
    }
    else if((strcmp(month,"December")==0 &&  date >=22) || ( strcmp(month,"January")==0 && date <=19))

    {
        system("cls");

        system("color 00");

        char *filename = "flag12.txt";

        FILE *CAPRICORN  =fopen(filename,"r");
        char ch;
        while ((ch = fgetc(CAPRICORN)) != EOF)
            putchar(ch);




        fclose(CAPRICORN);
    }




    printf("\n\n\t\t1. Sign in/Sign up\n");
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
    printf("\t\t12. Childcare\n");
    printf("\t\t13. Human Zodiac Sign\n");





    int choice ;
    printf("Enter your choice\n");

    scanf("%d",&choice);
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
        system("cls");
        printf("Invalid choice\n");

        return ;
    }
}
