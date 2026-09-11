class Solution {
public:

      bool isVowel(char c){
        c = tolower(c);
        return c == 'a' || c == 'e' || c == 'i' ||c == 'o' ||c == 'u' ;
      }
    string toGoatLatin(string sentence) {
        stringstream ss(sentence);
        string word;
        string result = "";
        string a_suffix = "a";

        while (ss >> word){
            if (isVowel(word[0])){
                result += word + "ma" + a_suffix
                + " ";
            }
            else {
                result += word.substr(1) + word[0] + "ma" + a_suffix + " ";
            }

            a_suffix += "a";
        }

        if (!result.empty()){
            result.pop_back();
        }
        return result;
    }
};