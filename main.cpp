//
//  main.cpp
//  e-Voting_using_blockchain-Project
//
//

#include "e-Voting_Key_Generation_final.hpp"
#include "e-Voting_Registration_Process.hpp"
#include "e-Voting_Election_Day_Process.hpp"

int main(int argc, const char * argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // generateKeyPairFile();
    // continueRegistrationProcess();
    
    openElectionPortal();
    
    
    cout<<endl<<"END!!";
    return 0;
}
