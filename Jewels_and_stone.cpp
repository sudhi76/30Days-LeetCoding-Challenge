class Solution {
public:
    int numJewelsInStones(string J, string S) {
        if(J.length()<=50 && S.length()<=50)
        {
            int count = 0;
            for (int j=0;j<J.length();j++)
            {
                char Jchar = J.at(j);
                for(int i=0;i<S.length();i++)
                {
                    if (Jchar == (S.at(i))) {


                        count++;
                    }
                }

            }
            return count;
        }
        return -1;

    }

};
