#ifndef DYNAMIC_PLAYMAKER_H
#define DYNAMIC_PLAYMAKER_H

// Player Class
class Player {
private:
    int speed;       // Player's speed
    int positionX;   // X coordinate of the player
    int positionY;   // Y coordinate of the player

public:
    Player();                     // Default Constructor
    void move(int deltaX, int deltaY);   // Move the player
    int getX() const;             // Getter for X position
    int getY() const;             // Getter for Y position
    void setSpeed(int newSpeed);  // Setter for speed
    int getSpeed() const;         // Getter for speed
};

// Ball Class
class Ball {
private:
    int positionX;   // Ball's X coordinate
    int positionY;   // Ball's Y coordinate
    bool isCaught;   // Ball status: caught or not

public:
    Ball();                     // Default Constructor
    void updatePosition();      // Update ball position
    bool checkIfCaught(int playerX, int playerY);  // Check if player caught the ball
    int getX() const;           // Getter for X position
    int getY() const;           // Getter for Y position
};

// ScoreManager Class
class ScoreManager {
private:
    int score;   // Player's score

public:
    ScoreManager();          // Default Constructor
    void addPoints(int points);    // Add points to the score
    int getScore() const;     // Getter for current score
};

// Playmaker Class
class Playmaker {
private:
    int difficultyLevel;   // Difficulty level of the game
    int roundNumber;       // Current round number

public:
    Playmaker();                     // Default Constructor
    void adjustDifficulty();         // Adjust difficulty as rounds progress
    void startRound();               // Start a new round
    int getRoundNumber() const;      // Getter for round number
    int getDifficultyLevel() const;  // Getter for difficulty level
};

// GameController Class
class GameController {
private:
    Player player;         // Player object
    Ball ball;             // Ball object
    ScoreManager score;    // Score management object
    Playmaker playmaker;   // Playmaker for rounds and difficulty

public:
    GameController();              // Default Constructor
    void runGame();                // Run the minigame
    void checkForCatches();        // Check if player catches the ball
    void updateGameState();        // Update game state after each round
    int getFinalScore() const;     // Return final score
};

#endif  // DYNAMIC_PLAYMAKER_H
