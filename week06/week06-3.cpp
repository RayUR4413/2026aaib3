//week06-3.cpp學習計畫 sumulation 第2題
//LeetCode 657. Robot Return to Origin
class Solution {
public:
    bool judgeCircle(string moves) {
        int x = 0, y = 0;
        for(char c : moves){
            if(c=='U')y++;//往上
            if(c=='D')y--;//往下
            if(c=='L')x--;//往左
            if(c=='R')x++;//往右
        }
        if(x==0 && y==0)return true;
        else return false;
    }
};
