class Solution {
public:
    int saipranith(string s) {
        int count = 0;
        int index = s.size() - 1;
        while(index > 0)
        {
            if(s[index] == '0') count++;
            else
            {
                count+=2;
                int temp = index - 1;
                while(temp >= 0 && s[temp] != '0')
                {
                    s[temp] = '0';
                    temp--;
                }
                if(temp < 0) 
                {
                    s = "1" + s;
                    index++;
                }
                else 
                {
                    s[temp] = '1';
                }
            }
            index--;
        }
        return count;
    }
};