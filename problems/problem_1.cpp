void problemSolution1(float consumed_water) {
    float cost = 13;
    // write your code here
    if(consumed_water - 30 >= 0){
        cost += 30 * 0.4;
    } else {
        cost += consumed_water * 0.4;
    }
    if(consumed_water - 20 >= 0){
      cost += 20 * 0.12;
    } else{
      cost += consumed_water * 0.12;
    }
    if(consumed_water - 10 >= 0){
        cost += 10 * 1.4;
    } else {
        cost += consumed_water * 1.5;
    }

    return cost;
}
