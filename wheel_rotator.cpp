//In my opinion a good problem statement :
/* https://codeforces.com/problemset/problem/731/A */
/*Night at the museum 47A on codeforces*/
//The reason it is unsolved by me is because i was not able to grasp the logic


#include <iostream>
using namespace std;

int main()
{
    std::string name;
    std::cin>>name;

    int min_no_of_rotations;

    //My logic is to create an array which basically has all alphabets
    string array_of_characters[26];

    for(int i=97 ; i<=122 ; i++)
    {
        array_of_characters[i] = (char)i ;
    }

    // std::cout<<(char)97<<std::endl; --> A
    // std::cout<<(char)122<<std::endl; --> Z
    return 0;
}