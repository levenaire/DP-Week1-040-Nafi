#include "RunSession.h"
#include <iostream>

RunSession::RunSession(IInputGenerator* generator,
                       IScoringRule* scoring,
                       IRewardRule* reward)
    : generator_(generator),
      scoring_(scoring),
      reward_(reward),
      money_(0) {}

void RunSession::StartRun() {

    std::cout << "=== RUN START ===\n";

    for (int round = 1; round <= 3; round++) {

        std::cout << "Round " << round << "\n";

        int input = generator_->Generate();
        std::cout << "[PLAY] input generated: " << input << "\n";

        int baseScore = scoring_->ComputeScore(input);
        std::cout << "[SCORE] base score: " << baseScore << "\n";

        int reward = reward_->ComputeReward(baseScore);

        money_ += reward;

        std::cout << "[REWARD] gain: " << reward
                  << " | money: " << money_ << "\n";

        shop_.ShowOffer();

        std::cout << "\n";
    }

    std::cout << "=== RUN END ===\n";
    std::cout << "Final money: " << money_ << "\n";
}