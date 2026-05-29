class ExamTracker {
public:
    map<int, long long> glavonitre;

    ExamTracker() {
        glavonitre[0] = 0;
    }

    void record(int time, int score) {
        auto it = glavonitre.upper_bound(time);
        long long prevSum;

        if (it != glavonitre.begin()) {
            it--;
            prevSum = it->second;
        } else {
            prevSum = 0;
        }

        glavonitre[time] = prevSum + score;

        it = glavonitre.upper_bound(time);
        while (it != glavonitre.end()) {
            it->second += score;
            it++;
        }
    }

    long long totalScore(int startTime, int endTime) {
        auto endIt = glavonitre.upper_bound(endTime);
        long long sumBeforeEnd = 0;
        if (endIt != glavonitre.begin()) {
            endIt--;
            sumBeforeEnd = endIt->second;
        }

        auto startIt = glavonitre.lower_bound(startTime);
        long long sumBeforeStart = 0;
        if (startIt != glavonitre.begin()) {
            startIt--;
            sumBeforeStart = startIt->second;
        }

        return sumBeforeEnd - sumBeforeStart;
    }
};
