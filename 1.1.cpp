class Different {
public:
    bool checkDifferent(string iniString) {
        bool log[256] = {false};
		int len = iniString.length();
        for(int i = 0;i<len;i++){
            if(log[iniString[i]]){
                return false;
            }else{
                log[iniString[i]]=true;
            }
        }
        return true;;
    }
};