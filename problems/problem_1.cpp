void problemSolution1(float consumed_water) {
    float cost = 13;
    // write your code here
    if (consumed_water <= 30) {
        cost += consumed_water * 0.4;
    } else {
        cost += 30 * 0.4;
        consumed_water -= 30;

        if (consumed_water <= 20) {
            cost += consumed_water * 0.12;
        } else {
            cost += 20 * 0.12;
            consumed_water -= 20;

            if (consumed_water <= 10) {
                cost += consumed_water * 1.4;
            } else {
                cost += 10 * 1.4;
                consumed_water -= 10;
                cost += consumed_water * 1.5;
            }
        }
    }
    return cost; // deleted
}
