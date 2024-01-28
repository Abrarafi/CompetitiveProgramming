#include<stdio.h>
#define arr_size 10

int main()
{
    int arr[arr_size] = {2, 5, 8, 9, 19, 41, 45, 57, 98, 123};
    int i, startPoint, endPoint, midPoint, item, location, comparison;

    item = 57; //the value we want to search from Array

    //Start Binary Search
    startPoint = 0; //first index of array
    endPoint = arr_size-1; //last index of array
    location = -1;
    comparison = 0;

    while(startPoint <= endPoint)
    {
        comparison++;
        midPoint = (startPoint+endPoint)/2;

        if(arr[midPoint]==item)
        {
            location = midPoint;
            break;
        }
        else if(arr[midPoint]<item)
            startPoint = midPoint + 1;
        else
            endPoint = midPoint - 1;

    }

    printf("Given, a sorted array of 10 elements:\n\n");
    for(i = 0; i<arr_size; i++)
        printf("%d ", arr[i]);
    printf("\n----------------------------\n\n");


    if(location==-1)
        printf("%d not found in the Array.\nTotal number of comparisons: %d\n", item, comparison);
    else
        printf("%d found at Location: %d\nTotal number of comparisons: %d\n", item, location+1, comparison);


    return 0;
}