#include <iostream>
#include <vector>
using namespace std;

void k_terms(vector<int> &arr, int k)
{
    int size = arr.size();
    int i = 0, j = (size - k - 1), temp;
    while (i < j)
    {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;   //arr1
    }
    i = size - k;
    j = (size - 1);
    while (i < j)
    {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;  //arr1
    }
    i = 0, j = (size - 1);
    while (i < j)
    {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;  //arr1
    }
}

void print(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    vector<int> arr;
    int n, ele, k;
    cout << "enter the number of elements : ";
    cin >> n;
    cout << "enter the elements : ";
    for (int i = 0; i < n; i++)
    {
        cin >> ele;
        arr.push_back(ele);
    }

    cout << "enter the Kth value : ";
    cin >> k;
    print(arr);
    if(k>n) k = k%n;
    k_terms(arr, k);
    print(arr);
    return 0;
} //  11/10