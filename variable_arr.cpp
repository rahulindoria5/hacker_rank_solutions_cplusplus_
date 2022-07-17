#include <bits/stdc++.h>
using namespace std;

int main()
{
    int array_n_length, subarray_length, number_q, element;

    vector<vector<int>> arr;
    vector <int> sub_arr;

    cout << "enter the length of array : ";
    cin >> array_n_length;

    cout << "enter number of queries :";
    cin >> number_q;

    for(int i = 0; i < array_n_length; i++)
    {
        cout << "enter length of subarray : ";
        cin >> subarray_length;

        for(int j = 0; j < subarray_length; j++)
        {
            cout << "enter subarray element :";
            cin >> element;
            sub_arr.push_back(element);
        }

        arr.push_back(sub_arr);
    }

    int x, y;
    for (int i = 0; i < number_q; i++)
    {
        cout << "enter the element you want to print : ";
        cin >> x >> y; 

        cout << arr[x][y] << endl;
    }


    return 0;
}