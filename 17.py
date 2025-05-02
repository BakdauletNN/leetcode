from typing import List


class Solution:
    def letterCombinations(self, digits: str) -> List[str]:
        letters = {
            "1": '',
            "2": ['a' ,'b', 'c'],
            "3": ['d', 'e', 'f'],
            "4":['g', 'h', 'i'],
            "5":['j', 'k', 'l'],
            "6":['m', 'n', 'o'],
            "7":['p', 'q', 'r', 's'],
            "8":['t', 'u', 'v'],
            "9":['w', 'x', 'y', 'z']
        }
        s = []
        idx = 0
        string = ""
        r = []
        if len(digits) == 1:
            return letters[digits]
        if len(digits) == 0:
            return []
        for i in digits:
            if i in letters.keys():
                s.append(letters[i])

        for j in range(0,len(s)):
            for k in range(j):
                string += s[idx][idx]
                string += s[j][k]
                string += s[j +1][k]
                r.append(string)
        return r
print(Solution().letterCombinations(digits="234"))