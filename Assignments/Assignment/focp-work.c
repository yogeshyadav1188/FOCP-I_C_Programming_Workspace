#include <stdio.h>

int main(void)
{
    // Sum and product of elements

    int sum = 0, product = 1;
    int nums[] = {1, 3, 2, 7, 9};

    for (int i = 0; i < 5; i++)
    {
        sum = sum + nums[i];
        product = product * nums[i];
    }

    printf("Sum : %d", sum);
    printf("\nProduct : %d", product);

    // Count how many elements are even

    int even_count = 0;

    int numbers[8] = {2, 5, 7, 9, 8, 4, 33, 66};

    for (int i = 0; i < 8; i++)
    {

        if (nums[i] % 2 == 0)
        {
            even_count++;
        }
        else
            (even_count = even_count);
    }
    printf("%d", even_count);

    return 0;
}

//

void printArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        prinf("%d", a[i]);
    }
}

void inputArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        prinf("Enter value: ");
        scanf("%d", &a[i]);
    }
}

int addArrayElements(int a[], int n)
{

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }
    return sum;
}

int findMinimun(int a[], int n)
{

    int min = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
        }
    }
    return min;
}

int findMax(int a[], int n)
{
    int max = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] > max)
            max = a[i];
    }
    return max;
}

int search(int a[], int n, int target)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] == target)
            return i;
    }
    return -1;
}

void printReverse(int a[], int n)
{
    for (int i = n - 1; i >= 0; i--)
    {
        printf("%d", a[i]);
    }
}

void addOne(int a[], int n)
{

    for (int i = 0; i < n; i++)
    {
        a[i]++;
    }
}

void swap(int *x, int *y)
{
    int t = *x;
    *x = *y;
    *y = t;
}

void reverse(int a[], int n)
{

    for (int i = 0, j = n - 1; i < j; i++, j--)
    {

        swap(&a[i], &a[j]);
    }
}

void runningSum(int a[], int n)
{

    for (int i = 1; i < n; i++)
    {
        a[i] += a[i - 1];
    }
}

int countOccurence(const int a[], int n, int target)
{

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == target)
            count++;
    }
    return count;
}

void copyArray(const int source[], int destination[], int n)
{
    for (int i = 0; i < n; i++)
    {
        destination[i] = source[i];
    }
}

int stringLength(const char str[])
{
    int length = 0;
    for (int i = 0; str[i] != '\0'; i++)
        length++;
    return length;
}

void toUpper(char str[])
{
    for (int i = 0; str[i] != '0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] -= 32;
        }
    }
}

void toLower(char str[])
{
    for (int i = 0; str[i] != '0'; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] += 32;
        }
    }
}

/*void sortAscending(int a[], int n){
    fo(int i = 1; int < n; i++){
        int
    }
}*/
 
