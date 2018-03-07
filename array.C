# include <stdio.h>
# include <conio.h>
void main()
 

{
    int i;
    int final_index = n % 2 ? n / 2 : (n / 2 + 1);
 
    for (i = 0; i < final_index; i++)
    {
        if (array[i] == x && array[i + n / 2] == x)
            return 1;
    }
    return 0;
}
 
int main()
{
    int array[] = {10, 15, 15, 12, 17 ,15};
    int n = sizeof(array) / sizeof(array[0]);
    int x = 15;
    if (Morenooftimes(array, n, x))
        printf("The given no %d appears more than %d times in array[]", x, n/2);
    else
        printf("The given no %d does not appear more than %d times in array[]", x, n/2);
    getchar();
    return 0;
}
