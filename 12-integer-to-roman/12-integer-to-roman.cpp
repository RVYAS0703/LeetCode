class Solution {
public:
    const int rom_val[13] = {1000,900,500,400,100,90,50,40,10,9,5,4,1};
    const string rom_str[13] = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
    string intToRoman(int num) {
        string out_string = "";
        
		//Iterate through the lookup table subtracting the largest possible value from the input number.
        for (int i = 0; i < 13; i++) {
            while (num - rom_val[i] >= 0) {
                out_string += rom_str[i];
                num -= rom_val[i];
            }
        }
        
        return out_string;
    }
};
