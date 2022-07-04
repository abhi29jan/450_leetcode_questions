class Solution {
public:
	string palindromicSubString(string inputString, int left, int right)
	{
		int inputStringLength = inputString.length();
		while (left >= 0 and right < inputStringLength) {
			if (inputString[left] != inputString[right]) {
				break;
			}
			left--;
			right++;
		}
		return inputString.substr(left + 1, right - left - 1);
	}
	string longestPalindrome(string inputString)
	{
		int inputStringLength = inputString.length();
		if (inputString.empty())
			return 0;
		string longestString = "";
		for (int i = 0; i < inputStringLength; i++) {
			string oddString = palindromicSubString(inputString, i, i);
			if (oddString.length() > longestString.length())
				longestString = oddString;
		}
		for (int i = 0; i < inputStringLength; i++) {
			string evenString = palindromicSubString(inputString, i, i + 1);
			if (evenString.length() > longestString.length())
				longestString = evenString;
		}
		return longestString;
	}
};
