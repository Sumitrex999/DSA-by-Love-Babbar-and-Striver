class Solution {
public:
    int compress(vector<char>& chars) {
        int i=0;
        int ansIndex = 0;
        int n = chars.size();

        while(i<n){
            int j=i+1;
            while (j<n && chars[i]==chars[j])
            {
                j++;
            }
            //yaha kab jab aaoge
            //ya toh vector poora traverse krdia
            //ya fer new/Differet character encounter kia hai

            //oldChar stor karlo
            chars[ansIndex++]= chars[i];

            int count =j-i;

            if(count > 1){
                //converting counting into single digit and saving in answer
                string cnt=to_string(count);
                for(char ch: cnt)
                {
                    chars[ansIndex++]=ch;
                }
            }
            //moving to new character
            i=j;
        }
        return ansIndex;

        
    }
};


//more optimal solution
class Solution {
public:
    int addNumber(int num, int i, vector<char>& chars) {
        string digits = "";
        while(num > 0) {
            digits = to_string(num%10) + digits;
            num = num/10;
        }
        for(char c: digits) {
            chars[i] = c;
            i++;
        }
        return i;
    }
    int compress(vector<char>& chars) {
        int i=0, j=0;
        int n = chars.size();
        while(j < n) {
            char current = chars[j];
            chars[i] = current;
            i++;
            int count = 0;
            while(chars[j] == current) {
                j++;
                count++;
                if(j == n) {
                    break;
                }
            }
            if(count > 1) {
                i = addNumber(count, i, chars);
            }
        }
        chars.erase(chars.begin()+i, chars.end());
        return chars.size();
    }
};
