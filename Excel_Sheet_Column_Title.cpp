string convertToTitle(int col) {
        
        string s="";

        while(col>0){
            int rem=col%26;
            if(rem==0){
                s+='Z';
                col=(col/26)-1;
            }
            else{
                s+=(rem-1)+'A';
                col=col/26;
            }
        }
        reverse(s.begin(),s.end());
        return s;
    }
