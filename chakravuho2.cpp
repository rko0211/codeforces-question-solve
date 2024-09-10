#include <bits/stdc++.h>
using namespace std;
bool canAbhimanyuCross(int i, long long int currentPower, long long int skipLeft, long long int rechargeLeft, vector<long long int> &enemyPowers, long long int initialPower)
{

  int no_Of_Enemy_Having_Power_More_Than_Abhimanyu = 0; // This variable keeps record of the enemies with more power than Abhimanyu's initial power
  for (int i = 0; i < 11; i++)
  {
    // Calculate the number of enemies who have more power than Abhimanyu's initial power
    if (enemyPowers[i] > initialPower)
    {
      no_Of_Enemy_Having_Power_More_Than_Abhimanyu += 1;
    }
  }

  // If the number of 'skipLeft' operations is less than the number of enemies with more power than Abhimanyu's initial power, then Abhimanyu can never cross the circles.So, we return answer as False
  if (skipLeft < no_Of_Enemy_Having_Power_More_Than_Abhimanyu)
  {
    return false;
  }

  // Otherwise, we will iterate through all the enemies' powers in the circle
  for (int i = 0; i < 11; i++)
  {

    // Here is the case for special enemies K3 and K7
    if (i == 2 || i == 6)
    {
      // Case when enemyPowers[i] > initialPower
      if (enemyPowers[i] > initialPower)
      {
        // If this case happen then Abhimanyu should skip fight in (i)th circle and (i+1)th circle As Abhimanyu can never win this battle

        if (skipLeft >= 2)
        {
          // Abhimanyu should skip 2 fight because K3,K7 can attack him from behind if he is battling in iteratively next circle

          skipLeft -= 2; // Reduce this operation by 2

          i++; // Abhimanyu skip current circle and from for loop skip one more circle
          continue;
        }
        else
        {
          // If Number of SkipLeft operation is less than 2 then Abhimanyu will not be able to skip the circle. Hence answer is False
          return false;
        }
      }
      // Case when enemyPowers[i] <= initialPower
      else
      {
        // If Abhimanyu currentPower is less than current enemyPowers[i];
        if (currentPower < enemyPowers[i])
        {
          // If Number of rechargeLeft operation exist then he should recharge his Power
          if (rechargeLeft > 0)
          {
            currentPower = initialPower; // Update current Power with Abhimanyu initial power

            rechargeLeft -= 1; // Reduce this operation number by 1
          }
          // If number of SkipLeft operation exist
          else if (skipLeft >= 2)
          {
            skipLeft -= 2; // reduce skipLeft operation by 2 As Abhimanyu should go 2 step ahead from cell 3 and cell 4 as enemy in those circle can attack him from behind if he is battling in iteratively next circle

            i++; // Abhimanyu skip current circle and from for loop skip one more circle
            continue;
          }
          // If Number of rechargeLeft and skipLeft operation does not exist
          else
          {
            // Return answer as False as Abhimanyu will not be able to skip the circles
            return false;
          }
        }

        // Incase when currentPower>=enemyPowers[i] after updation

        // As K3 and K7 has ability to regenerate themselves once with half of their initial power
        long long int Regeneratedpower_of_special_enemy = enemyPowers[i] / 2;

        currentPower -= Regeneratedpower_of_special_enemy; // reduces Abhimanyu's current Power by this amount. As they can regenerate themselves thats why enemyPowers[i] does not change only Abhimanyu power change

        // After updation of current power we will check this condition
        if (currentPower < enemyPowers[i])
        {
          // If this condition satisfied then we will check number of rechargeLeft operation. If rechargeLeft operation exist
          if (rechargeLeft > 0)
          {
            currentPower = initialPower; // Update Abhimanyu's currentPower

            rechargeLeft -= 1; // reduce the number of this operation
          }
          // If the rechargeLeft operation does not exist, we will check for skipLeft operation exist or not
          else if (skipLeft >= 2)
          {
            // If we need to skip current (i)th circle and (i+1)th circle then we will update the current power by adding same value which was subtracted earlier
            currentPower += Regeneratedpower_of_special_enemy;

            skipLeft -= 2; // Now skipLeft operation reduced by 2 as current (i)th circle containing special enemy so Abhimanyu need to skip 2 circles, i.e (i)th circle and (i+1)th circle

            i++; // Abhimanyu skip current circle and from for loop skip one more circle that is (i+1)th circle
            continue;
          }
          // If Number of rechargeLeft and skipLeft operation does not exist
          else
          {
            // Return answer as False as Abhimanyu will not be able to skip the circles
            return false;
          }
        }
        // After checking every thing above
        currentPower -= enemyPowers[i]; // Now special enemies are killed
      }
    }

    // Here is the case for Normal enemies like K1,K2,k4,k5,k6,K8,K9,k10,K11
    else
    {
      // If current enemyPower[i] is greater than Abhimanyu's initital power
      if (enemyPowers[i] > initialPower)
      {
        // If this condition satisfied then he should use his skipLeft opeartion
        if (skipLeft > 0)
        {
          skipLeft -= 1; // reduce skipLeft operation by 1 as he will skip the current circle
        }
        // If skipLeft operation does not exist
        else
        {
          // In that case answer should be false
          return false;
        }
      }
      // Case when enemyPowers[i] <= initialPower
      else
      {

        // If current enemyPower[i] is greater than Abhimanyu's current power
        if (enemyPowers[i] > currentPower)
        {
          // If Abhimanyu's rechargeLeft operation exist
          if (rechargeLeft > 0)
          {
            rechargeLeft -= 1; // reduce rechargeLeft operation by 1

            currentPower = initialPower; // Update Abhimanyu's current power
          }
          //  If Abhimanyu's rechargeLeft operation  does not exist then he should avoid this battle
          else if (skipLeft > 0)
          {
            skipLeft--; // reduce skipLeft operation by 1
            continue;
          }
          // If Abhimanyu's rechargeLeft operation and skipLeft operation does not exist then answer should be false;
          else
          {
            // Return answer is false;
            return false;
          }
        }
        // After checking every thing above
        currentPower -= enemyPowers[i]; // Now killed the enemis
      }
    }
  }

  // After checking every thing above we will return answer as true
  return true;
}
int main()
{

  long long int initial_power; // variable represent initial power of Abhimanyu

  long long int skipLeft; // Variable represent number of times Abhimanyu can skip battle

  long long int rechargeLeft; // Variable represent number of times Abhimanyu can recharge himself

  vector<long long int> enemy_powers; // An array stores the value of power of different enemies present in all 11 circles

  // First Test Case

  initial_power = 50; // Example initial power

  enemy_powers = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 11}; // Example enemy powers

  skipLeft = 2; // Number of skips

  rechargeLeft = 5; // Number of recharges

  bool can_cross2 = canAbhimanyuCross(0, initial_power, skipLeft, rechargeLeft, enemy_powers, initial_power);
  cout << "Can Abhimanyu cross the Chakravyuha? " << (can_cross2 ? "Yes" : "No") << endl;

  // Second Test Case

  initial_power = 50; // Example initial power

  enemy_powers = {10, 10, 60, 20, 20, 10, 70, 10, 20, 10, 11}; // Example enemy powers

  skipLeft = 4; // Number of skips

  rechargeLeft = 10; // Number of recharges

  bool can_cross3 = canAbhimanyuCross(0, initial_power, skipLeft, rechargeLeft, enemy_powers, initial_power);
  cout << "Can Abhimanyu cross the Chakravyuha? " << (can_cross3 ? "Yes" : "No") << endl;
  return 0;
}