#include <string>
#include <iostream>
#include <unordered_set>

using namespace std;

unordered_multiset<string> magazine, ransom;

int main()
{
    size_t N, M;
    cin >> N >> M;
    
    if(N < M)
    {
        cout << "No";
        return 0;
    }
    
    string str;
    
    for(size_t i = 0; i < N; ++i)
    {
        cin >> str;
        magazine.insert(str);
    }
    
    for(size_t i = 0; i < M; ++i)
    {
        cin >> str;
        ransom.insert(str);
    }
    
    for(const auto& word : ransom)
    {
        auto found = magazine.find(word);
        
        if(found == magazine.end())
        {
            cout << "No";
            return 0;
        }
        
        magazine.erase(found);
    }
    cout << "Yes";
}