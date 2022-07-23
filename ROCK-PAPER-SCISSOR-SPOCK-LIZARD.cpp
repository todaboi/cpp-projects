#include <iostream>
#include <stdlib.h>
int main(){
    std::cout<<"WELCOME TO TODA'S GAME\n";
    std::cout<<"rock paper scissor spock lizard\n";
    // here is rules : https://www.johndcook.com/blog/2018/08/07/rock-paper-scissors-lizard-spock/
    int computer;
    int user=0;
    srand(time(NULL));
    computer = rand() % 5 + 1;
    std::cout<<"CHOOSE OPTIONS:\n1)Rock\n2)Paper\n3)Scissor\n4)Spock\n5)Lizard\n";
    std::cin>>user;
    if (user==1 && computer == 2){
        std::cout<<"COMPUTER WON!";
    }else if(user==1 && computer ==3){
        std::cout<<"YOU WON!";
    }else if(user==1 && computer ==4){
        std::cout<<"COMPUTER WON!";
    }else if(user==1 && computer ==5){
        std::cout<<"YOU WON!";
    }else if(user==2 && computer ==1){
        std::cout<<"YOU WON!";
    }else if(user==2 && computer==3){
        std::cout<<"COMPUTER WON!";
    }else if(user==2 && computer ==4){
        std::cout<<"COMPUTER WON!";
    }else if(user==2 && computer==5){
        std::cout<<"COMPUTER WON!";
    }else if(user==3){
        if(computer==1){
            std::cout<<"COMPUTER WON!";
        }
        if(computer==2){
            std::cout<<"YOU WON!";
        }
        if(computer==4){
            std::cout<<"COMPUTER WON!";
        }
        if(computer==5){
            std::cout<<"YOU WON!";
        }
    }else if(user==4){
        if(computer==1){
            std::cout<<"YOU WON!";
        }
        if(computer==2){
            std::cout<<"COMPUTER WON!";
        }
        if(computer==3){
            std::cout<<"YOU WON!";
        }
        if(computer==5){
            std::cout<<"COMPUTER WON!";
        }
    }else if(user==5){
        if(computer==1){
            std::cout<<"COMPUTER WON!";
        }
        if(computer==2){
            std::cout<<"YOU WON!";
        }
        if(computer==3){
            std::cout<<"COMPUTER WON!";
        }
        if(computer==4){
            std::cout<<"USER WON!";
        }
    }
    
        
    
}
