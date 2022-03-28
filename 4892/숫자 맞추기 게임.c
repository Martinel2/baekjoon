 /*이 게임을 시작할 때는 친구가 숫자 하나를 머리속에 생각해야 한다. 이 숫자를 n0이라고 하자. 그러고 나서 다음과 같이 게임을 진행한다.

친구에게 n1 = 3*n0 계산을 하라고 한 뒤, n1이 짝수인지 홀수인지를 말해달라고 한다.
n1이 짝수라면, n2 = n1/2를, 홀수라면 n2 = (n1+1)/2를 계산해달라고 한다.
n3 = 3*n2의 계산을 부탁한다.
친구에게 n4 = n3/9를 계산한 뒤, 그 값을 말해달라고 한다. (n4는 나눗셈의 몫이다)
자 이제, n1이 짝수였다면, n0 = 2*n4로, 홀수였다면, n0 = 2*n4+1로 처음 친구가 생각한 숫자를 맞출 수 있다.
예를 들어,  친구가 생각한 수가 n0=37이었다면, n1 = 111이 되고 홀수이다. 그 다음 n2 = 56, n3 = 168, n4 = 18이 된다. 친구는 n4를 알려주게 된다. 

그럼 2*n4+1 = 37이기 때문에, 친구가 제일 처음 생각한 숫자를 맞출 수 있다.
*/

#include <stdio.h>

int main()
{
    int n0,n1,n2,n3,n4;
    int cnt=1;
    scanf("%d", &n0);
    while(n0 != 0)
    {
        n1 = 3*n0;
        if(n1%2==0) //n1이 짝수
            n2 = n1/2;
        
        else // n1이 홀수
            n2 = (n1+1)/2;
        
        n3 = 3*n2;
        n4 = n3/9;
        
        if(n1%2==0)
            printf("%d. even %d\n", cnt,n4);
        else
            printf("%d. odd %d\n", cnt,n4);
        
        scanf("%d", &n0);
        cnt++;
    }
    
    return 0;
}
