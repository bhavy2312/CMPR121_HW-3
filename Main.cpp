/*
Bhavy Patel 
CMPR 121 spring 24 
13 April 2024
#HW 3
Collaboration: None 
*/

/*  part A 
1. B
2. boolean
3. false 
4. #
5. \0
6. 25
7. 23
8. in the Gardenof Eden.
9. #include <cctype>
10. "double quotation marks", single quotations 
*/

//section B 

#include <iostream>
using namespace std;

int* reverseArray(int arr[], int size) 
{
    int* newArr = new int[size];  // created a new array with the same size

    // Copy elements from the original array to the new array in reverse order.
    for (int i = 0, j = size - 1; i < size; i++, j--)
    {
        newArr[i] = arr[j];
    }

    return newArr;  // Return the pointer to the newly created reversed array
}

int main()
{
    int originalArray[] = { 1, 9, 3, 10, 5, 6, 7, 8, 2, 4 };

    int size = sizeof(originalArray) / sizeof(originalArray[0]);

    cout << "The contents of the original array are: ";
    cout << "\n";

    for (int i = 0; i < size; i++) 
    {
        cout << originalArray[i] << " ";
    }
    cout <<"\n";
    
    int* reversedArray = reverseArray(originalArray, size);
    cout << "\n";
    cout << "The contents of the copy are: ";
    cout << "\n"; 
    for (int i = 0; i < size; i++) 
    {
        cout << reversedArray[i] << " ";
    }
  
    delete[] reversedArray;  
    
    cin.get();

    return 0;
}



