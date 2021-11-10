#include<iostream>
using namespace std;
void towerOfHanoi(int n, char source='A', char destination='C', char aux='B')
{
    if (n==1)
    {
        cout<<"Move disk 1 from rod "<<source<<" to rod "<<destination<<endl;
        return;
    }
    towerOfHanoi(n - 1, source,aux,destination);
    cout<<"Move disk "<<n<<" from rod "<<source<<" to rod "<<destination<<endl;
    towerOfHanoi(n-1, aux,destination,source);
}
int main()
{
    int n;
    cout<<"Enter number of disks: ";  
    cin>>n;          
    towerOfHanoi(n); 
    return 0;
}
