/*
#include<stdio.h>
int main()
{
    int A[5] = { 2,3,4,5,3};


    printf("%d",A[4]);

}
*/
/*
#include<stdio.h>
int main()
{
    int B[2][2]={1,2,3,4,};
    printf("%d",B[0][1]);
}
*/

/*
#include<stdio.h>
int main()
{
    int rows,cols;
    printf("enter the number of rows and colums:");
    scanf("%d %d",&rows,&cols);
    int arr[rows][cols];
    printf("enter the elements of array:\n");

    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<cols; j++)
        {   printf("Element [%d][%d]:",i,j);
            scanf("%d ",&arr[i][j]);
        }
    }
    printf("2D Array:\n");
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<cols; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
*/
/*
#include <stdio.h>

int main() {
    int rows, cols;

    // Get the size of the array from the user
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int arr[rows][cols]; // Declare 2D array (Variable Length Array)

    // Read elements from the user
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {

            scanf("%d", &arr[i][j]);
        }
    }

    // Print the array
    printf("\nThe 2D Array is:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
*/

//1. Write a C program to read and print elements of a 2D array.



/*
//02 Write a C program to find the sum of all elements in a 2D array
#include<stdio.h>
int main()
{
    int rows,colums;

    printf("Enter the number of elemnts:");
    scanf("%d %d",&rows,&colums);
    int arr[rows][colums];
    printf("enter the element:");
    for(int i = 0; i<rows ; i++)
    {

        for(int j = 0; j<rows ; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i = 0; i<rows ; i++)
    {
 int sum=0;
        for(int j = 0; j<rows ; j++)
        {
printf("%d",arr[i][j]);
            sum+=arr[i][j];
        }
        printf("%d",sum);
    }
}
*/


/*
//3. Write a C program to find the sum of each row and each column in a 2D array.
#include<stdio.h>
int main()
{
    int rows,colums,rows_sum=0;
    printf("Enter the number of element:");
    scanf("%d %d",&rows,&colums);
    int arr[rows][colums];
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<colums; j++)
        {
            scanf("%d",&arr[i][j]);
        rows_sum+=arr[i][j];
        }


    }

}
*/
/*
//1. Write a C program to read and print elements of a 2D array.
#include<stdio.h>
int main()
{
int row,cols;
printf("Enter the number of oder:");
scanf("%d %d",&row,&cols);
int arr[row][cols];
for(int i=0;i<row;i++)
{
    for(int j=0;j<cols;j++)
    {
        scanf("%d",&arr[i][j]);
    }
    printf("\n");
}
for(int i=0;i<row;i++)
{
    for(int j=0;j<cols;j++)
    {
        printf("%d ",arr[i][j]);
    }
    printf("\n");
}
}
*/
/*
//02 Write a C program to find the sum of all elements in a 2D arra

 #include<stdio.h>
int main()
{
int row,cols;
printf("Enter the number of oder:");
scanf("%d %d",&row,&cols);
int arr[row][cols];
 int sum = 0;
for(int i=0;i<row;i++)
{
    for(int j=0;j<cols;j++)
    {
        scanf("%d",&arr[i][j]);
    }
    printf("\n");
}
for(int i=0;i<row;i++)
{
    for(int j=0;j<cols;j++)
    {
       sum+=arr[i][j];
    }

}
printf("%d ",sum);
}
*/

/*
//3. Write a C program to find the sum of each row and each column in a 2D array.


#include<stdio.h>
int main()
{
int row,cols;
printf("Enter the number of oder:");
scanf("%d %d",&row,&cols);
int arr[row][cols];
 int sum = 0;
for(int i=0;i<row;i++)
{
    for(int j=0;j<cols;j++)
    {
        scanf("%d",&arr[i][j]);
    }
    printf("\n");
}
for(int i=0;i<row;i++)
{int sum = 0;
    for(int j=0;j<cols;j++)
    {
       sum+=arr[i][j];
    }
printf("%d ",sum);
}
for(int j=0;j<cols;j++)
{int sum = 0;
    for(int i=0;i<row;i++)
    {
       sum+=arr[i][j];
    }
printf("%d ",sum);
}
return 0;
}

*/



/*
//4. Write a C program to transpose a given 2D array.



#include<stdio.h>
int main()
{
    int row,cols;
    int sum =0;
    printf("Enter the number of oder:");
    scanf("%d %d",&row,&cols);
    int arr[row][cols];

    for(int i=0; i<row; i++)
    {
        for(int j=0; j<cols; j++)
        {
            scanf("%d",&arr[i][j]);
        }
        sum+=arr[i][i];
    }
    printf("%d ",sum);
    return 0;
}

*/
/*

//5. Write a C program to find the maximum element in a 2D array.
#include <stdio.h>

int main() {
    int rows, cols;

    // Step 1: Get the size of the 2D array from user
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int arr[rows][cols];

    // Step 2: Input elements into the array
    printf("Enter the elements of the array:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    // Step 3: Initialize minimum with the first element
    int min = arr[0][0];

    // Step 4: Traverse the array to find the minimum
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            if(arr[i][j] < min) {
                min = arr[i][j];
            }
        }
    }

    // Step 5: Print the result
    printf("Minimum element in the array is: %d\n", min);

    return 0;
}
*/

/*
//7. Write a C program to search for an element in a 2D array.
#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    int arr[x][y];
    int key,found = 0;

    for(int i = 0; i<x ; i++)
    {
for(int j = 0;j<y;j++)
{
    scanf("%d",arr[x][y]);
}
    }
}

*/
/*
#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int marks[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &marks[i][j]);
        }
    }

    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = 0; j < m; j++) {
            sum += marks[i][j];
        }
        float avg = (float)sum / m;
        printf("%.1f\n", avg);
    }

    return 0;
}

*/

/*
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    float marks[n];
    for (int i = 0; i < n; i++) {
        scanf("%f", &marks[i]);
    }

    // Bubble Sort (ascending order)
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (marks[j] > marks[j + 1]) {
                float temp = marks[j];
                marks[j] = marks[j + 1];
                marks[j + 1] = temp;
            }
        }
    }

    // Print sorted marks
    for (int i = 0; i < n; i++) {
        printf("%.1f ", marks[i]);
    }

    return 0;
}
*/


#include <stdio.h>

int main() {
    int rows, columns;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &columns);

    int arr[rows][columns], transpose[columns][rows];

    // Input matrix
    printf("Enter the elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // Compute transpose


    // Print original matrix
    printf("\nOriginal Matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
 for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            transpose[j][i] = arr[i][j];
        }
    }
    // Print transpose matrix
    printf("\nTranspose Matrix:\n");
    for (int i = 0; i < columns; i++) {
        for (int j = 0; j < rows; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}





