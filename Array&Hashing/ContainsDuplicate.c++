
#include <iostream>
#include <algorithm>
#include <list>
using namespace std;
#include <unordered_set>

bool constantDuplicate(vector<int>& nums){
 
    unordered_set<int> s;
     for (int i = 0; i < nums.size(); i++) {
            if (s.find(nums[i]) != s.end()) {
                return true;
            }
            s.insert(nums[i]);
        }
    return false;
    
}

int main()
{   
 
    /*Given an integer array nums,
     * return true if any value appears at least twice in the array,
     * and return false if every element is distinct.
     * */
    vector<int> vect;
    vect.push_back(1);
    vect.push_back(2);
    vect.push_back(3);
    vect.push_back(4);
    std::cout << constantDuplicate(vect);
    return 0;
}