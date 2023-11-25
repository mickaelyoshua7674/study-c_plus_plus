#include <iostream>
#include <string>

class GameEntry {
    private:
        std::string name;
        int score;
    public:
        GameEntry(const std::string& n="", int s=0) {
            name = n;
            score = s;
        }
        // const functions don't have permission to change menber variables 
        std::string getName() const {return name;}
        int getScore() const {return score;}
};

class Scores {
    private:
        int maxEntries;
        int numEntries;
    public:
        GameEntry* entries;
        Scores(int maxEnt = 10) {
            maxEntries = maxEnt;
            entries = new GameEntry[maxEntries];
            numEntries = 0;
        }
        ~Scores() {delete[] entries;}
        void add(const GameEntry& e) {
            int newScore = e.getScore(); //score to be added
            if (numEntries == maxEntries) { //if the array is full
                if (newScore <= entries[maxEntries-1].getScore()) {return;} //if score is not high enough ignore
            } else {numEntries++;} //if not full, count one more entry

            int i = numEntries-2; //start with the secound lowest value because was already checked if is <= then the last
            while (i>=0 && newScore>entries[i].getScore()) {
                entries[i+1] = entries[i]; //shift right if smaller
                i--;
            }
            entries[i+1] = e; //insert in empty spot
        }
        GameEntry remove(int i) {
            if (i<0 || i>= numEntries) {throw std::invalid_argument("Invalid index.");} // invalid index
            GameEntry e = entries[i]; // save removed object to return
            for (int j=i+1; j<numEntries; j++) {entries[j-1]=entries[j];} // shift left
            numEntries--;
            return e;
        }
};

int main() {
    Scores sc = Scores();
    sc.add(GameEntry("Mickael",90));
    sc.add(GameEntry("Yoshua",80));
    sc.add(GameEntry("Cardoso",70));
    sc.add(GameEntry("Reis",60));
    sc.add(GameEntry("G",50));
    for (int i=0; i<5; i++) {
        std::cout<<sc.entries[i].getName()<<" "<<sc.entries[i].getScore()<<"\n";
    }
    sc.remove(1);
    for (int i=0; i<4; i++) {
        std::cout<<sc.entries[i].getName()<<" "<<sc.entries[i].getScore()<<"\n";
    }
}