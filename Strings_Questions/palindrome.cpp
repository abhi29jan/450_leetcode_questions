class Solution {
public:
	int isPalindrome(string S)
	{
		int nu = S.length();
		for (int i = 0; i < nu / 2; i++) {
			if (S[i] != S[nu - 1 - i]) {
				return 0;
			}
		}
		return 1;
	}
};
