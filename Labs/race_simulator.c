#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

// Structures section
struct Race {
    int numberOfLaps;
    int currentLap;
    char* firstPlaceDriverName;
    char* firstPlaceRaceCarColor;

};

struct RaceCar {
    char* driverName;
    char* raceCarColor;
    int totalLapTime;
};

// Print functions section
void printIntro(){
    printf("Welcome to our main event digital race fans!\nI hope everybody has their snacks because we are about to begin!\n");
};

void printCountDown(){
    printf("Racers get Ready! In...\n");
    for (int i = 5; i>0;i--){
        printf("%d\n", i);
        sleep(1);
    }
    printf("Race!!!\n");
};

void printFirstPlaceAfterLap(struct Race* race) {
    printf("After lap %d, %s is in first place driving a %s race car.\n", race->currentLap, race->firstPlaceDriverName, race->firstPlaceRaceCarColor);
 
};

void printCongratulation(struct Race* race) {
    printf("Congratulations %s driving a %s race car on winning the race!\n", race->firstPlaceDriverName, race->firstPlaceRaceCarColor);
}

// Logic functions section
int calculateTimeToCompleteLap() {
    int speed = (rand() % 200) + 1; // Random speed between 1 and 100
    int acceleration = (rand() % 10) + 1; // Random acceleration between 1 and 10
    int nerves = (rand() % 50) + 1; // Random nerves factor between 1 and 5
    return speed + acceleration + nerves;
};

void updateRaceCar(struct RaceCar* raceCar) {
    int lapTime = calculateTimeToCompleteLap();
    raceCar->totalLapTime += lapTime;
};

void updateFirstPlace(struct Race* race, struct RaceCar* raceCar1,struct RaceCar* raceCar2) {
    if (race->currentLap == 1 || raceCar1->totalLapTime < raceCar2->totalLapTime) {
        race->firstPlaceDriverName = raceCar1->driverName;
        race->firstPlaceRaceCarColor = raceCar1->raceCarColor;
    } else {
        race->firstPlaceDriverName = raceCar2->driverName;
        race->firstPlaceRaceCarColor = raceCar2->raceCarColor;
    }
}

void startRace(struct Race* race, struct RaceCar* raceCar1, struct RaceCar* raceCar2) {
    race->numberOfLaps = 5;
    race->currentLap = 1;
    race->firstPlaceDriverName = "";
    race->firstPlaceRaceCarColor = "";
    
    
    for (race->currentLap=1; race->currentLap <= race->numberOfLaps; race->currentLap++) {
        updateRaceCar(raceCar1);
        updateRaceCar(raceCar2);
        updateFirstPlace(race, raceCar1, raceCar2);
        printFirstPlaceAfterLap(race);
        sleep(2);
       
    }
    printCongratulation(race);
}

int main() {
	srand(time(NULL));
    struct RaceCar raceCar1 = {"Alice", "Red", 0};
    struct RaceCar raceCar2 = {"Bob", "Blue", 0};
    struct Race race;
    printIntro();
    printCountDown();
    startRace(&race, &raceCar1, &raceCar2);

    return 0;
  
};