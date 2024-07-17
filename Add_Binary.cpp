string addBinary(string a, string b) {

        int n=a.length();
        int m=b.length();
        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());

        if(n<m){
            for(int i=0;i<m-n;i++){
                a+='0';
            }
        }
        else if(m<n){
            for(int i=0;i<n-m;i++){
                b+='0';
            }
        }
        int carry='0';
        string ans="";
        for(int i=0;i<max(m,n);i++){

            if(a[i]=='1' && b[i]=='1' && carry=='1'){
                ans+='1';
                carry='1';
            }
            else if((a[i]=='1' && b[i]=='0' && carry=='1') || (a[i]=='0' && b[i]=='1' && carry=='1') || (a[i]=='1' && b[i]=='1' && carry=='0')){
                ans+='0';
                carry='1';
            }
            else if((a[i]=='1' && b[i]=='0' && carry=='0') || (a[i]=='0' && b[i]=='1' && carry=='0') || (a[i]=='0' && b[i]=='0' && carry=='1')){
                ans+='1';
                carry='0';
            }
            else{
                ans+='0';
                carry='0';
            }

        }
        if(carry=='1'){
            ans+='1';
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
