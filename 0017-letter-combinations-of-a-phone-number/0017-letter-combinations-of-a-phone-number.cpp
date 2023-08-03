class Solution {
public:    
    void function(const std::vector<std::string>& dictionary, const std::string& digits,
                  std::vector<std::string>& ans, std::string temp, int index) {        
        if (index == digits.size()) {
            ans.push_back(temp);
            return;
        }

        // Get the corresponding letters for the current digit
        int d = digits[index] - '2';
        const std::string& letters = dictionary[d];

        // Recursively generate combinations for the next digit
        for (auto& c : letters) {
            function(dictionary, digits, ans, temp + c, index + 1);
        }
    }

    std::vector<std::string> letterCombinations(std::string digits) {
        const std::vector<std::string> dictionary = {"abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        std::vector<std::string> ans;
        std::string temp;

        if (digits.empty()) {
            return ans;
        }

        // index 0
        function(dictionary, digits, ans, temp, 0);
        return ans;
    }
};