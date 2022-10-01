#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
void Age_Scale();
void BMI();
void Food_Suggestion();
void  Development_At_Puberty();
void  Healthy_Life_Advice();
int temp;
struct criteria
{
    float weight;
    float height;

};
enum Indicator
{
    Infant,Toddler,Preschooler,Middle_Schooler,Teenager,Young,Adult,Older_Person
};


void Human_Age_Scale()
{

    int age;

    printf("please enter your choice \n\n");

    printf("\t\t1. LifeStyle quizz\n\n");
    printf("\t\t2. Your do's and don'ts (recommendation)\n\n");
    printf("\t\t3. Visit Reference Website\n\n");

    int choice;
    scanf("%d",&choice);

        switch(choice)
        {
        case 1:



             fclose(fopen("CorrectA.txt", "w"));




    int count=0,enter=0;

        // FILE *miss;
    char ch;


    printf("i) A healthy lifestyle can be described as :\n\n");
    printf("1. Avoiding meat, eating a balanced diet, exercising every day\n");
    printf("2. Eating anything you like and exercising 3 times a week\n");
    printf("3. Eating a balanced diet with fruit and vegetables, exercising regularly\n");
    printf("4. Taking a shower twice a day, avoiding fat\n");
    scanf("%d",&enter);

    if(enter==3)
    {
        count+=10;
    }
    else
    {




            char *filename = "CorrectA.txt";


            FILE *miss=fopen(filename,"a");






        fputs("i) A healthy lifestyle can be described as :\n\n", miss);
        fputs("1. Avoiding meat, eating a balanced diet, exercising every day\n", miss);
        fputs("2. Eating anything you like and exercising 3 times a week\n", miss);
       fputs("3. Eating a balanced diet with fruit and vegetables, exercising regularly\n", miss);
       fputs("4. Taking a shower twice a day, avoiding fat\n", miss);

       fputs("\n\nCorrect Answer :: \n 3. Eating a balanced diet with fruit and vegetables, exercising regularly\n", miss);

        fclose(miss);

    }

    printf("\n\n");
    printf("ii) Which foods are important for the development of healthy, strong bones?\n");
    printf("1. Tomatoes, biscuits, butter\n");
    printf("2. Chicken, fish, eggs\n");
    printf("3. Cheese, milk, yoghurt\n");
    printf("4. Potatoes, fish, cucumbers\n");

    scanf("%d",&enter);


    if(enter==3)
    {
        count+=10;
    }
    else
    {



            char *filename = "CorrectA.txt";


            FILE *miss=fopen(filename,"a");





        fputs("ii) Which foods are important for the development of healthy, strong bones?\n\n", miss);
        fputs("1. Tomatoes, biscuits, butter\n", miss);
        fputs("2. Chicken, fish, eggs\n", miss);
       fputs("3. Cheese, milk, yoghurt\n", miss);
       fputs("4. Potatoes, fish, cucumbers\n", miss);

       fputs("\n\nCorrect Answer :: \n 3. Cheese, milk, yoghurt\n", miss);



        fclose(miss);
    }


    printf("\n\n");

    printf("iii) In the same amount of the following foods, which food provides the most calcium?\n\n");
    printf("1. Cabbage\n");
    printf("2. Milk\n");
    printf("3. Cereal\n");
    printf("4. Cake\n");
    scanf("%d",&enter);
    printf("\n\n");

    if(enter==2)
    {
        count+=10;
    }
    else

    {


            char *filename = "CorrectA.txt";


            FILE *miss=fopen(filename,"a");




        fputs("iii) In the same amount of the following foods, which food provides the most calcium?\n\n", miss);
        fputs("1. Cabbage\n", miss);
        fputs("2. Milk\n", miss);
       fputs("3. Cereal\n", miss);
       fputs("4. Cake\n", miss);

       fputs("\nCorrect Answer :: \n 2. Milk\n", miss);



       fclose(miss);
    }



    printf("iv) Which of the following are the the best forms of exercise?\n\n");
    printf("1. Doing crosswords\n");

    printf("2. Playing computer games\n");
    printf("3. Playing chess\n");
    printf("4.  Cycling\n");

    scanf("%d",&enter);

    if(enter==4)
    {
        count+=10;
    }
    else
    {


            char *filename = "CorrectA.txt";


            FILE *miss=fopen(filename,"a");





        fputs("iv) Which of the following are the the best forms of exercise?\n\n", miss);
        fputs("1. Doing crosswords\n", miss);
        fputs("2. Playing computer games\n", miss);
       fputs("3. Playing chess\n", miss);
       fputs("4. Cycling\n", miss);

       fputs("\nCorrect Answer :: \n 4.  Cycling\n", miss);



        fclose(miss);
    }

    printf("\n\n");

    printf("v) What helps you have strong teeth?\n\n");

    printf("1. Eating fruit and vegetables\n");
    printf("2. Brushing your teeth at least twice a day using fluoride toothpaste\n");
    printf("3. Drinking water\n");
    printf("4. Exercising\n");

    scanf("%d",&enter);

    if(enter==2)
    {
        count+=10;
    }
    else
    {



            char *filename = "CorrectA.txt";


            FILE *miss=fopen(filename,"a");






        fputs("v) What helps you have strong teeth?\n\n", miss);
        fputs("1. Eating fruit and vegetables\n", miss);
        fputs("2. Brushing your teeth at least twice a day using fluoride toothpaste\n", miss);
       fputs("3. Drinking water\n", miss);
       fputs("4. Exercising\n", miss);

       fputs("\nCorrect Answer :: \n 2. Brushing your teeth at least twice a day using fluoride toothpaste\n", miss);



       fclose(miss);
    }
    printf("\n\n");

    printf("vi) How can't you help the environment?\n\n");
    printf("1. Driving your own vehicle\n");
    printf("2. Turning off the tap while you are brushing your teeth\n");

    printf("3. Bringing your own cloth bag to the shops\n");
    printf("4. Turning off of the lights when you leave a room\n");

    scanf("%d",&enter);


    if(enter==1)
    {
        count+=10;
    }
    else
    {


            char *filename = "CorrectA.txt";


            FILE *miss=fopen(filename,"a");




        fputs("vi) How can't you help the environment?\n\n", miss);
        fputs("1. Driving your own vehicle\n", miss);
        fputs("2. Turning off the tap while you are brushing your teeth\n", miss);
       fputs("3. Bringing your own cloth bag to the shops\n", miss);
       fputs("4. Turning off of the lights when you leave a room\n", miss);

       fputs("\nCorrect Answer :: \n1. Driving your own vehicle\n", miss);



        fclose(miss);
    }
    printf("\n\n");

    printf("vii) What is personal hygiene?\n\n");
    printf("1. Having showers\n");
    printf("2. Taking care of your body, cleaning yourself\n");
    printf("3. Using soap to clean yourself\n");
    printf("4. Washing your hands\n");


    scanf("%d",&enter);


    if(enter==2)
    {
        count+=10;
    }
    else
    {



            char *filename = "CorrectA.txt";


            FILE *miss=fopen(filename,"a");




        fputs("vii) What is personal hygiene?\n\n", miss);
        fputs("1. Having showers\n", miss);
        fputs("2. Taking care of your body, cleaning yourself\n", miss);
       fputs("3. Using soap to clean yourself\n", miss);
       fputs("4. Washing your hands\n", miss);

       fputs("\nCorrect Answer :: \n2. Taking care of your body, cleaning yourself\n", miss);



        fclose(miss);
    }
    printf("\n\n");

    printf("viii) The best way to keep a healthy you is:\n\n");
    printf("1. Going on a very low calorie diet\n");
    printf("2. Mixing eating with other activities\n");
    printf("3. Using the Food Pyramid\n");
    printf("4. Avoiding eating fat\n");

    scanf("%d",&enter);

    if(enter==3)
    {
        count+=10;
    }
    else
    {


            char *filename = "CorrectA.txt";


            FILE *miss=fopen(filename,"a");





        fputs("viii) The best way to keep a healthy you is:\n\n", miss);
        fputs("1. Going on a very low calorie die\n", miss);
        fputs("2. Mixing eating with other activities\n", miss);
       fputs("3. Using the Food Pyramid\n", miss);
       fputs("4. Avoiding eating fat\n", miss);

       fputs("\nCorrect Answer :: \n 3. Using the Food Pyramid\n", miss);


        fclose(miss);


    }

    printf("\n\n");

    printf("ix) What is having good personal hygiene a good prevention of?\n\n");
    printf("1. Losing hair\n");
    printf("2. Tooth decay\n");
    printf("3. Looking ugly\n");
    printf("4. Diseases\n");

    scanf("%d",&enter);


    if(enter==4)
    {
        count+=10;
    }
    else
    {



            char *filename = "CorrectA.txt";


            FILE *miss=fopen(filename,"a");





        fputs("ix) What is having good personal hygiene a good prevention of?\n\n", miss);
        fputs("1. Losing hair\n", miss);
        fputs("2. Tooth decay\n", miss);
       fputs("3. Looking ugly\n", miss);
       fputs("4. Diseases\n", miss);

       fputs("\nCorrect Answer :: \n 4. Diseases\n", miss);



        fclose(miss);

    }
    printf("\n\n");


    printf("\n\n\n your score is %d out of 90\n\n",count);


    printf("press 1 for seeing correct answer or  press any key for going forth: \n\n");
   // scanf("%d",&enter);
  char ch2=getch();
    if(ch2=='1')
        {

        //setcolor(14);
         char *filename = "CorrectA.txt";

                    FILE *miss=fopen(filename,"r");
                    char ch;
                    while ((ch = fgetc(miss)) != EOF)
                    putchar(ch);


                fclose(miss);
        }








            break;
            case 2:
                {



    printf("\n\nPlease Enter age\n");

    scanf("%d",&age);


                  if(age >=0 && age<=1)
                {
        printf("\t\t\tYou are a Infant\n\n");
        temp=Infant;

            }
            else if(age>=2 && age<=4 )
            {

            printf("\t\t\tYour are a Toddler\n\n");

              temp=Toddler;


                }
        else if(age>=5 && age<=8)
            {


        printf("\t\t\tYou are in early childhood\n\t");
            temp=Preschooler;


            }
        else if(age>=9 && age<=12)
            {


        printf("\t\t\tYou are in late childhood \n\n");
          Healthy_Life_Advice();

          char *filename="late_Childhood.txt";
          FILE *childhood=fopen(filename,"r");
          char ch;
          while((ch=fgetc(childhood))!=EOF)
          {
              putchar(ch);
          }
          fclose(childhood);

            }
    else if(age>=13 && age<=19)
    {


                printf("\t\t\tYou are a Teenager/Adolescence\n\n");

                printf("1. Develoopment At Puberty\n");
                printf("2. Negative impact of technology on Physical Health\n");
                printf("3. Healthy Life Advice\n");
                printf("4. Food Suggestion\n");
                printf("please enter your choice\n\n");
                scanf("%d",&choice);
                switch(choice)
                {
                case 1:
                     Development_At_Puberty();
                     break;
                case 2:
                      Negative_IMpact_Of_Technology_ON_Physical_Health();
                      break;
                case 3:

                       Healthy_Life_Advice();
                       break;
                case 4:
                {

            char *filename = "Teenager.txt";

            FILE *Taspect=fopen(filename,"r");
            char ch;
            while ((ch = fgetc(Taspect)) != EOF)
                putchar(ch);

            fclose(Taspect);

                    }
                    }


                 }
            else if(age>=20 && age<=45)
                    {


                printf("\t\tYou are a Young\n\n");


                }

                else
                {

            printf("\t\t\tYou are a Older Person\n\n");

                }


            break;

            }
                case 3:

                    {
                        printf("1. Sleeping hour data colletion web\n");
                        printf("2. Quizz question collect web\n");
                        printf("3. Zodiac sign analysis web\n");
                        printf("4. Nutrition for Children data collection web\n");

                        printf("\n\nPlease enter your choice\n");
                        scanf("%d",&choice);
                        switch(choice)
                        {
                        case 1:
                            system("start https://www.sleepfoundation.org/how-sleep-works/how-much-sleep-do-we-really-need ");
                        break;
                        case 2:
                            system("start https://www.proprofs.com/quiz-school/story.php?title=healthy-lifestyle_2");
                            break;
                        case 3:

                            system("start https://www.astrology-zodiac-signs.com/zodiac-signs/taurus/");
                            break;
                        case 4:
                            system("start https://cradle2crayons-redford.com/nutrition-for-children/");
                            break;

                        }


                    }



        }

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
void BMI()
{
        system("cls");

   // system("color 8B");



    struct criteria w,h;
    printf("\n\nPlease Enter your weight (kg)\n");
    scanf("%f",&w.weight);
    printf("Please Enter your height( foot.inch) \n");
    scanf("%f",&h.height);

    while(h.height<=0)
    {
        printf("Invalid number\n");
        printf("Enter you height. it should be a positive number\n");
        scanf("%f",&h.height);
    }
    h.height=h.height*12;
    h.height=0.0254*h.height;
    float s=(w.weight ) / (h.height *h.height);
    int x;
    printf(" Your BMI is  : %.2f\n", s);




    if(s<18.5)
    {


        printf("You are Underweight\n");

        printf("press 1 for seeing  how to gain weight or 0 for exit\n\n");
        scanf("%d",&x);
        int flag= x?1:0;
        if(flag)
        {
            char *filename ="okey2.txt";

            FILE *weightGain=fopen(filename,"r");
            char ch;
            while ((ch = fgetc(weightGain)) != EOF)
                putchar(ch);




            fclose(weightGain);

        }




    }
    else if(s>=18.5 && s<=24.5)
        printf("You are in Normal weight\n");
    else
    {


        printf("You are Overweight\n");

          printf("press 1 for seeing  how to loose weight or 0 for exit\n\n");
        scanf("%d",&x);
        int flag= x?1:0;
        if(flag)
        {
            char *filename = "okey3.txt";

            FILE *weightlose=fopen(filename,"r");
            char ch;
            while ((ch = fgetc(weightlose)) != EOF)
                putchar(ch);




            fclose(weightlose);

        }
    }


    /* BMI Calculator
    weight(kg)/height (m) * height(m)
    //underweight<18.5
    normal weight 18.5-24.5
    overweight >25*/


      printf("\t\t01. Sign in/Sign up\n");
    printf("\t\t02. Home page\n");
    printf("\t\t03. Life style\n");
    printf("\t\t04. Sleeping hour\n");
    printf("\t\t05. Study hour\n");
    printf("\t\t06. Spend_time_on_Technology\n");
    printf("\t\t07. Recreation\n");
    printf("\t\t08. Food Habit \n");
    printf("\t\t09. BMI (Body mass index) \n");
    printf("\t\t10. Spend_Time_on_Ritual_Activities\n");
    printf("\t\t11. LifeStyle quizz and general info\n");
    printf("\t\t12. Childcare\n");
    printf("\t\t13. Human Zodiac Sign\n");
    printf("\t\t else press any digit to exit\n\n");





    int choice ;
    printf("Enter your choice\n");

    scanf("%d",&choice);
    switch(choice)
    {


    case 1:
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


        return;


    }



}



void ChildCare()
{

            system("cls");
    //system("color 8A");
    printf("\n\n\n\t\tWhat should we feed our children from 4 to 8 years??\n\n");

    printf("\t\t\tNutritionist suggest-------\n\n");
    printf("\t\tMorning : Nuddle/Pawroti/ bread-Vegetable\n\n");
    printf("\t\tAt 11 AM : Bananna/orange/ripe papaya /mango/gripes/others colorful fruits\n\n");
    printf("\t\tAt 2 PM : rice , lentis,fish,vegetable\n\n");
    printf("\t\tAt 6 PM : Payesh/shemai/Dairy foods\n\n");
    printf("\t\tBefore Sleeping : rice, lentis,flesh,vegetable\n\n");

              char *filename = "babyCare.txt";

                    FILE *BabyNutrition =fopen(filename,"r");
                    char ch;
                    while ((ch = fgetc(BabyNutrition)) != EOF)
                    putchar(ch);




                fclose(BabyNutrition);



      int choice ;

    printf("\n\n\nEnter your choice for seeing more or else any key to exit\n\n");
    printf("\t\t01. Sign in/Sign up\n");
    printf("\t\t02. Home page\n");
    printf("\t\t03. Life style\n");
    printf("\t\t04. Sleeping hour\n");
     printf("\t\t05. Study hour\n");
    printf("\t\t06. Spend_time_on_Technology\n");
    printf("\t\t07. Recreation\n");
    printf("\t\t08. Food Habit \n");
     printf("\t\t09. BMI (Body mass index) \n");
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

void LifeStyle()
{

    system("cls");





       printf("\n\n\tTime Stamp :  ");
        time_t t;
        time(&t);
        printf("%s\n",ctime(&t));
    int age;

    char gender[20];
    float weight,height;
    setcolor(10);
       //  system("color DF");



    float sleepH;
    int studyH,SocialMT,spent_time_with_family,outdoorGame,balanceFood;
    int NetWorth;
    int gameT,WTV,recreation,ritual,workplaceT,smoker;
    char educationRank[50];
    char profession[30];


    int fourParameter=0;
    int okey=0;
    printf("please enter your age\n\n");
    scanf("%d",&age);
    printf("Please Enter your weight (kg)\n");
    scanf("%f",&weight);
    printf("Please Enter your height (foot.inch)\n");
    scanf("%f",&height);
    float s=(weight ) / (height *height);
    if(s>=18.5 && s<=24.5)
    {
        okey++;
    }


    printf("Please enter your gender\n\n");
    scanf("%s",gender);
    printf("please enter your sleeping hour  \n\n");
    scanf("%f",&sleepH);
    if(sleepH>=7.00)
    {
        okey++;
    }
    printf("please enter your profession . e.g  Student/Teacher/Goverment service holder/businessmen\n\n");
    scanf(" %[^\n]",profession);
    int len=strlen(profession);
    for(int i=0; i<len; i++)
    {
        if(i==0)
            profession[i]=toupper(profession[i]);
        else
            profession[i]=tolower(profession[i]);
    }
    if(strcmp(profession,"Student")==0)
    {

        printf("please enter your Education Rand . e.g  primary level/secondary level  /Higher secondary level/university level\n");


        scanf(" %[^\n]",educationRank);



        len=strlen(educationRank);
        for(int i=0; i<len; i++)
        {
            if(i==0)
                educationRank[i]=toupper(educationRank[i]);
            else
                educationRank[i]=tolower(educationRank[i]);
        }

        while((strcmp(educationRank,"Primary level") !=0) && (strcmp(educationRank,"Secondary level")!=0) && (strcmp(educationRank,"Higher secondary level")!=0) && (strcmp(educationRank,"University level")!=0))
        {
            printf("Oops !!! Spelling Mistake \n\n");
              scanf(" %[^\n]",educationRank);

             len=strlen(educationRank);
        for(int i=0; i<len; i++)
        {
            if(i==0)
                educationRank[i]=toupper(educationRank[i]);
            else
                educationRank[i]=tolower(educationRank[i]);
        }

        }
        printf("Please enter how long time(in hour) do you spend on study\n\n");
        scanf("%d",&studyH);
        if(studyH>=2 && strcmp(educationRank,"Primary level")==0)
        {
            okey++;
        }

        else if(studyH>=3 && strcmp(educationRank,"Secondary level")==0)
        {
            okey++;
        }
        else if(studyH>=5 && strcmp(educationRank,"Higher secondary level")==0)
        {
            okey++;
        }
        else if(studyH>=6 && strcmp(educationRank,"University level")==0)
        {
            okey++;
        }



        printf("please enter how long time(in minutes) do you spend on social media . e.g facebook, Instragram,WhatApp, SnapChap,Telegram,\n\n");
        scanf("%d",&SocialMT);
        if(SocialMT<=60)
        {
            okey++;
        }

        printf("please enter how long time (in minutes) do you spend on Gaming . e.g computer game , online game ,Android game, Pubg,Free Fire\n\n");
        scanf("%d",&gameT);
        if(gameT<=60)
        {
            okey++;
        }
        printf("please enter how long time(in minutes) do you spend on Watching Television or Movie,Drama series\n\n");
        scanf("%d",&WTV);
        if(WTV<=90)
        {
            okey++;
        }

        printf("How long time (in minutes) do you spend in your ritual activities or worship\n\n");

        scanf("%d",&ritual);
        if(ritual>=60)
        {
            okey++;
        }
            printf("Enter how long time do you spend (in minutes ) in your outdoor playing . e.g soccer  \cricket  \marathon  \Badminton   \snow skiting  \Hockey   \ Hide and seek\n\n");
            scanf("%d",&outdoorGame);
            if(outdoorGame>=20 && outdoorGame<=60)
            {
                okey++;
            }




        printf("please enter how long time do you spend on your Recreation. e.g Boating \Fishing\ visiting historical place \ Swimming \Gardening \n\n");
        scanf("%d",&recreation);
        if(recreation<=60)
        {
            okey++;
        }

        printf("please enter how often do you have balance food in a month\n\n ");



            scanf("%d",&balanceFood);

        if(balanceFood>=4)
        {
            okey++;
        }


             setcolor(15);
        if(okey==9 || okey==10)
        {
            printf("WOW!!!  Your life style is Absolutely  Perfect\n\n");

            printf("Your Score is %d out of 10 in the criteria of  Life style measurement\n\n ",okey);

        }
        else  if(okey ==8)

        {
            printf("Your life style is Almost Perfect\n");
            printf("Your Score is %d out of 10 in the criteria of  Life style measurement\n\n",okey);
        }
        else if(okey==7 || okey==6)
        {
            printf("Your life style is moderately healthy\n\n");
            printf("Your Score is %d out of 10 in the criteria of Life style measurement\n\n",okey);
        }
        else if(okey==5)
        {
            printf("Your life style is unhealthy . you should improve more\n\n");
            printf("Your Score is %d out of 10 in the criteria of Life style measurement\n\n",okey);
        }
        else
        {
            printf("Oops!!! your life style is very bad. please improve your life style as early as possible\n\n");
            printf("Your Score is %d out of 10 in the criteria of Life style measurement\n\n",okey);
        }


    }
    else if(strcmp(profession,"Teacher")==0)
    {

        printf("Please enter how long time(in hour) do you spend on study\n\n");
        scanf("%d",&studyH);


        if(studyH>=2)
        {
            okey++;
        }



        printf("please enter how long time(in minutes) do you spend on social media . e.g chatting , facebook, Instragram,WhatApp, SnapChap,Skype,Telegram,viber\n\n");
        scanf("%d",&SocialMT);
        if(SocialMT<=60)
        {
            okey++;
        }

        printf("How long time (in minutes) do you spend in your ritual activities or worship\n\n");

        scanf("%d",&ritual);
        if(ritual>=60)
        {
            okey++;
        }

        printf("please enter how long time(in minutes) do you spend on Watching Television or Movie,Drama series,Cartoon\n\n");
        scanf("%d",&WTV);
        if(WTV<=60)
        {
            okey++;
        }
        printf("please enter how long time (in minutes) do you spend with your family\n\n");
        scanf("%d",&spent_time_with_family);
        if(spent_time_with_family>=45)
        {
            okey++;
        }
        printf("please enter how long time (in hours) do you stay at your workplace. e.g  University/School/College");
        scanf("%d",&workplaceT);
        if(workplaceT>=6 && workplaceT<=8)
        {
            okey++;
        }

            printf("please enter how long time do you spend on your Recreation. e.g Boating \Fishing\ visiting historical place \ Swimming \Gardening \n\n");
        scanf("%d",&recreation);
        if(recreation<=60)
        {
            okey++;
        }


     printf("please enter how often do you have balance food in a month(e.g 2,3,4...)\n\n ");
        scanf("%d",&balanceFood);

        if(balanceFood>=4)
        {
            okey++;
        }



        if(okey==10)
        {
            printf("WOW!!!  Your life style is Absolutely  Perfect\n\n");

            printf("Your Score is %d out of 10 in the criteria of  Life style measurement\n\n ",okey);

        }
        else  if(okey ==9 || okey==8)

        {
            printf("Your life style is Almost Perfect\n");
            printf("Your Score is %d out of 10 in the criteria of  Life style measurement\n\n",okey);
        }
        else if(okey==7 || okey==6)
        {
            printf("Your life style is moderately healthy\n\n");
            printf("Your Score is %d out of 10 in the criteria of Life style measurement\n\n",okey);
        }
        else if(okey==4 || okey==5)
        {
            printf("Your life style is unhealthy . you should improve more\n\n");
            printf("Your Score is %d out of 10 in the criteria of Life style measurement\n\n",okey);
        }
        else
        {
            printf("Oops!!! your life style is very bad. please improve your life style as early as possible\n\n");
            printf("Your Score is %d out of 10 in the criteria of Life style measurement\n\n",okey);
        }



    }
    else if(strcmp(profession,"Goverment service holder")==0)
    {



        printf("please enter how long time(in minutes) do you spend on social media . e.g chatting , facebook, Instragram,WhatApp, SnapChap,Skype,Telegram,viber\n\n");
        scanf("%d",&SocialMT);
        if(SocialMT<=60)
        {
            okey++;
        }

        printf("How long time (in minutes) do you spend in your ritual activities or worship\n\n");

        scanf("%d",&ritual);
        if(ritual>=60)
        {
            okey++;
        }

        printf("please enter how long time(in minutes) do you spend on Watching Television or Movie,Drama series,Cartoon\n\n");
        scanf("%d",&WTV);
        if(WTV<=60)
        {
            okey++;
        }
        printf("please enter how long time (in minutes) do you spend with your family\n\n");
        scanf("%d",&spent_time_with_family);
        if(spent_time_with_family>=45)
        {
            okey++;
        }
        printf("please enter how long time (in hours) do you stay at your workplace. e.g  University/School/College\n\n");
        scanf("%d",&workplaceT);
        if(workplaceT>=6 && workplaceT<=8)
        {
            okey++;
        }



            printf("please enter how long time do you spend on your Recreation. e.g Boating \Fishing\ visiting historical place \ Swimming \Gardening \n\n");
        scanf("%d",&recreation);
        if(recreation<=60)
        {
            okey++;
        }
        printf("Are you addicted in any kinds of Alcohol or smoking  (if yes, enter 1, or 0 )???\n\n ");
        scanf("%d",&smoker);
        if(smoker==0)
        {
            okey++;
        }
       printf("please enter how often do you have balance food in a month\n\n ");
            scanf("%d",&balanceFood);


        if(balanceFood>=4)
        {
            okey++;
        }



        if(okey==11)
        {
            printf("WOW!!!  Your life style is Absolutely  Perfect\n\n");

            printf("Your Score is %d out of 10 in the criteria of  Life style measurement\n\n ",okey);

        }
        else  if(okey ==10 || okey==9)

        {
            printf("Your life style is Almost Perfect\n");
            printf("Your Score is %d out of 10 in the criteria of  Life style measurement\n\n",okey);
        }
        else if(okey==8 || okey==7)
        {
            printf("Your life style is moderately healthy\n\n");
            printf("Your Score is %d out of 10 in the criteria of Life style measurement\n\n",okey);
        }
        else if(okey==6 || okey==5)
        {
            printf("Your life style is unhealthy . you should improve more\n\n");
            printf("Your Score is %d out of 10 in the criteria of Life style measurement\n\n",okey);
        }
        else
        {
            printf("Oops!!! your life style is very bad. please improve your life style as early as possible\n\n");
            printf("Your Score is %d out of 10 in the criteria of Life style measurement\n\n",okey);
        }




    }
    else if(strcmp(profession,"Businessman")==0)
    {






        printf("please enter how long time(in minutes) do you spend on social media . e.g chatting , facebook, Instragram,WhatApp, SnapChap,Skype,Telegram,viber\n\n");
        scanf("%d",&SocialMT);
        if(SocialMT<=90)
        {
            okey++;
        }



        printf("please enter how long time(in minutes) do you spend on Watching Television or Movie,Drama series,Cartoon\n\n");
        scanf("%d",&SocialMT);
        if(WTV<=90)
        {
            okey++;
        }
        printf("How long time (in minutes) do you spend in your ritual activities or worship\n\n");

        scanf("%d",&ritual);
        if(ritual>=60)
        {
            okey++;
        }
        printf("please enter how long time (in minutes) do you spend with your family\n\n");
        scanf("%d",&spent_time_with_family);
        if(spent_time_with_family>=60)
        {
            okey++;
        }

        printf("Are you addicted in any kinds of Alcohol or smoking  (if yes, enter 1, or 0 )??? ");
        scanf("%d",&smoker);
        if(smoker==0)
        {
            okey++;
        }

             printf("please enter how long time do you spend on your Recreation. e.g Boating \Fishing\ visiting historical place \ Swimming \Gardening \n\n");
        scanf("%d",&recreation);
        if(recreation<=60)
        {
            okey++;
        }
           printf("please enter how often do you have balance food\n\n ");
                scanf("%d",&balanceFood);

        if(balanceFood>=4)
        {
            okey++;
        }



        if(okey==9)
        {
            printf("WOW!!!  Your life style is Absolutely  Perfect\n\n");

            printf("Your Score is %d out of 9 in the criteria of  Life style measurement\n\n ",okey);

        }
        else  if(okey ==8)

        {
            printf("Your life style is Almost Perfect\n");
            printf("Your Score is %d out of 9 in the criteria of  Life style measurement\n\n",okey);
        }
        else if(okey==7 || okey==6)
        {
            printf("Your life style is moderately healthy\n\n");
            printf("Your Score is %d out of 9 in the criteria of Life style measurement\n\n",okey);
        }
        else if(okey==5)
        {
            printf("Your life style is unhealthy . you should improve more\n\n");
            printf("Your Score is %d out of 9 in the criteria of Life style measurement\n\n",okey);
        }
        else
        {
            printf("Oops!!! your life style is very bad. please improve your life style as early as possible\n\n");
            printf("Your Score is %d out of 9 in the criteria of Life style measurement\n\n",okey);
        }


    }

             int choice ;

    printf("\n\n\nEnter your choice for seeing more or else any key to exit\n\n");

    printf("\t\t01. Sign in/Sign up\n");
    printf("\t\t02. Home page\n");
    printf("\t\t03. Life style\n");
    printf("\t\t04. Sleeping hour\n");
     printf("\t\t05. Study hour\n");
    printf("\t\t06. Spend_time_on_Technology\n");
    printf("\t\t07. Recreation\n");
    printf("\t\t08. Food Habit \n");
     printf("\t\t09. BMI (Body mass index) \n");
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
void  SleepHour()
{

    int age;
    float sleepH;
    printf("please enter your age\n\n");
    scanf("%d",&age);



    if(age >=0 && age<=1)
    {
        // system("color 5");
        printf("You are a Infant\n");



        printf("Enter your sleeping hour\n");
        scanf("%f",&sleepH);
        if(sleepH<14.00)
        {

            printf("Your ain't taking enough sleeping\n\n");
            printf("Your recommended sleeping hours is 14 to 17 \n");
        }
        else
        {
            printf(" Wow !! you sleeping hour is perfect\n\n");



        }

    }

    else if(age>1 && age<3)
    {

        printf("Your are a Toddler\n");
        printf("Enter your sleeping hour\n");
        scanf("%f",&sleepH);
        if(sleepH<14.00)
        {

            printf("Your ain't taking enough sleeping\n\n");
            printf("Your recommended sleeping hours is 14 to 17\n");
        }
        else
        {
            printf(" Wow !! you sleeping hour is perfect\n\n");
        }

    }

    else if(age>=3 && age<=5)
    {


        printf("You are a Preschooler /Kid\n");

        printf("Enter your sleeping hour\n");
        scanf("%f",&sleepH);
        if(sleepH<12.00)
        {

            printf("Your ain't taking enough sleeping\n\n");
            printf("Your recommended sleeping hours is 12 to 14\n");
        }
        else
        {
            printf(" Wow !! you sleeping hour is perfect\n\n");
        }

    }


    else if(age>=6 && age<=11)
    {


        printf("You are Middle childhood \n");

        printf("Enter your sleeping hour\n");
        scanf("%f",&sleepH);
        if(sleepH<10.00)
        {

            printf("Your ain't taking enough sleeping\n\n");
            printf("Your recommended sleeping hours is 10 to 12\n");
        }
        else
        {
            printf(" Wow !! you sleeping hour is perfect\n\n");
        }

    }

    else if(age>=12 && age<=19)
    {


        printf("You are a Teenager/Adolescence\n");

        printf("Enter your sleeping hour\n");
        scanf("%f",&sleepH);
        if(sleepH<7.00)
        {

            printf("Your ain't taking enough sleeping\n\n");
            printf("Your recommended sleeping hours is 7\n");
        }
        else
        {
            printf(" Wow !! you sleeping hour is perfect\n\n");
        }

    }
    else if(age>=20 && age<=45)
    {


        printf("You are a Young\n\n");
        printf("Enter your sleeping hour\n");
        scanf("%f",&sleepH);
        if(sleepH<7.00)
        {

            printf("Your ain't taking enough sleeping\n\n");
            printf("Your recommended sleeping hours is 7\n");
        }
        else
        {
            printf(" Wow !! you sleeping hour is perfect\n\n");
        }

    }

    else if(age>=46 && age<=65)
    {

        printf("You are a Adult\n");

        printf("Enter your sleeping hour\n");
        scanf("%f",&sleepH);
        if(sleepH<8.00)
        {

            printf("Your ain't taking enough sleeping\n\n");
            printf("Your recommended sleeping hours is 8 to 9\n");
        }
        else
        {
            printf(" Wow !! you sleeping hour is perfect\n\n");
        }


    }




     int choice ;

    printf("\n\n\nEnter your choice for seeing more or else any key to exit\n\n");
    printf("\t\t1. Sign in/Sign up");
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
void StudyHour()
{


    char gender[20];
    int age,studyH;
    printf("please enter your age\n\n");
    scanf("%d",&age);
    printf("Please enter your gender\n\n");
    scanf("%s",gender);
    char profession[30];
          char educationRank[50];

    printf("please enter your profession . e.g  Student/Teacher/Goverment service holder/businessmen\n\n");
    scanf(" %[^\n]",profession);
    int len=strlen(profession);
    for(int i=0; i<len; i++)
    {
        if(i==0)
            profession[i]=toupper(profession[i]);
        else
            profession[i]=tolower(profession[i]);
    }

    if(strcmp(profession,"Student")==0)
    {

        printf("please enter your Education Rand . e.g  primary level/secondary level/Higher secondary level/university level\n");


        scanf(" %[^\n]",educationRank);
        len=strlen(educationRank);
        for(int i=0; i<len; i++)
        {
            if(i==0)
                educationRank[i]=toupper(educationRank[i]);
            else
                educationRank[i]=tolower(educationRank[i]);
        }
          while((strcmp(educationRank,"Primary level") !=0) && (strcmp(educationRank,"Secondary level")!=0) && (strcmp(educationRank,"Higher secondary level")!=0) && (strcmp(educationRank,"University level")!=0))
        {
            printf("Oops !!! Spelling Mistake \n\n");
              scanf(" %[^\n]",educationRank);

             len=strlen(educationRank);
        for(int i=0; i<len; i++)
        {
            if(i==0)
                educationRank[i]=toupper(educationRank[i]);
            else
                educationRank[i]=tolower(educationRank[i]);
        }

        }
        printf("Please enter how long time(in hour) do you spend on study\n\n");
        scanf("%d",&studyH);
        if(studyH>=2 && strcmp(educationRank,"Primary level")==0)
        {
            printf("Wow !!! your study time is perfect\n\n");
        }
        else if(strcmp(educationRank,"Primary level")==0)
        {
            printf("you should study at least 2 hours daily\n\n");
        }

        if(studyH>=3 && strcmp(educationRank,"Secondary level")==0)
        {
            printf("Wow !!! your study time is perfect\n\n");
        }
        else if(strcmp(educationRank,"Secondary level")==0)
        {
            printf("you should study at least 3 hours daily\n\n");
        }
        if(studyH>=5 && strcmp(educationRank,"Higher secondary level")==0)
        {
            printf("Wow !!! your study time is perfect\n\n");
        }
        else if(strcmp(educationRank,"Higher secondary level")==0)
        {
            printf("you should study at least 5 hours daily\n\n");
        }
         if(studyH>=6 && strcmp(educationRank,"University level")==0)
        {
            printf("Wow !!! your study time is perfect\n\n");
        }
        else if(strcmp(educationRank,"University level")==0)
        {
            printf("you should study at least 6 hours daily\n\n");
        }

    }
     else if(strcmp(profession,"Teacher")==0)
     {
           printf("Please enter how long time(in hour) do you spend on study\n\n");
        scanf("%d",&studyH);


        if(studyH>=2)
        {
            printf("Wow !!! your study time is perfect\n\n");
        }
        else
        {
            printf("You should study at least 2 hours\n\n");

        }
     }

        else if(strcmp(profession,"Goverment service holder")==0)
        {
            printf("There is no specific time limit for your study\n\n");
            printf("However if you pursue any higher study like Phd or M.BC ,then you should study at least 2 hours\n\n");
        }


           else if(strcmp(profession,"Businessman")==0)
           {
               printf("There is no specific time limit for your study\n\n");
               printf("however you should study how to manage employee , how to create excelsheet \n\n ");

           }



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
void Spend_time_on_Technology()
{
       setcolor(14);
             char gender[20];
    int age,studyH,SocialMT,gameT,WTV;
    printf("please enter your age\n\n");
    scanf("%d",&age);

    printf("Please enter your gender\n\n");
    scanf("%s",gender);
    char profession[30];
          char educationRank[50];

    printf("please enter your profession . e.g  Student/Teacher/Goverment service holder/businessmen\n\n");
    scanf(" %[^\n]",profession);
    int len=strlen(profession);
    for(int i=0; i<len; i++)
    {
        if(i==0)
            profession[i]=toupper(profession[i]);
        else
            profession[i]=tolower(profession[i]);
    }

    if(strcmp(profession,"Student")==0)
    {

        printf("please enter your Education Rand . e.g  primary level student /secondary level student /Higher secondary level student/university level student\n");


        scanf(" %[^\n]",educationRank);
        len=strlen(educationRank);
        for(int i=0; i<len; i++)
        {
            if(i==0)
                educationRank[i]=toupper(educationRank[i]);
            else
                educationRank[i]=tolower(educationRank[i]);
        }
           printf("please enter how long time(in minutes) do you spend on social media . e.g chatting , facebook, Instragram,WhatApp, SnapChap,Skype,Telegram,viber\n\n");
        scanf("%d",&SocialMT);
        if(SocialMT<=60)
        {
                printf("Wow !!! your time spend in social media is perfect\n\n");
        }
        else
        {
            printf("Oops!!  you are wasting more time on social media\n\n");
            printf("your recommended  time on social media is less than or equal to 1 hours only\n");
        }

        printf("please enter how long time (in minutes) do you spend on Gaming . e.g computer game , online game ,Android game, Pubg,Free Fire\n\n");
        scanf("%d",&gameT);
        if(gameT<=60)
        {
             printf("Wow !!! your time spend  on gaming  is perfect\n\n");

        }
        else
        {

            printf("you should minimize your time on gaming\n\n");
            printf("your recommended  time on gaming  is less than or equal to 1 hours only\n");

        }
        printf("please enter how long time(in minutes) do you spend on Watching Television or Movie,Drama series,Cartoon\n\n");
        scanf("%d",&WTV);
        if(WTV<=90)
        {
             printf("Wow !!! your time spend  on gaming  is perfect\n\n");
        }
        else
        {
             printf("you should minimize your time on watching television or movie or drama series\n\n");
             printf("you should spend less than or equal to 90 minutes only\n\n");
        }


        }

         else if(strcmp(profession,"Teacher")==0)
         {
             printf("please enter how long time(in minutes) do you spend on social media . e.g chatting , facebook, Instragram,WhatApp, SnapChap,Skype,Telegram,viber\n\n");
        scanf("%d",&SocialMT);
        if(SocialMT<=60)
        {
                printf("your are spending perfect time on social media\n\n");
        }
        else
        {
            printf("you should minimize your time on social media\n\n");
            printf("you should spend less than or equal to 1 hour on social media\n\n");
        }
        printf("please enter how long time(in minutes) do you spend on Watching Television or Movie,Drama series,Cartoon\n\n");
        scanf("%d",&WTV);
        if(WTV<=60)
        {
            printf("your are spending perfect time on watching television\n\n");
        }
        else
        {
            printf("you should minimize your time on social media\n\n");
            printf("you should spend less than or equal to 1 hour on  watching television\n\n");
        }
         }

            else if(strcmp(profession,"Goverment service holder")==0)
            {


        printf("please enter how long time(in minutes) do you spend on social media . e.g chatting , facebook, Instragram,WhatApp, SnapChap,Skype,Telegram,viber\n\n");
        scanf("%d",&SocialMT);
        if(SocialMT<=90)
        {
            printf("you are spending perfect time on social media\n");
        }
        else
        {
            printf("you should minimize your time on social media\n\n");
            printf("you should spend less than or equal to 90 minutes daily\n\n");
        }




        printf("please enter how long time(in minutes) do you spend on Watching Television or Movie,Drama series,Cartoon\n\n");
        scanf("%d",&WTV);
        if(WTV<=90)
        {

              printf("you are spending perfect time on watching television\n");
        }
        else
        {
              printf("you should minimize your time on watching television\n\n");
            printf("you should spend less than or equal to 90 minutes daily\n\n");
        }
            }

             else if(strcmp(profession,"Businessman")==0)
             {
                     printf("please enter how long time(in minutes) do you spend on social media . e.g chatting , facebook, Instragram,WhatApp, SnapChap,Skype,Telegram,viber\n\n");
        scanf("%d",&SocialMT);
        if(SocialMT<=90)
        {
            printf("you are spending perfect time on social media\n");
        }
        else
        {
            printf("you should minimize your time on social media\n\n");
            printf("you should spend less than or equal to 90 minutes daily\n\n");
        }




        printf("please enter how long time(in minutes) do you spend on Watching Television or Movie,Drama series,Cartoon\n\n");
        scanf("%d",&WTV);
        if(WTV<=90)
        {

              printf("you are spending perfect time on watching television\n");
        }
            else
            {
              printf("you should minimize your time on watching television\n\n");
            printf("you should spend less than or equal to 90 minutes daily\n\n");
            }
             }



              int choice ;

    printf("\n\n\nEnter your choice for seeing more or else any key to exit\n\n");

    printf("\t\t1. Sign in/Sign up");
    printf("\t\t2. Home Page\n");
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
 void  Recreation()
  {

       char gender[20];
    int age,studyH,i,recreation;
    printf("please enter your age\n\n");
    scanf("%d",&age);
    printf("Please enter your gender\n\n");
    scanf("%s",gender);
    char profession[40];
          char educationRank[40];

    printf("please enter your profession . e.g  Student/Teacher/Goverment service holder/businessmen\n\n");
    scanf(" %[^\n]",profession);

    int len=strlen(profession);
    for(i=0; i<len; i++)
    {
        if(i==0)
            profession[i]=toupper(profession[i]);
        else
            profession[i]=tolower(profession[i]);
    }
    profession[i]='\0';
    if(strcmp(profession,"Student")==0)
    {

        printf("please enter your Education Rand . e.g  primary level student /secondary level student /Higher secondary level student/university level student\n");


        scanf(" %[^\n]",educationRank);
        len=strlen(educationRank);
        for(i=0; i<len; i++)
        {
            if(i==0)
                educationRank[i]=toupper(educationRank[i]);
            else
                educationRank[i]=tolower(educationRank[i]);
        }
        educationRank[i]='\0';

    }


        printf("please enter how long time do you spend on your Recreation. e.g Boating \Fishing\ visiting historical place \ Swimming \Gardening \n\n");


        scanf("%d",&recreation);
        if(recreation<=60)
        {
            printf("Wow !!! your recreation time is perfect\n\n");

        }
        else
        {
            printf("you should spend less than or equal to 1 hour in your recreation\n\n");
        }




         int choice ;

    printf("\n\n\nEnter your choice for seeing more or else any key to exit\n\n");
    printf("\t\t1. Sign in/Sign up\n");
    printf("\t\t2. Home Page\n");
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

 void  FoodHabit()
 {
        char gender[20];
    int age,studyH;
     int Fruts_And_Vegetables_in_percentage,Protein_in_percentage,Carbohydrates_in_percentage,Fats_in_percentage;
    printf("please enter your age\n\n");
    scanf("%d",&age);
    printf("Please enter your gender\n\n");
    scanf("%s",gender);
    char profession[30];
          char educationRank[50];
          float height,weight;
           printf("Please Enter your weight (kg)\n");
    scanf("%f",&weight);
    printf("Please Enter your height \n");
    scanf("%f",&height);
    while(height<=0)
    {
        printf("Invalid number\n");

        printf("please enter a number greater than zero\n");

        scanf("%f",&height);
    }
    height=height*12;
    height=0.0254*height;
    float s=(weight ) / (height *height);


            printf(" Your BMI is  : %.2f\n", s);



    printf("please enter your profession . e.g  Student/Teacher/Goverment service holder/businessmen\n\n");
    scanf(" %[^\n]",profession);
    int len=strlen(profession);
    for(int i=0; i<len; i++)
    {
        if(i==0)
            profession[i]=toupper(profession[i]);
        else
            profession[i]=tolower(profession[i]);
    }

    if(strcmp(profession,"Student")==0)
    {

        printf("please enter your Education Rand . e.g  primary level student /secondary level student /Higher secondary level student/university level student\n");


        scanf(" %[^\n]",educationRank);
        len=strlen(educationRank);
        for(int i=0; i<len; i++)
        {
            if(i==0)
                educationRank[i]=toupper(educationRank[i]);
            else
                educationRank[i]=tolower(educationRank[i]);
        }


    }

               printf("The followings are about your  Food Habits.------------------\n\n");
        printf("please enter the percentage of  Fruits and vegetables in your Food Habit\n\n ");
        scanf("%d",&Fruts_And_Vegetables_in_percentage);
        if(Fruts_And_Vegetables_in_percentage>=40)
        {

            printf("You are taking enough Fruits and vegetables in your Food Habit\n\n");
        }
        else
        {
            printf("Oops !!! you are not following balance diet\n\n");
            printf("your recommendation level of Fruits and vegetables are at least 40 %%\n");
        }

        printf("please enter the percentage of Protin in your food habit \n\n");
        scanf("%d",&Protein_in_percentage);
        if(Protein_in_percentage>=25)
        {
            printf("You are taking enough Protein in your Food Habit\n\n");
        }
        else
        {
             printf("Oops !!! you are not following balance diet\n\n");
            printf("your recommendation level of Fruits and vegetables are at least 25 %%\n");

        }
        printf("please enter the percentage of Fibre-rich Carbohydrates\n\n");
        scanf("%d",&Carbohydrates_in_percentage);
        if(Carbohydrates_in_percentage>=25)
        {
           printf("You are taking enough Carbohydrates in your Food Habit\n\n");

        }
        else
        {
              printf("Oops !!! you are not following balance diet\n\n\n");
            printf("your recommendation level of Fruits and vegetables are at least 25 %%\n");

        }
        printf("please enter the percentage of Fats in your food habits\n\n");
        scanf("%d",&Fats_in_percentage);
        if(Fats_in_percentage>=10)
        {

            printf("you are taking enough Fats in your Food Habits\n\n");
        }

        else
        {
            printf("Oops !!! you are not following balance diet\n\n");
            printf("your recommendation level of Fruits and vegetables are at least 10 %%\n");
        }





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

       return 0;


    }
 }
 void  Spend_Time_on_Ritual_Activities()
 {
     char gender[20];
    int age,studyH,ritualT;


    printf("please enter your age\n\n");
    scanf("%d",&age);
    printf("Please enter your gender\n\n");
    scanf("%s",gender);
    char profession[30];
          char educationRank[50];
          float height,weight;




    printf("please enter your profession . e.g  Student/Teacher/Goverment service holder/businessmen\n\n");
    scanf(" %[^\n]",profession);
    int len=strlen(profession);
    for(int i=0; i<len; i++)
    {
        if(i==0)
            profession[i]=toupper(profession[i]);
        else
            profession[i]=tolower(profession[i]);
    }

    printf("please enter how long time (in minutes) do you spend on prayers or ritual Activities . e.g  saying namaz\n\n");
    scanf("%d",&ritualT);
    if(ritualT>=60)
    {
        printf("Wow !!! you are spend perfect time on your prayers\n\n");
    }
    else
    {
        printf("You should follow fundamental norms of your religion . e.g  saying namaz, reciting Quaran\n\n");
        printf("your recommendation time for ritual activities is at least 1 hour\n\n");
    }




    int choice ;

    printf("\n\n\nEnter your choice for seeing more or else any key to exit\n\n");

    printf("\t\t1. Sign in/Sign up");
    printf("\t\t2. Home Page\n");
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

    default:

      return 0;

     }

     }











