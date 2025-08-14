#include<stdio.h>
int main()
{
    int Score;
    float Cal;
    float Phy;
    float Com;
    int gcal,gphy,gcom;
    float numgcal,numgphy,numgcom;
    int GPA;
    float GPAf;

    printf("Calculus Score : ");
    scanf("%f",&Cal);
    printf("Physics Score : ");
    scanf("%f",&Phy);
    printf("Compro Score : ");
    scanf("%f",&Com);
    printf ("\nSubject    Score    Grade    Grade\n");
    printf("-------------------------------------\n");

    //Calculate the Calculus grade
    if (Cal >= 90 )
    {
        gcal = 'A';
        numgcal = 4;
    }
    else if (Cal >=80 )
    {
        gcal = 'B';
        numgcal = 3;
    }
    else if (Cal >=70 )
    {
        gcal = 'C';
        numgcal = 2;
    }
    else if (Cal >=60 )
    {
        gcal = 'D';
        numgcal = 1;
    }
    else if (Cal < 50 )
    {
        gcal = 'F';
        numgcal = 0;
    }

    printf("Cal %5.0f %8c %11.1f\n", Cal,gcal,numgcal);

    //Calculate the Physics grade
    if (Phy >= 90 )
    {
        gphy = 'A';
        numgphy = 4;    
    }
    else if (Phy >= 80 )
    {
        gphy = 'B';
        numgphy = 3;
    }
    else if (Phy >= 70 )
    {
        gphy = 'C';
        numgphy = 2;
    }
    else if (Phy >= 60 )
    {
        gphy = 'D';
        numgphy = 1;
    }
    else if (Phy < 50 )
    {
        gphy = 'F';
        numgphy = 0;
    }

    printf("Phy %6.0f %8c %11.1f\n", Phy,gphy,numgphy);

    //calculate the Compro grade
    if (Com >= 90 )
    {
        gcom = 'A';
        numgcom = 4;
    }
    else if (Com >= 80 )
    {
        gcom = 'B';
        numgcom = 3;
    }
    else if (Com >= 70 )
    {
        gcom = 'C';
        numgcom = 2;
    }
    else if (Com >= 60 )
    {
        gcom = 'D';
        numgcom = 1;
    }
    else if (Com < 50 )
    {
        gcom = 'F';
        numgcom = 0;
    }

    printf("Com %7.0f %8c %11.1f\n", Com,gcom,numgcom);

    //GPA Calculation
    GPA = (numgcal+numgphy+numgcom)/3;
    GPAf = GPA;
    printf("\nGPA ; %.1f\n", GPAf);

    return 0;
}