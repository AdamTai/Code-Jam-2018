#include <bits/stdc++.h>

using namespace std;

#define PI 3.14159265

int main()
{
    int T;
    //scanf("%d\n", &T);
    cin >> T;

    int i;
    for(i = 1; i <= T; i++)
    {
        double A;
        cin >> A;
        
        if(A <= 1)
        {
            A /= sqrt(2.0);
            
            double Temp = acos(A) + (45.0 * PI / 180.0);
            
            printf("Case #%d:\n", i);
            printf("0.5 0 0\n");
            printf("0 %.8lf %.8lf\n", (sin(Temp) * 0.5), (cos(Temp) * 0.5));
            printf("0 %.8lf %.8lf\n", (-cos(Temp) * 0.5), (sin(Temp) * 0.5));
        }
        //else
        //{
        //}
    }
    
    return 0;
}
