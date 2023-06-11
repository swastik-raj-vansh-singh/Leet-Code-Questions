class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        //minimum price for buying
        int minimum = prices[0];
        int maxProfit = 0;
    
        for(int i = 0 ; i < prices.size() ;i++ ){
            if (minimum > prices[i])
            {
                minimum = prices[i];
            }
            else if(prices[i] - minimum > maxProfit ){
                maxProfit = prices[i] - minimum;
            }
        }
        return maxProfit;
        }
};


// #include<iostream>
// #include<vector>
// #include <limits.h>
// using namespace std;

// int main(){

//     vector<int>arr{1};
//     int minimum = arr[0];
//     int index;
    
//     for(int i = 0 ; i<arr.size() ;i++ ){
//             if (minimum > arr[i])
//             {
//                 minimum = arr[i];
//                 index = i;
                
//             }
//         }
//         int maximum = arr[index];
//         cout << minimum << endl;
//         cout << index << endl;
//         cout << arr.size() -1<< endl;
//         if(index ==  arr.size()-1){
//             cout << 0 << endl;
//         }
//         else{
//         for(int i = index +1 ; i<arr.size() ;i++ ){
//             if (maximum < arr[i])
//             {
//                 maximum = arr[i];
//             }
//         }
//         cout <<"buy at price:"<< minimum << endl;
//         cout << "sell at price:"<<maximum << endl;
//         cout<< "profit:"<<maximum - minimum;
        
    
// }    
// }
