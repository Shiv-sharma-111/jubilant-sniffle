bool areIsomorphic(string str1, string str2)
{

    // Your code here
    int n1 = str1.size();
    int n2 = str2.size();

    int freq1[26];
    int freq2[26];

    memset(freq1, 0, sizeof(freq1));
    memset(freq2, 0, sizeof(freq2));

    for (int i = 0; i < n1; i++)
        freq1[str1[i] - 'a']++;
    for (int i = 0; i < n2; i++)
        freq2[str2[i] - 'a']++;

    vector<int> vec1;
    vector<int> vec2;

    for (int i = 0; i < n1; i++) { 
        if (freq1[str1[i] - 'a'] != 0) {
            vec1.push_back(freq1[str1[i] - 'a'])
            //cout << str1[i] << freq1[str1[i] - 'a'] << " ";
            freq1[str1[i] - 'a'] = 0;
        }
    }

    for (int i = 0; i < n2; i++) {
        if (freq2[str2[i] - 'a'] != 0) {
            vec12.push_back(freq2[str2[i] - 'a'])
            //cout << str2[i] << freq2[str2[i] - 'a'] << " ";
            freq2[str2[i] - 'a'] = 0;
        }
    }
    sort(vec1.begin(),vec1.end());
    sort(vec2.begin(),vec2.end());

    for(int i=0;i<vec1.size();i++)
    {
        if(vec1[i]!=vec2[i])
        {
            return false;
        }
    }
    return true;


}
