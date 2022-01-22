/*   ___      .__   __.   _______      ___       _______  
    /   \     |  \ |  |  /  _____|    /   \     |       \ 
   /  ^  \    |   \|  | |  |  __     /  ^  \    |  .--.  |
  /  /_\  \   |  . `  | |  | |_ |   /  /_\  \   |  |  |  |
 /  _____  \  |  |\   | |  |__| |  /  _____  \  |  '--'  |
/__/     \__\ |__| \__|  \______| /__/     \__\ |_______/ */

#include <stdio.h>
void printline();

int main()
{
    float Lenght, Breath, Height;
    float CSA;
    printf("Enter your Lenght --> ");
    scanf("%f", &Lenght);
    printf("Enter your Breath --> ");
    scanf("%f", &Breath);
    printf("Enter your Height --> ");
    scanf("%f", &Height);
    CSA = 2 * Height * (Lenght + Breath);
    printline();
    printf("\nCurved Surface Area Of cuboid is --> %.1f\n", CSA);
    printline();

    return 0;
}
void printline()
{
    int i;
    for (i = 0; i <= 43; i++)
    {
        printf("*");
    }
}