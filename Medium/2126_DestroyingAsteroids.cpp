class Solution
{
public:
    bool asteroidsDestroyed(int mass, vector<int> &asteroids)
    {
        long long Currmass = mass;
        sort(asteroids.begin(), asteroids.end());
        for (int i = 0; i < asteroids.size(); i++)
        {
            if (asteroids[i] <= Currmass)
            {
                Currmass = Currmass + asteroids[i];
            }
            else
            {
                return false;
            }
        }
        return true;
    }
};

// Example 1:
// Input: mass = 10, asteroids = [3,9,19,5,21]
// Output: true
// Explanation: One way to order the asteroids is [9,19,5,3,21]:
// - The planet collides with the asteroid with a mass of 9. New planet mass: 10 + 9 = 19
// - The planet collides with the asteroid with a mass of 19. New planet mass: 19 + 19 = 38
// - The planet collides with the asteroid with a mass of 5. New planet mass: 38 + 5 = 43
// - The planet collides with the asteroid with a mass of 3. New planet mass: 43 + 3 = 46
// - The planet collides with the asteroid with a mass of 21. New planet mass: 46 + 21 = 67
// All asteroids are destroyed.

// Example 2:
// Input: mass = 5, asteroids = [4,9,23,4]
// Output: false
// Explanation:
// The planet cannot ever gain enough mass to destroy the asteroid with a mass of 23.
// After the planet destroys the other asteroids, it will have a mass of 5 + 4 + 9 + 4 = 22.
// This is less than 23, so a collision would not destroy the last asteroid.