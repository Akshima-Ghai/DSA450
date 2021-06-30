class Solution{
public:	
	
	//reverse the string
	int isPlaindrome(string S)
	{
	    string rev_str;
	    int len = S.length();
	    for(int i=len-1;i>=0;i--){
	        rev_str.push_back(S[i]);
	    }
	    if(S==rev_str){
	        return 1;
	    }else{
	        return 0;
	    }
	}

};
