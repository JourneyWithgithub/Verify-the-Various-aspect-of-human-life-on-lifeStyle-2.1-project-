#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
void  Healthy_Life_Advice();

struct Gobalization
{
    char *childen;
    char *Teenage;
    char *Young;
};
void Negative_IMpact_Of_Technology_ON_Physical_Health()
{
    system("cls");
    printf("1. Health Problem\n");
    printf("2.Risk of depression\n\n");
    printf("3.Eyestrain\n4.Obesity\n5.Increased risk and lack of privacy\n6.falling grades\n");

    printf("7.Cyber bullying\n8.social interaction issues\n\n9.musculoskeletal problems\n 10.sleep problems\n10.emotional problems\n\n");




    int choice;
    printf("Please Enter the following the choice see to more or exit\n\n");
    printf("\t\t1.Age Scale \n\t\t2. BMI \n\t\t3.main manu \n\t\t\4. Exit\n");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        Human_Age_Scale();
        // system("color 3");


        break;
    case 2:
        BMI();
        break;


    case 3 :
        system("cls");

        printf("Please Enter a Numerical Value between 1 to 5\n");
        main();
        break;
    default :
        return ;


    }


}

void   Development_At_Puberty()
{

    system("cls");
    //system("color D7");
    char *filename = "okey.txt";

    FILE *puberty=fopen(filename,"r");
    char ch;
    while ((ch = fgetc(puberty)) != EOF)
        putchar(ch);




    fclose(puberty);


    int choice;
       printf("\t\t01. Sign in/Sign up\n");
          printf("\t\t02. Home Page\n");
    printf("\t\t03. Life style\n");
    printf("\t\t04. Sleeping hour\n");
    printf("\t\t05. Study hour\n");
    printf("\t\t06. Spend_time_on_Technology\n");
    printf("\t\t07. Recreation\n");
    printf("\t\t08. Food Habit \n");
    printf("\t\t09. BMI (Body mass index) \n");
    printf("\t\t10. Spend_Time_on_Ritual_Activities\n");
    printf("\t\t11.  LifeStyle quizz and general info\n");
    printf("\t\t12. Childcare\n");
    printf("\t\t13. Human Zodiac Sign\n");



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

      //  main();


    }

}
void  Healthy_Life_Advice()
{
    system("cls");

    system("color DF");

    char *filename = "okey1.txt";

    FILE *BeHealthy=fopen(filename,"r");
    char ch;
    while ((ch = fgetc(BeHealthy)) != EOF)
        putchar(ch);




    fclose(BeHealthy);



    int choice;
       printf("\t\t01. Sign in/Sign up\n");
          printf("\t\t02. Home Page\n");
    printf("\t\t03. Life style\n");
    printf("\t\t04. Sleeping hour\n");
    printf("\t\t05. Study hour\n");
    printf("\t\t06. Spend_time_on_Technology\n");
    printf("\t\t07. Recreation\n");
    printf("\t\t08. Food Habit \n");
    printf("\t\t09. BMI (Body mass index) \n");
    printf("\t\t10. Spend_Time_on_Ritual_Activities\n");
    printf("\t\t11.  LifeStyle quizz and general info\n");
    printf("\t\t12. Childcare\n");
    printf("\t\t13. Human Zodiac Sign\n");



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
       // system("color 8A");
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

      //  main();


    }

}





