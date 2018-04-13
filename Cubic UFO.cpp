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
        
        if(A <= sqrt(2.0))
        {
            A /= sqrt(2.0);
            //cout << A << " " << sqrt(2.0) << endl;
            double L = 0.0;                  // large
            double S = (45.0 * PI / 180.0);  // small
            double C;
            
            //cout << cos(S) << " " << cos(L) << endl; // 0.707107 1
            
            while((cos(L) - 0.0000001) > cos(S))
            {
                C = (L + S) / 2;
                
                //cout << C << " " << cos(C) << " " << A << " " << L << " " << S << endl;
                
                if(cos(C) > A)
                {
                    L = C;
                }
                else
                {
                    //cout << S << " " << C << endl;
                    S = C;
                }
            }
            C += (45.0 * PI / 180.0);
            
            printf("Case #%d:\n", i);
            printf("0.5 0 0\n");
            printf("0 %.8lf %.8lf\n", (-cos(C) * 0.5), sqrt(0.25 - (0.25 * cos(C) * cos(C))));
            printf("0 %.8lf %.8lf\n", sqrt(0.25 - (0.25 * cos(C) * cos(C))), (cos(C) * 0.5));
        }
        //else
        //{
        //    
        //}
    }
    
    return 0;
}
CLOSE
