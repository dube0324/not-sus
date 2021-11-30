#include <iostream>
#include <cstring>
using namespace std;
void insert(char stringQueue[10][30], char str[30], int &r, int queuesize, int &Count)
{
    if (Count == queuesize)
    {
        cout << "Overflow\n";
        return;
    }
    else
    {
        strcpy(stringQueue[r], str);
        r = (r + 1) % queuesize;
        Count++;
    }
}
void Delete(char stringQueue[10][30], int &f, int r, int &Count, int queuesize)
{
    if (Count == 0)
    {
        cout << "Underflow\n";
        return;
    }
    else
    {
        cout << stringQueue[f] << " is being dequeued\n";
        //		strcpy(stringQueue[f], '\0');
        f = (f + 1) % queuesize;
        Count--;
    }
}
void display(char stringQueue[10][30], int f, int r, int Count, int queuesize)
{
    if (Count == 0)
    {
        cout << "Underflow\n";
        return;
    }
    cout << "The String queue contains: \n";
    for (int i = 0; i < Count; i++)
    {
        cout << stringQueue[((f + i) % queuesize)] << endl;
    }
}
int main()
{
    char stringQueue[10][30], str[30];
    int Rear = 0, Front = 0, Count = 0, queuesize = 10;
    char cont;
    do
    {
        char choice;
        cout << "Enter the operation to be performed on the String queue:\n";
        cout << "1 - Insert\n2 - Delete\n3 - Display\n";
        cin >> choice;
        switch (choice)
        {
        case '1':
        {
            cout << "Enter the string to be added to the queue: ";
            fflush(stdin);
            gets(str);
            insert(stringQueue, str, Rear, queuesize, Count);
            break;
        }
        case '2':
        {
            Delete(stringQueue, Front, Rear, Count, queuesize);
            break;
        }
        case '3':
        {
            display(stringQueue, Front, Rear, Count, queuesize);
            break;
        }
        default:
            cout << "Wrong Input\n";
        }
        fflush(stdin);
        cout << "Press 9 to exit ";
        cin >> cont;
    } while (cont != '9');
    return 0;
}
