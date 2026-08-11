// O(maxPile*N)

class Solution {

public:

int minEatingSpeed(vector<int>& piles, int h) {

int maxPile = INT_MIN;

for(int i = 0; i < piles.size(); i++){

maxPile = max(piles[i], maxPile);

}

for(int k = 1; k <= maxPile; k++){

int hours = 0;

for(int pile : piles){

hours += (pile +  k -1 )/k;

}

if(hours <= h)

return k;

}

return maxPile;

}

};


class Solution {
public:

    bool canEat(vector<int>& piles, int k, int h){
        long long hours = 0;
        for(int pile : piles){
            int div = pile/k;
            hours += div;
            if(pile % k != 0) hours++;
        }
        return hours <= h;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int left = 1;
        int right = 1000000000;

        while(left <= right){
            int mid = left + (right - left)/2;
            if(canEat(piles,mid,h)) right = mid - 1;
            else left = mid + 1;
        }

        return left;
    }
};
