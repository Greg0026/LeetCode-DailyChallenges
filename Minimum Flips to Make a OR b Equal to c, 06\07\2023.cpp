class Solution {
public:
    int minFlips(int a, int b, int c) {
        string bA = bitset<32>(a).to_string();
        string bB = bitset<32>(b).to_string();
        string bC = bitset<32>(c).to_string();

        int count (0);
        for (int i (bA.size()-1); i>=0; --i) {
            switch (bC[i]) {
                case '0':
                    if (bA[i]=='1') {
                        ++count;
                    }
                    if (bB[i]=='1') {
                        ++count;
                    }
                    break;
                case '1':
                    if (bA[i]!='1' && bB[i]!='1') {
                        ++count;
                    }
                    break;
            }
        } 

        return count;
    }
};
