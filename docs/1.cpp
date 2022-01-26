#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    /**
     * @param number: A 3-digit number.
     * @return: Reversed number.
     */
    int reverseInteger(int number) {
        // write your code here
        string str = to_string(number);
        reverse(str.begin(), str.end());
        return atoi(str.c_str());
    }
};

int main()
{
    Solution a;
    int n;
    int res;
    scanf("%d", &n);
    res = a.reverseInteger(n);
    cout << res;

    
    return 0;
}

public void onCheckedChanged(CompoundButton buttonView, boolean isChecked) {
                if(isChecked){
                        String text = ch.getText().toString();
                    Toast.makeText(MainActivity.this,text,1).show();
                    }
                else if(isChecked == false)
                {
                    Toast.makeText(MainActivity.this,"取消",1).show();
                }
            }