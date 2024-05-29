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

    int vivek(string s)
    {
        int N = s.size();
        int operations = 0, carry = 0;

        for (int i = N - 1; i > 0; i--)
        {
            if (((s[i] - '0') + carry) % 2)
            {
                operations += 2;
                carry = 1;
            }

            else
                operations++;
        }

        return operations + carry;
    }
};

