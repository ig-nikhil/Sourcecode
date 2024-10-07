class Solution {
public:
    int minLength(string s) {
        while(true){
            size_t idx1 = s.find("AB");
            size_t idx2 = s.find("CD");
           if(idx1 != string::npos ){
                s.erase(s.begin()+idx1,s.begin()+idx1+2);
           }
           else if(idx2 != string::npos){
                s.erase(s.begin()+idx2,s.begin()+idx2+2);
           }
           else{
                return s.size();
           }
        }

        return s.size();
    }
};
