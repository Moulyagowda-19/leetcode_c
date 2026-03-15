int maxDistance(int* colors, int colorsSize) {

    int max = 0;

    for(int i = 0; i < colorsSize; i++){
        if(colors[i] != colors[0]){
            if(i > max)
                max = i;
        }

        if(colors[i] != colors[colorsSize-1]){
            int dist = colorsSize - 1 - i;
            if(dist > max)
                max = dist;
        }
    }

    return max;
}