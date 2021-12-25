#include <iostream>
using namespace std;
int main()
{
    string incomingText;
    char chars[] = { 'a', 'b', 'c','d','e','f','g','h','i','k','l','m','n','o','p','q','r','s','t','v','x','y','z' };
    int nums[] = { 1,2,3,4,5,6,7,8,9,10,20,30,40,50,60,70,80,90,100,200,300,400,500 };
    int takeFrom = 0;
    int result = 0;

    cin >> incomingText;
    for (int i = 0; i < incomingText.length(); i++) {
        for (int j = 0; j < sizeof(chars); j++) {
            if (incomingText.at(i) == chars[j]) {
                takeFrom = nums[j];
                break;
            }
        }
        result += takeFrom;
    }
    cout << result << endl;
    return 0;
}
