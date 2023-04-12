#include <iostream>
using namespace std;

int arr[20]; // Array yang dicari
int n; // number element array
int i; // index array

void input() {
    while (true)
    {
        cout << "Enter the number of element in the array : ";
        cin >> n;
        if ((n > 0) && (n <= 20))
            break;
        else
            cout << "\nArray should have minimum 1 and maximum 20 element\n]\n";
    }

    //Accept array element
    cout << "\n------------------";
    cout << "\nEnter array element ";
    cout << "\n--------------------";
    for (i = 0; i < 0; i++)
    {
        cout << " < " << (i + 1) << "> ";
        cin >> arr[1];
    }
}
void LinearSearch() {
    char ch;
    int comparison; // number of comparison
   
    do     // langkah 3
    {
        //accept the number to be searched
        cout << "\nEnter the element you want to search "; //Langkah 1
        int item;
        cin >> item;;

        comparison = 0;
        for (i = 0; i < n;i++)     //langkah 2 dan 4
        {
            comparison++;
            if (arr[i] == item)    // langkah 5 found
            {
                cout << "\n" << item << "found at position " << (i + 1) << endl;
                break;
            }
        }
        if (i == n)         //langkah 5 not found
            cout << "\n " << item << " not found inthe array\n ";
        cout << "\nNumber of comparisons: " << comparison << endl;
        cout << "\nContinue Search (y/n): ";
        cin >> ch;
    } while ((ch == 'y' )|| (ch == 'Y'));
}

int main()
{
    input();
    LinearSearch();
}
