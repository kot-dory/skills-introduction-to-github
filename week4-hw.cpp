#include <iostream>
using namespace std;

int arr[10]={0,4,5,2,8,5,2,4,6,3};

void bubbleSortFromSmallTolarge(){
    int temporary ;
// array compare with another array
for (int b = 0; b < 10; b++)
{
    for (int i = 0; i < 10; i++)
{
    if (arr[i]> arr[i+1])
    {
        temporary = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = temporary;

    } 
}
}

for (int a = 0; a < 10; a++)
{
    cout << "array [" << a << "] = " << arr[a] << endl;
}
}

void bubbleSortFromLargeToSmall(){
    int temporary ;
// array compare with another array
for (int b = 0; b < 10; b++)
{
    for (int i = 0; i < 10; i++)
{
    if (arr[i]< arr[i+1])
    {
        temporary = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = temporary;

    } 
}
}

for (int a = 0; a < 10; a++)
{
    cout << "array [" << a << "] = " << arr[a] << endl;
}
}


int main(){
    cout << "bubble Sort From Small To large:" << endl;
 bubbleSortFromSmallTolarge();
 cout << "bubble Sort From Large To small:"<< endl;;
 bubbleSortFromLargeToSmall();
 return 0;
    
}