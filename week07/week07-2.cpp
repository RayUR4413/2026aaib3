//week07-2.cpp學習計畫 Simulation 第1題
//LeetCode 682. Baseball Game
class Solution {
public: //大資料結構 nvector 裡有小資料結構string
    int calPoints(vector<string>& operations) {

        vector<int>a;//我們的資料結構(陣列)
        for (string s : operations){
            if(s=="+"){//把前2筆相加塞,到後面
                int now = a[a.size()-1]+a[a.size()-2];
                a.push_back(now);
            }else if(s=="D"){//把前1筆資料變2倍,塞到後面
                int now = a[a.size()-1] * 2;
                a.push_back(now);
            }else if(s=="C"){//把最後1筆 移除
                a.pop_back();//吐掉最後一筆
            }else{
                int now = stoi(s);//(把字串s變整數)
                a.push_back(now);
            }
        }
        //把陣列所有資料(加起來)
        int ans = 0;
        for(int now : a)ans += now;
        return ans;
    }
};
