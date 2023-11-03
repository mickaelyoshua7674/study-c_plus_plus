#include <iostream>

int main() {
    bool b = false;
    if (b) {
        std::cout<<"True one way."<<std::endl;
    }
    else {
        std::cout<<"False one way."<<std::endl;
    }

    // This format is for single statements
    if (b) std::cout<<"True other way."<<std::endl;
    else std::cout<<"False other way."<<std::endl;

    // SWITCH CASE
    int x = 4;
    switch (x) {
        case 1:
            std::cout<<"1"<<std::endl;
            break; // exit the switch statement,
                   // if not it would go to the next case and execute the code there
        case 2:
            std::cout<<"2"<<std::endl;
            break;
        case 3:
            std::cout<<"3"<<std::endl;
            break;
        default:
            std::cout<<"Other"<<std::endl;
            break;
    }

    // FOR LOOP
    for (int i = 0; i<10; i++) {
        std::cout<<i<<std::endl;
    }

    // DO WHILE LOOP
    int y = 0;
    do {
        std::cout<<y<<std::endl;
        y++;
    } while (y<5);
}