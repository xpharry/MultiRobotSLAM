#include "SSIPatrolAgent.h"

//#define MY_CONFIG_FILENAME "params/DTA/DTASSI.params"

//Sequential Single Item Auction with dynamic compact partition of the environment
class DTASSI_Agent: public SSIPatrolAgent {


public:

    DTASSI_Agent(){}   	

};


int main(int argc, char** argv) {
  
    DTASSI_Agent agent;
    agent.init(argc,argv);
    agent.run();

    return 0; 
}

