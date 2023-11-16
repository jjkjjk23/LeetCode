/* 68. Text Justification
Hard
3.4K
4.3K
Companies
Given an array of strings words and a width maxWidth, format the text such that each line has exactly maxWidth characters and is fully (left and right) justified.

You should pack your words in a greedy approach; that is, pack as many words as you can in each line. Pad extra spaces ' ' when necessary so that each line has exactly maxWidth characters.

Extra spaces between words should be distributed as evenly as possible. If the number of spaces on a line does not divide evenly between words, the empty slots on the left will be assigned more spaces than the slots on the right.

For the last line of text, it should be left-justified, and no extra space is inserted between words.

Note:

A word is defined as a character sequence consisting of non-space characters only.
Each word's length is guaranteed to be greater than 0 and not exceed maxWidth.
The input array words contains at least one word.
 

Example 1:

Input: words = ["This", "is", "an", "example", "of", "text", "justification."], maxWidth = 16
Output:
[
   "This    is    an",
   "example  of text",
   "justification.  "
]
Example 2:

Input: words = ["What","must","be","acknowledgment","shall","be"], maxWidth = 16
Output:
[
  "What   must   be",
  "acknowledgment  ",
  "shall be        "
]
Explanation: Note that the last line is "shall be    " instead of "shall     be", because the last line must be left-justified instead of fully-justified.
Note that the second line is also left-justified because it contains only one word.
Example 3:

Input: words = ["Science","is","what","we","understand","well","enough","to","explain","to","a","computer.","Art","is","everything","else","we","do"], maxWidth = 20
Output:
[
  "Science  is  what we",
  "understand      well",
  "enough to explain to",
  "a  computer.  Art is",
  "everything  else  we",
  "do                  "
]
 

Constraints:

1 <= words.length <= 300
1 <= words[i].length <= 20
words[i] consists of only English letters and symbols.
1 <= maxWidth <= 100
words[i].length <= maxWidth
*/

#include <vector>
#include <string>
using namespace std;
class Solution {
public:
    vector<string> fullJustify(vector<string>& words, int maxWidth) {
        int wordWidth = 0;
        vector<string> answer;
        int l = 0;
        for (int i=0; i<words.size();i++) {
            if (words[i].size()+wordWidth+(i-l)<=maxWidth){
                wordWidth+=words[i].size();
                if (i==words.size()-1) {
                    answer.push_back(finalLine(l, maxWidth, words));
                    return answer;
                }
            }
            else {
                answer.push_back(processLine(i-1,l, wordWidth, maxWidth, words));
                l=i;
                i--;
                wordWidth=0;
            }
        }
        return answer;
    }
    string processLine(int i, int l, int &wordWidth, int maxWidth, vector<string>& words){
        
        if (i==l){
            return (words[i]+string(maxWidth-wordWidth, ' ')); 
        }
        int avgSpaces = (maxWidth-wordWidth)/(i-l);
        int numExtras = (maxWidth-wordWidth)%(i-l);
        string answer;
        int j = l;
        for ( ; j<numExtras+l; j++){
            answer+=words[j]+string(avgSpaces+1,' ');
        }
        for (; j<i; j++) {
            answer+=words[j]+string(avgSpaces,' ');
        }  
        answer+=words[i];
        return answer;
    }

    string finalLine(int l, int maxWidth, vector<string> words) {
        string answer;
        int wordWidth=0;
        for (int i = l; i<words.size()-1; i++){
            answer+=words[i]+" "; 
            wordWidth+=words[i].size()+1;
        } 
        wordWidth+=words.back().size();
        return answer + words[words.size()-1]+string(maxWidth-wordWidth, ' ');
    }
};


int main(){
    Solution solution;
    vector<string> prompt = {"hello", "buddy", "I", "am", "Jacob", "Keller", "what", "do", "you", "do"};
    vector<string> answer = solution.fullJustify(prompt,7);
};
