#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr{5,4,3,2,1};
    int n = arr.size();

    // outer loop rounds
    for(int round=1;round<n;round++){
        //Step A :Fetch
        int val=arr[round];

        //Step B :Compare
        //i pe khada hu toh i-1 se 0 tak sbko compare karunga

        int j=round-1;
        for(;j>=0;j--){
            if(arr[j]>val){

        //Step C :shift
                arr[j+1]=arr[j];
            }else{
                break;
            }
        }

        arr[j+1]=val;

    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}